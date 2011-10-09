<?php
/**
 * @file
 * babayaga_site.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function babayaga_site_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
