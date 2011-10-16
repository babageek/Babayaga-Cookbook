<?php

/**
 * @file
 * Facet query builder, strips all scoring from the SearchQuery class.
 */

/**
 * Extension of the SearchQuery class.
 */
class FacetapiQuery extends SearchQuery {

  /**
   * Adds the facet field, ensures the alias is "value".
   */
  public function addFacetField($table_alias, $field) {
    return $this->addField($table_alias, $field, 'value');
  }

  /**
   * Executes a facet query.
   */
  public function execute() {
    $this->parseSearchExpression();

    // Adds OR conditions.
    if (!empty($this->words)) {
      $or = db_or();
      foreach ($this->words as $word) {
        $or->condition('i.word', $word);
      }
      $this->condition($or);
    }

    // Build query for keyword normalization.
    $this->join('search_total', 't', 'i.word = t.word');
    $this
      ->condition('i.type', $this->type)
      ->groupBy('i.type')
      ->groupBy('i.sid')
      ->having('COUNT(*) >= :matches', array(':matches' => $this->matches));

    // For complex search queries, add the LIKE conditions.
    if (!$this->simple) {
      $first->join('search_dataset', 'd', 'i.sid = d.sid AND i.type = d.type');
      $first->condition($this->conditions);
    }

    // Add conditions to query.
    $this->join('search_dataset', 'd', 'i.sid = d.sid AND i.type = d.type');
    $this->condition($this->conditions);

    // Add tag and useful metadata.
    $this
      ->addTag('search_' . $this->type)
      ->addMetaData('normalize', $this->normalize);

    // Adds subquery to group the results in the r table.
    $subquery = db_select($this->query, 'r')
      ->fields('r', array('value'))
      ->groupBy('r.value')
      ->orderBy('count', 'DESC');

    // Adds COUNT() expression to get facet counts.
    $subquery->addExpression('COUNT(r.value)', 'count');

    // Executes the subquery.
    return $subquery->execute();
  }
}
