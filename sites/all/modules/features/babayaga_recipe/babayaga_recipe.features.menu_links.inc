<?php
/**
 * @file
 * babayaga_recipe.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function babayaga_recipe_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:recipes
  $menu_links['main-menu:recipes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'recipes',
    'router_path' => 'recipes',
    'link_title' => 'Recipes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Recipes');


  return $menu_links;
}
