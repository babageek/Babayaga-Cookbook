<?php
/**
 * @file
 * feature_blog.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_blog_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'blog_icons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => 'title',
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|blog|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|blog|list'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass;
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'blog_code' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'blog_icons' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h1',
        'class' => 'title',
      ),
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|blog|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_blog_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass;
  $ds_field->api_version = 1;
  $ds_field->field = 'blog_icons';
  $ds_field->label = 'Blog Icons';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->properties = array();
  $export['blog_icons'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_blog_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'classes' => array(),
  );
  $export['node|blog|default'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'blog_icons',
        1 => 'post_date',
        2 => 'title',
        3 => 'field_blog_subtitle',
        4 => 'body',
      ),
    ),
    'fields' => array(
      'blog_icons' => 'ds_content',
      'post_date' => 'ds_content',
      'title' => 'ds_content',
      'field_blog_subtitle' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blog|full'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'list';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_blog_pictures',
      ),
      'right' => array(
        0 => 'title',
        1 => 'field_blog_subtitle',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_blog_pictures' => 'left',
      'title' => 'right',
      'field_blog_subtitle' => 'right',
      'body' => 'right',
    ),
    'limit' => array(
      'field_blog_pictures' => '1',
    ),
    'classes' => array(),
  );
  $export['node|blog|list'] = $ds_layout;

  $ds_layout = new stdClass;
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'blog_icons',
        1 => 'blog_code',
        2 => 'post_date',
        3 => 'title',
        4 => 'field_blog_subtitle',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'blog_icons' => 'ds_content',
      'blog_code' => 'ds_content',
      'post_date' => 'ds_content',
      'title' => 'ds_content',
      'field_blog_subtitle' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['node|blog|teaser'] = $ds_layout;

  return $export;
}
