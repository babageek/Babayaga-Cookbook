<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function babayaga_recipe_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_image_default_styles().
 */
function babayaga_recipe_image_default_styles() {
  $styles = array();

  // Exported image style: recipe-m
  $styles['recipe-m'] = array(
    'name' => 'recipe-m',
    'effects' => array(
      '1' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '128',
          'height' => '128',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: recipe-s
  $styles['recipe-s'] = array(
    'name' => 'recipe-s',
    'effects' => array(
      '2' => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '64',
          'height' => '64',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implementation of hook_node_info().
 */
function babayaga_recipe_node_info() {
  $items = array(
    'ingredient' => array(
      'name' => t('Ingredient'),
      'base' => 'node_content',
      'description' => t('Ingredient content type.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Recipe content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function babayaga_recipe_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
