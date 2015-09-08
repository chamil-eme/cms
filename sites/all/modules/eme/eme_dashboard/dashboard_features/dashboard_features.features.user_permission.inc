<?php
/**
 * @file
 * dashboard_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dashboard_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eme dashboard access'.
  $permissions['eme dashboard access'] = array(
    'name' => 'eme dashboard access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'eme_dashboard',
  );

  return $permissions;
}
