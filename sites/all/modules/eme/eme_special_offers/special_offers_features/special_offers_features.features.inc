<?php
/**
 * @file
 * special_offers_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function special_offers_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function special_offers_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function special_offers_features_node_info() {
  $items = array(
    'special_offers' => array(
      'name' => t('Special offers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'special_offers_main' => array(
      'name' => t('Special Offers Main'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
