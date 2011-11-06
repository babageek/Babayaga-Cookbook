<?php
/**
 * @file
 * babayaga_recipe.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function babayaga_recipe_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipe-page';
  $context->description = '';
  $context->tag = 'Node';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recipe' => 'recipe',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-recipes-block_4' => array(
          'module' => 'views',
          'delta' => 'recipes-block_4',
          'region' => 'right',
          'weight' => '-10',
        ),
        'views-recipes-block_2' => array(
          'module' => 'views',
          'delta' => 'recipes-block_2',
          'region' => 'right',
          'weight' => '-9',
        ),
        'views-recipes-block_3' => array(
          'module' => 'views',
          'delta' => 'recipes-block_3',
          'region' => 'right',
          'weight' => '-8',
        ),
      ),
      'layout' => 'right_sidebar',
    ),
    'menu' => 'recipes',
    'theme' => array(
      'title' => 'Recipes',
      'subtitle' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  $export['recipe-page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'recipe-search';
  $context->description = '';
  $context->tag = 'Sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recipes' => 'recipes',
        'recipes/*' => 'recipes/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-G_T9dXSgDUeLCAZvESaTcIKarNR-PNuo' => array(
          'module' => 'facetapi',
          'delta' => 'G_T9dXSgDUeLCAZvESaTcIKarNR-PNuo',
          'region' => 'left',
          'weight' => '-22',
        ),
        'facetapi-Y9LV9L4QUGoaPpCWr7ZxvqolL88xdsAD' => array(
          'module' => 'facetapi',
          'delta' => 'Y9LV9L4QUGoaPpCWr7ZxvqolL88xdsAD',
          'region' => 'left',
          'weight' => '-21',
        ),
        'facetapi-HO-UlnKCNWpfuLznVLxDW6XphrvTMg2G' => array(
          'module' => 'facetapi',
          'delta' => 'HO-UlnKCNWpfuLznVLxDW6XphrvTMg2G',
          'region' => 'left',
          'weight' => '-20',
        ),
      ),
      'layout' => 'left_sidebar',
    ),
    'theme_regions' => array(
      'region_content' => 'size-80',
      'region_featured' => '',
      'region_left' => 'size-20',
      'region_right' => '',
      'region_help' => '',
      'region_footer' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sections');
  $export['recipe-search'] = $context;

  return $export;
}
