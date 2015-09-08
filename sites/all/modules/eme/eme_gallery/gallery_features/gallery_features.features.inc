<?php
/**
 * @file
 * gallery_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gallery_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gallery_features_image_default_styles() {
  $styles = array();

  // Exported image style: masonary.
  $styles['masonary'] = array(
    'label' => 'masonary',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
          ),
        'weight' => 1,
        ),
      ),
    );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function gallery_features_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
      ),
    );
  drupal_alter('node_info', $items);
  return $items;
}
