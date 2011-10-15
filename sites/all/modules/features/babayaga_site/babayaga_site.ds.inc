<?php
/**
 * @file
 * babayaga_site.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function babayaga_site_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'badge_medium';
  $ds_view_mode->label = 'Badge Medium';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['badge_medium'] = $ds_view_mode;

  $ds_view_mode = new stdClass;
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'badge_small';
  $ds_view_mode->label = 'Badge Small';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['badge_small'] = $ds_view_mode;

  return $export;
}
