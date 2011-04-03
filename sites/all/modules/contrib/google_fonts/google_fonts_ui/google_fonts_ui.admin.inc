<?php
// $Id$

/**
 * @file
 * Administrative page callbacks for the Google Fonts UI module.
 */

/**
 * Implements hook_admin_settings() for configuring the module
 */
function google_fonts_ui_admin_settings_form($form, &$form_state) {
  $form = array();
  $enabled_fonts = variable_get('google_fonts_enabled_fonts', array());
  
  if (empty($enabled_fonts)) {
    $form['introduction'] = array(
      '#markup' => t('You have not enabled any fonts. Please <a href="@link">do this first</a>, before you can apply any CSS rules.', array('@link' => url("admin/config/system/google_fonts"))),
    );
    return $form;
  }
  
  $form['introduction'] = array(
    '#markup' => t('For each enabled font you can add one or more rules.<br />Examples given: <code>.node H2</code> or <code>h1#overlay-title</code>'),
  );
  
  $fonts_to_load = array();
  $style_to_add = 'form .font_example label{ font-size: 30px; } ';
  foreach (variable_get('google_fonts_enabled_fonts', array()) as $font) {
    if ($font) {
      $font_info = _google_fonts_get_font_info($font);
      $form['google_fonts_ui_' . _google_fonts_system_fontname($font)] = array(
        '#type' => 'textarea',
        '#title' => $font,
        '#default_value' => variable_get('google_fonts_ui_' . _google_fonts_system_fontname($font)),
        '#description' => 'Add one or more CSS selectors, one for each line.',
        '#prefix' => '<div class="font_example ' . _google_fonts_path_to_classname($font_info['path']) . '">',
        '#suffix' => '</div>',
        '#rows' => 3,
      );
      
      $style_to_add .= '.' . _google_fonts_path_to_classname($font_info['path']) . ' label{ font-family: "' . $font_info['family'] . '"; font-style: ' . $font_info['style'] . '; font-weight: ' . $font_info['weight'] . '; } ' . PHP_EOL;
      $fonts_to_load[] = $font;
    } 
  }
  
  $form['enabled_fonts'] = array(
    '#type' => 'hidden',
    '#value' => implode('|', $fonts_to_load),
  );
  
  $form['#submit'][] = 'google_fonts_ui_admin_settings_form_submit';
  drupal_add_css($style_to_add, array('type' => 'inline', 'group' => CSS_THEME));
  return system_settings_form($form);
}

/**
 * Implements hook_form_submit() for creating the CSS file
 */
function google_fonts_ui_admin_settings_form_submit($form, &$form_state) {
  $css_value = '/* CSS code for the Google Fonts module */' . PHP_EOL . PHP_EOL;
  foreach (explode('|', $form['enabled_fonts']["#value"]) as $font) {
    $selectors = $form['google_fonts_ui_' . _google_fonts_system_fontname($font)]["#value"];
    if (!empty($selectors)) {
      $font_info = _google_fonts_get_font_info($font);
      $selectors = check_plain(str_replace("\r\n", ",\r\n", trim($selectors)));
      $selectors = str_replace(',,', ',', $selectors);
      $css_value .= $selectors . '{ font-family: "' . $font_info['family'] . '"; font-style: ' . $font_info['style'] . '; font-weight: ' . $font_info['weight'] . '; }' . PHP_EOL . PHP_EOL;
    }
  }
  
  variable_set('google_fonts_ui_css_contents', $css_value);
  
  // Save the CSS code as local file
  if (!_google_fonts_cache($css_value, TRUE)) {
    drupal_set_message(t('Could not generate the CSS code for the Google Fonts.'), 'error');
  }
}