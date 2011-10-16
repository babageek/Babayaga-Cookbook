<?php
/**
 * @file
 * babayaga_recipe.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function babayaga_recipe_user_default_permissions() {
  $permissions = array();

  // Exported permission: delete terms in ingredients
  $permissions['delete terms in ingredients'] = array(
    'name' => 'delete terms in ingredients',
    'roles' => array(),
  );

  // Exported permission: edit terms in ingredients
  $permissions['edit terms in ingredients'] = array(
    'name' => 'edit terms in ingredients',
    'roles' => array(),
  );

  return $permissions;
}
