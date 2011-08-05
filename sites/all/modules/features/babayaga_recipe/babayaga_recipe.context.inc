<?php
/**
 * @file
 * babayaga_recipe.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
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
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-recipes-block_2' => array(
          'module' => 'views',
          'delta' => 'recipes-block_2',
          'region' => 'right',
          'weight' => '-19',
        ),
        'views-recipes-block_3' => array(
          'module' => 'views',
          'delta' => 'recipes-block_3',
          'region' => 'right',
          'weight' => '-18',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Node');
  $export['recipe-page'] = $context;

  return $export;
}
