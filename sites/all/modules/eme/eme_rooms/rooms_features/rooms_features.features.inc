<?php
/**
 * @file
 * rooms_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rooms_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rooms_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rooms_features_node_info() {
  $items = array(
    'rooms' => array(
      'name' => t('Rooms'),
      'base' => 'node_content',
      'description' => t('Room type in hotels'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rooms_main' => array(
      'name' => t('Rooms Main'),
      'base' => 'node_content',
      'description' => t('This will use to keep information about the rooms block that used in listing page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
