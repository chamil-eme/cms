<?php
/**
 * @file
 * dashboard_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dashboard_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
