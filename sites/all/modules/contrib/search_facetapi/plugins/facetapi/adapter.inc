<?php

/**
 * @file
 * Classes used by the Facet API module.
 */

/**
 * Facet API adapter for the Apache Solr Search Integration module.
 */
class SearchFacetapiAdapter extends FacetapiAdapter {

  /**
   * The result of SearchQuery::executeFirstPass().
   */
  public $hasMatches = FALSE;

  /**
   * The total number of results in the query.
   */
  protected $resultCount;

  /**
   * The facet query being executed.
   */
  protected $facetQueryExtender;

  /**
   * Returns a boolean flagging whether $this->searcher executed a search.
   */
  public function searchExecuted() {
    return !empty($this->keys);
  }

  /**
   * Returns a boolean flagging whether facets in a realm shoud be displayed.
   */
  public function suppressOutput($realm_name) {

  }

  /**
   * Sets the result count.
   */
  public function setResultCount($count) {
    $this->resultCount = $count;
    return $this;
  }

  /**
   * Returns the nmber of total results found for the current search.
   */
  public function getResultCount() {
    return $this->resultCount;
  }

  /**
   * Sets the facet query object.
   *
   * @return FacetapiQuery
   */
  public function getFacetQueryExtender() {
    if (!$this->facetQueryExtender) {
      $this->facetQueryExtender = db_select('search_index', 'i', array('target' => 'slave'))->extend('FacetapiQuery');
      $this->facetQueryExtender->join('node', 'n', 'n.nid = i.sid');
      $this->facetQueryExtender
        ->condition('n.status', 1)
        ->addTag('node_access')
        ->searchExpression($this->keys, 'node');
    }
    return $this->facetQueryExtender;
  }

}
