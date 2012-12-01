<?php
/**
 * @file
 * club_committee.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function club_committee_user_default_permissions() {
  $permissions = array();

  // Exported permission: create committees content.
  $permissions['create committees content'] = array(
    'name' => 'create committees content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any committees content.
  $permissions['delete any committees content'] = array(
    'name' => 'delete any committees content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own committees content.
  $permissions['delete own committees content'] = array(
    'name' => 'delete own committees content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any committees content.
  $permissions['edit any committees content'] = array(
    'name' => 'edit any committees content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own committees content.
  $permissions['edit own committees content'] = array(
    'name' => 'edit own committees content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
