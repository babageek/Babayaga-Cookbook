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