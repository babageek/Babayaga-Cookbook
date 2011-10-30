<?php

/**
 * Expose theme regions as context reactions.
 */
class context_reaction_theme_regions extends context_reaction_theme {

  /**
   * Allow admins to provide additional region classes.
   */
  function options_form($context) {
    
    $form = array();
    $values = $this->fetch_from_context($context);
    foreach ($this->get_regions() as $name => $label) {
      $form[$name] = array(
        '#title' => $label,
        '#description' => t('Provides this text as an additional region class'),
        '#type' => 'textfield',
        '#maxlength' => 64,
        '#default_value' => isset($values[$name]) ? $values[$name] : '',
      );
    }
    return $form;
  }

  /**
   * Set additional classes onto the 'body_classes'.
   */
  function execute(&$vars) {
    $classes = array();
    foreach ($this->get_contexts() as $k => $v) {
      foreach ($this->get_regions() as $name => $label) {
        if (isset($v->reactions[$this->plugin][$name]) && !empty($v->reactions[$this->plugin][$name])) {
          $vars[$name] = $v->reactions[$this->plugin][$name];
        }
      }
    }
  }
  
  /**
   * Get current theme regions.
   */
  function get_regions() {
    $regions = array();
    $themes = list_themes();
    $theme = variable_get('theme_default');
    foreach ($themes[$theme]->info['regions'] as $name => $label) {
      $regions['region_'. $name] = $label;
    }
    return $regions;
  }
}
