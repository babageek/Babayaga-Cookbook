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
    'courses' => array(
      'name' => 'Courses',
      'machine_name' => 'courses',
      'description' => 'Courses vocabulary',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'cuisines' => array(
      'name' => 'Cuisines',
      'machine_name' => 'cuisines',
      'description' => 'Cuisines vocabularies',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
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
