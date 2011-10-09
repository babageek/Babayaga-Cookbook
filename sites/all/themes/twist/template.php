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

/**
 * Override theme('menu_tree')
 */
function twist_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Override theme('menu_link')
 */
function twist_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  if (isset($element['#original_link'])) {
    $path = $element['#original_link']['link_path'];
    $element['#attributes']['class'][] = str_replace('/', '-', $path);
  }

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

