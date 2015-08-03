<?php
/**
 * @file
 * custom_htag_features.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function custom_htag_features_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'custom_htag'
  $field_bases['custom_htag'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'custom_htag',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
