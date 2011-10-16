<?php

/**
 * @file
 * Date query type plugin for the Apache Solr adapter.
 */

/**
 * Plugin for "date" query types.
 */
class SearchFacetapiDate extends FacetapiQueryTypeDate implements FacetapiQueryTypeInterface {

  /**
   * Returns the query type associated with the plugin.
   *
   * @return string
   *   The query type.
   */
  static public function getType() {
    return 'date';
  }

  /**
   * Returns the table alias for the field.
   *
   * @todo Improve this, remove duplication of code.
   */
  public function getAlias() {
    return (!$this->facet['field api name']) ? 'n' : '';
  }

  /**
   * Adds the filter to the query object.
   *
   * @param $query
   *   An object containing the query in the backend's native API.
   */
  public function execute($query) {
    if ($active = $this->adapter->getActiveItems($this->facet)) {
      // Gets last date, formats start and end date.
      $item = end($active);
      $start = strtotime($item['start']);
      $end = strtotime($item['end']);

      // Builds field, adds queries to normal query.
      $field = $this->getAlias() . '.' . $this->facet['field'];
      $query->condition($field, $start, '>=');
      $query->condition($field, $end, '<');

      // Adds filters to facet query.
      $facet_query = $this->adapter->getFacetQueryExtender();
      $facet_query->condition($field, $start, '>=');
      $facet_query->condition($field, $end, '<');
    }
  }

  /**
   * Initializes the facet's build array.
   *
   * @return array
   *   The initialized render array.
   */
  public function build() {
    $build = array();

    // Makes sure there was at least one match.
    if (!$this->adapter->hasMatches) {
      return array();
    }

    // Gets base facet query, adds facet field and filters.
    $facet_query = clone $this->adapter->getFacetQueryExtender();
    $facet_query->addFacetField($this->getAlias(), $this->facet['field']);

    // Executes query, iterates over results.
    $result = $facet_query->execute();
    foreach ($result as $record) {
      $raw_values[$record->value] = $record->count;
    }
    ksort($raw_values);

    // Gets active facets, starts building hierarchy.
    $parent = $gap = NULL;
    foreach ($this->adapter->getActiveItems($this->facet) as $value => $item) {
      // If the item is active, the count is the result set count.
      $build[$value] = array('#count' => $this->adapter->getResultCount());

      // Gets next "gap" increment, mintue being the lowest be can go.
      $date_gap = facetapi_get_date_gap($item['start'], $item['end']);
      $gap = facetapi_get_next_date_gap($date_gap, FACETAPI_DATE_MINUTE);

      // If there is a previous item, there is a parent, uses a reference so the
      // arrays are populated when they are updated.
      if (NULL !== $parent) {
        $build[$parent]['#item_children'][$value] = &$build[$value];
        $build[$value]['#item_parents'][$parent] = $parent;
      }

      // Stores the last value iterated over.
      $parent = $value;
    }

    // Mind the gap! Calculates gap from min and max timestamps.
    $timestamps = array_keys($raw_values);
    if (NULL === $parent) {
      if (count($raw_values) > 1) {
        $gap = facetapi_get_timestamp_gap(min($timestamps), max($timestamps));
      }
      else {
        $gap = FACETAPI_DATE_HOUR;
      }
    }

    // Converts all timestamps to dates in ISO 8601 format.
    $dates = array();
    foreach ($timestamps as $timestamp) {
      $dates[$timestamp] = facetapi_isodate($timestamp, $gap);
    }

    // Treat each date as the range start and next date as the range end.
    $range_end = array();
    $previous = NULL;
    foreach (array_unique($dates) as $date) {
      if (NULL !== $previous) {
        $range_end[$previous] = facetapi_get_next_date_increment($previous, $gap);
      }
      $previous = $date;
    }
    $range_end[$previous] = facetapi_get_next_date_increment($previous, $gap);

    // Groups dates by the range they belong to, builds the $build array
    // with the facet counts and formatted range values.
    foreach ($raw_values as $value => $count) {
      $new_value = '[' . $dates[$value] . ' TO ' . $range_end[$dates[$value]] . ']';
      if (!isset($build[$new_value])) {
        $build[$new_value] = array('#count' => $count);
      }
      else {
        $build[$new_value]['#count'] += $count;
      }

      // Adds parent information if not already set.
      if (NULL !== $parent && !isset($build[$new_value]['#item_parents'])) {
        $build[$parent]['#item_children'][$new_value] = &$build[$new_value];
        $build[$new_value]['#item_parents'][$parent] = $parent;
      }
    }

    return $build;
  }
}
