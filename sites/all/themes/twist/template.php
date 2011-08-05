<?php

/**
 * Implementation og hook_theme()
 */
function twist_theme() {
  return array(
    'page_header' => array(
      'variables' => array('vars' => NULL),
      'template' => 'page-header',
      'path' => drupal_get_path('theme', 'twist') .'/templates',
    ),
    'page_footer' => array(
      'variables' => array('vars' => NULL),
      'template' => 'page-footer',
      'path' => drupal_get_path('theme', 'twist') .'/templates',
    ),
  );
}

/**
 * Implements of hook_process_html()
 */
function twist_preprocess_html(&$vars) {
  if (isset($vars['page']['left']) && !empty($vars['page']['left'])) {
    $vars['classes_array'][] = 'sidebar-left';
  }
  if (isset($vars['page']['right']) && !empty($vars['page']['right'])) {
    $vars['classes_array'][] = 'sidebar-right';
  }  
}

/**
 * Implements of hook_process_page()
 */
function twist_process_page(&$vars) {
  _rubik_local_tasks($vars);  
  $vars['page_header'] = theme('page_header', $vars);
  $vars['page_footer'] = theme('page_footer', $vars);
}

/**
 * Implementation of hook_preprocess_node()
 */
function twist_preprocess_node(&$vars) {
  if (!theme_get_setting('node_submitted')) {
    unset($vars['submitted']);
  }
}
