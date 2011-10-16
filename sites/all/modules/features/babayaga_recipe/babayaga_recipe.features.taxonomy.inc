<?php
/**
 * @file
 * babayaga_recipe.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function babayaga_recipe_taxonomy_default_vocabularies() {
  return array(
    'ingredients' => array(
      'name' => 'Ingredients',
      'machine_name' => 'ingredients',
      'description' => 'Ingredients vocabulary.',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
