<?php
/**
 * @file
 * feature_pages.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function feature_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pages';
  $context->description = '';
  $context->tag = 'Sections';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-feature_pages-1' => array(
          'module' => 'menu_block',
          'delta' => 'feature_pages-1',
          'region' => 'left',
          'weight' => '-10',
        ),
      ),
      'layout' => 'left_sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sections');
  $export['pages'] = $context;

  return $export;
}
