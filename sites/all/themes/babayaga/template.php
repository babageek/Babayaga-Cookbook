<?php

/**
 * Preprocessor for theme('node').
 */
function babayaga_preprocess_node(&$vars) {

  $vars['layout'] = FALSE;
  $vars['submitted'] = '';
  $vars['date'] = format_date($vars['created'], 'custom', 'j F Y');

  if ($vars['node']->type == 'blog') {
    $vars['layout'] = TRUE;
    $vars['addthis']['#markup'] = babayaga_addthis($vars['node']);
    unset($vars['links']['node']);
  }
}

/**
 * Preprocessor for theme('page').
 */
function babayaga_preprocess_page(&$vars) {
  
}

/**
 * Preprocessor for theme('block').
 */
function babayaga_preprocess_block(&$vars) {
  switch ($vars['block_html_id']) {
    case 'block-views-recipes-block-2':
      $vars['classes_array'][] = 'block-paper';
      break;
  }
}

/**
 * Preprocessor for theme('comment').
 */
function babayaga_preprocess_comment(&$vars) {
  $vars['layout'] = FALSE;
  $vars['submitted'] = _rubik_submitted($vars['comment']);
}

function babayaga_addthis(&$node) {
  $url = url('node/'. $node->nid, array('absolute' => TRUE));
  $out = '<!-- AddThis Button BEGIN -->';
  $out .= '<div class="addthis_toolbox addthis_default_style "';
  $out .= '      addthis:url="'. $url .'"';
  $out .= '      addthis:title="'. addslashes($node->title).'">';
  $out .= '<a class="addthis_button_tweet"></a>';
  $out .= '<a class="addthis_button_facebook_like" fb:like:layout="button_count"></a>';
//  $out .= '<a class="addthis_counter addthis_pill_style"></a>';
  $out .= '</div>';
  $out .= '<script type="text/javascript">var addthis_config = {"data_track_clickback":true};</script>';
  $out .= '<script type="text/javascript" src="http://s7.addthis.com/js/250/addthis_widget.js#pubid=ra-4d985ae17e9de0c5"></script>';
  $out .= '<!-- AddThis Button END -->';
  return $out;
}



/**
 * Returns HTML for a "missing" facet link.
 *
 * @param $variables
 *   An associative array containing:
 *   - field_name: The name of the facet field.
 *
 * @ingroup themeable
 */
function babayaga_facetapi_facet_missing($variables) {
  return t('Missing %field_name', array('%field_name' => $variables['field_name']));
}

/**
 * Returns HTML for the facet title, usually the title of the block.
 *
 * @param $variables
 *   An associative array containing:
 *   - title: The title of the facet.
 *
 * @ingroup themeable
 */
function babayaga_facetapi_title($variables) {
  return t('Filter by @title:', array('@title' => drupal_strtolower($variables['title'])));
}

/**
 * Returns HTML for an active facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and babayaga_facetapi_count() functions for information
 *   about these variables.
 *
 * @ingroup themeable
 */
function babayaga_facetapi_link_inactive($variables) {
  if (isset($variables['count'])) {
    $variables['text'] = theme('facetapi_count', $variables) . '<div class="facet-label">' . $variables['text'] . '</div>';
  }
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}

/**
 * Returns HTML for the inactive facet item's count.
 *
 * @param $variables
 *   An associative array containing:
 *   - count: The item's facet count.
 *
 * @ingroup themeable
 */
function babayaga_facetapi_count($variables) {
  return '<div class="facet-count">' . (int) $variables['count'] . '</div>';
}

/**
 * Returns HTML for an inactive facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', and 'options'. See
 *   the l() function for information about these variables.
 *
 * @ingroup themeable
 */
function babayaga_facetapi_link_active($variables) {
  $suffix = '';
  $variables['options']['html'] = TRUE;
  $variables['text'] = '<div class="facet-remove">-</div>' . '<div class="facet-label">' . check_plain($variables['text']) .'</div>';
  return theme_link($variables);
}