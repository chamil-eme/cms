<?php
/**
 * @file
 * corporate_features.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function corporate_features_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_social_buttons'
  $field_bases['field_social_buttons'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_buttons',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'social_buttons',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'social_buttons',
  );

  return $field_bases;
}
