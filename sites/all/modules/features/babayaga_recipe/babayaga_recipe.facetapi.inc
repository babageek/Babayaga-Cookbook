<?php
/**
 * @file
 * babayaga_recipe.facetapi.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function babayaga_recipe_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@recipes_index::field_recipe_courses';
  $facet->searcher = 'search_api@recipes_index';
  $facet->realm = '';
  $facet->facet = 'field_recipe_courses';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@recipes_index::field_recipe_courses'] = $facet;

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@recipes_index::field_recipe_cuisines';
  $facet->searcher = 'search_api@recipes_index';
  $facet->realm = '';
  $facet->facet = 'field_recipe_cuisines';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
  );
  $export['search_api@recipes_index::field_recipe_cuisines'] = $facet;

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@recipes_index:block:field_recipe_courses';
  $facet->searcher = 'search_api@recipes_index';
  $facet->realm = 'block';
  $facet->facet = 'field_recipe_courses';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'text',
    'soft_limit' => '20',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '0',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@recipes_index:block:field_recipe_courses'] = $facet;

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@recipes_index:block:field_recipe_cuisines';
  $facet->searcher = 'search_api@recipes_index';
  $facet->realm = 'block';
  $facet->facet = 'field_recipe_cuisines';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'text',
    'soft_limit' => '20',
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '0',
      'format' => 'full_html',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@recipes_index:block:field_recipe_cuisines'] = $facet;

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@recipes_index:block:field_recipe_ingredients_terms';
  $facet->searcher = 'search_api@recipes_index';
  $facet->realm = 'block';
  $facet->facet = 'field_recipe_ingredients_terms';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'show_expanded' => 0,
  );
  $export['search_api@recipes_index:block:field_recipe_ingredients_terms'] = $facet;

  $facet = new stdClass;
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@recipes_index:block:search_api_language';
  $facet->searcher = 'search_api@recipes_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'show_expanded' => 0,
  );
  $export['search_api@recipes_index:block:search_api_language'] = $facet;

  return $export;
}
