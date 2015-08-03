<?php
/**
 * @file
 * hotel_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hotel_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hotel_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hotel_features_node_info() {
  $items = array(
    'hotel' => array(
      'name' => t('Hotel'),
      'base' => 'node_content',
      'description' => t('This content type will keep basic information of the hotel such as name description'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'hotel_main' => array(
      'name' => t('Hotel Main'),
      'base' => 'node_content',
      'description' => t('Main page for hotel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}