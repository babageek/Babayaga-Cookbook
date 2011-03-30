<?php
/**
 * @file
 * feature_blog.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
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
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
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
    ),
    'breadcrumb' => 'blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('List of nodes');
  $export['blog-list'] = $context;

  return $export;
}
