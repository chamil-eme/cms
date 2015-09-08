<?php
/**
 * @file
 * core_features.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function core_features_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'breadcrumbs_by_path_core_paths';
  $strongarm->value = '';
  $export['breadcrumbs_by_path_core_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'breadcrumbs_by_path_current_title';
  $strongarm->value = 1;
  $export['breadcrumbs_by_path_current_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'breadcrumbs_by_path_exclude_paths';
  $strongarm->value = '';
  $export['breadcrumbs_by_path_exclude_paths'] = $strongarm;

  return $export;
}
