<?php

/**
 * Preprocessor for theme('node').
 */
function babayaga_preprocess_node(&$vars) {
  $vars['layout'] = FALSE;
  $vars['submitted'] = '';
}

/**
 * Preprocessor for theme('comment').
 */
function babayaga_preprocess_comment(&$vars) {
  $vars['layout'] = FALSE;
  $vars['submitted'] = _rubik_submitted($vars['comment']);
}
