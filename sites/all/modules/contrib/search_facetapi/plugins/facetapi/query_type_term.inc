<?php

/**
 * @file
 * Term query type plugin for the Faceted Navigation for Search adapter.
 */

/**
 * Plugin for "term" query types.
 */
class SearchFacetapiTerm extends FacetapiQueryType implements FacetapiQueryTypeInterface {

  /**
   * Returns the query type associated with the plugin.
   *
   * @return string
   *   The query type.
   */
  static public function getType() {
    return 'term';
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
    $facet_query = $this->adapter->getFacetQueryExtender();
    $active = $this->adapter->getActiveItems($this->facet);
    foreach ($active as $value => $item) {
      $field = $this->getAlias() . '.' . $this->facet['field'];
      $query->condition($field, $value);
      $facet_query->condition($field, $value);
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
      $build[$record->value] = array('#count' => $record->count);
    }

    // Returns initialized build.
    return $build;
  }
}
