<?php
/**
 * @file
 * babayaga_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function babayaga_site_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'babayaga-site-front';
  $context->description = '';
  $context->tag = 'Frontpage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog-block_1' => array(
          'module' => 'views',
          'delta' => 'blog-block_1',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-recipes-block_1' => array(
          'module' => 'views',
          'delta' => 'recipes-block_1',
          'region' => 'right',
          'weight' => '0',
        ),
        'views-recipes-block_5' => array(
          'module' => 'views',
          'delta' => 'recipes-block_5',
          'region' => 'right',
          'weight' => '1',
        ),
      ),
      'layout' => 'right_sidebar',
    ),
    'theme_regions' => array(
      'region_content' => 'size-60',
      'region_featured' => '',
      'region_left' => '',
      'region_right' => 'size-40',
      'region_help' => '',
      'region_footer' => '',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Frontpage');
  $export['babayaga-site-front'] = $context;

  return $export;
}
