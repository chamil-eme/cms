<?php

/**
 * @file
 * template.php
 */
/*function eme_breadcrumb($breadcrumb) {
  return drupal_render($breadcrumb;

 $last_breadcrumb = end($breadcrumb);
 if ($page_title == $last_breadcrumb['data']) {
  array_pop($breadcrumb);
}
return $breadcrumb;
}
*/
/**
 * Overrides theme_menu_link().
 */


// function eme_menu_link(array $variables) {

//   $path = $variables['element']['#href'];
//   $item = menu_get_item($path);
//   if ($item['access'] == TRUE){
//     return theme_menu_link ($variables);
//   }
// }
//
//exit;
//
/**
 * implements hook_preprocess_tb_megamenu_item
 * @param  [type] &$variables [description]
 * @return [type]             [description]
 */
function eme_preprocess_tb_megamenu_item(&$variables){

  if ($router_item = menu_get_item($variables['item']['link']['link_path'])){
    if (!$router_item['access'] || $variables['item']['link']['hidden']) {
      $variables['item'] =  NULL;
    }
  }
}

function eme_preprocess_node(&$variables) {
  $variables['theme_hook_suggestions'][] = 'node__' . $variables['type'] . '__' . $variables['view_mode'];
}
