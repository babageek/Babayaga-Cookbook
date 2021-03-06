<?php
/**
 * @file
 * feature_blog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_blog_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog-list';
  $context->description = '';
  $context->tag = 'List of nodes';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog:page_1' => 'blog:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_2' => array(
          'module' => 'views',
          'delta' => 'blog-block_2',
          'region' => 'right',
          'weight' => '-10',
        ),
      ),
      'layout' => 'right_sidebar',
    ),
    'breadcrumb' => 'blog',
    'theme_regions' => array(
      'region_content' => 'size-70',
      'region_featured' => '',
      'region_left' => '',
      'region_right' => 'size-30',
      'region_help' => '',
      'region_footer' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('List of nodes');
  $export['blog-list'] = $context;

  return $export;
}
