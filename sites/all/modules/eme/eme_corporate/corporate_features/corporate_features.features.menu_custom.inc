<?php
/**
 * @file
 * corporate_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function corporate_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-corporate-menu.
  $menus['menu-corporate-menu'] = array(
    'menu_name' => 'menu-corporate-menu',
    'title' => 'corporate-menu',
    'description' => 'Corporate Level Menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Corporate Level Menu');
  t('corporate-menu');


  return $menus;
}
