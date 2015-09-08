<?php
/**
 * @file
 * special_offers_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function special_offers_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'special_offers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Special Offers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_special_offers_main_target_id']['id'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['relationships']['field_special_offers_main_target_id']['table'] = 'field_data_field_special_offers_main';
  $handler->display->display_options['relationships']['field_special_offers_main_target_id']['field'] = 'field_special_offers_main_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Contextual filter: Content: Special offers Main (field_special_offers_main) */
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['id'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['table'] = 'field_data_field_special_offers_main';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['field'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'special_offers' => 'special_offers',
  );
  /* Filter criterion: Content: Valid time -  start date (field_valid_time) */
  $handler->display->display_options['filters']['field_valid_time_value']['id'] = 'field_valid_time_value';
  $handler->display->display_options['filters']['field_valid_time_value']['table'] = 'field_data_field_valid_time';
  $handler->display->display_options['filters']['field_valid_time_value']['field'] = 'field_valid_time_value';
  $handler->display->display_options['filters']['field_valid_time_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_valid_time_value']['default_date'] = 'now';
  /* Filter criterion: Content: Valid time - end date (field_valid_time:value2) */
  $handler->display->display_options['filters']['field_valid_time_value2']['id'] = 'field_valid_time_value2';
  $handler->display->display_options['filters']['field_valid_time_value2']['table'] = 'field_data_field_valid_time';
  $handler->display->display_options['filters']['field_valid_time_value2']['field'] = 'field_valid_time_value2';
  $handler->display->display_options['filters']['field_valid_time_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_valid_time_value2']['default_date'] = 'now';

  /* Display: Spcial Offers list */
  $handler = $view->new_display('block', 'Spcial Offers list', 'special_offers_list');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Special offers Main (field_special_offers_main) */
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['id'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['table'] = 'field_data_field_special_offers_main';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['field'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Left Navigation */
  $handler = $view->new_display('block', 'Left Navigation', 'left_navigation');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Special offers Main (field_special_offers_main) */
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['id'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['table'] = 'field_data_field_special_offers_main';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['field'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_special_offers_main_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Dashboard-Special Offers */
  $handler = $view->new_display('block', 'Dashboard-Special Offers', 'dashboard_special_offers');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php print l(\'Create\',\'node/add/special-offers\',array(\'attributes\' => array(\'class\' => \'btn btn-large btn-primary\',\'target\'=>\'_blank\'),\'query\' => array(\'destination\'=>current_path(),\'hid\' => $view->args[0])));
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = 'There are no Rooms Please <?php print l(\'Create one\',\'node/add/special-offers\',array(\'attributes\' => array(\'class\' => \'btn btn-large btn-primary\',\'target\'=>\'_blank\'),\'query\' => array(\'destination\'=>current_path(),\'hid\' => $view->args[0],)));?>
';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_special_offers_main_target_id']['id'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['relationships']['field_special_offers_main_target_id']['table'] = 'field_data_field_special_offers_main';
  $handler->display->display_options['relationships']['field_special_offers_main_target_id']['field'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['target'] = '_blank';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['target'] = '_blank';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Hotel (field_hotel) */
  $handler->display->display_options['arguments']['field_hotel_target_id']['id'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['table'] = 'field_data_field_hotel';
  $handler->display->display_options['arguments']['field_hotel_target_id']['field'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['relationship'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Single Special offer */
  $handler = $view->new_display('block', 'Single Special offer', 'single_special_offer');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Single Special offer';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display:  Slideshow-All */
  $handler = $view->new_display('block', ' Slideshow-All', 'slideshow_all');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Hotel (field_hotel) */
  $handler->display->display_options['arguments']['field_hotel_target_id']['id'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['table'] = 'field_data_field_hotel';
  $handler->display->display_options['arguments']['field_hotel_target_id']['field'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['relationship'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary_options']['items_per_page'] = '25';

  /* Display:  Slideshow-Hotel */
  $handler = $view->new_display('block', ' Slideshow-Hotel', 'slideshow_hotel');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Hotel (field_hotel) */
  $handler->display->display_options['arguments']['field_hotel_target_id']['id'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['table'] = 'field_data_field_hotel';
  $handler->display->display_options['arguments']['field_hotel_target_id']['field'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['relationship'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block-All */
  $handler = $view->new_display('block', 'Block-All', 'block_all');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollLeft';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Hotel (field_hotel) */
  $handler->display->display_options['arguments']['field_hotel_target_id']['id'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['table'] = 'field_data_field_hotel';
  $handler->display->display_options['arguments']['field_hotel_target_id']['field'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['relationship'] = 'field_special_offers_main_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_options']['argument'] = 'all';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary_options']['items_per_page'] = '25';
  $export['special_offers'] = $view;

  $view = new view();
  $view->name = 'special_offers_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Special Offers Main';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Hotel (field_hotel) */
  $handler->display->display_options['arguments']['field_hotel_target_id']['id'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['table'] = 'field_data_field_hotel';
  $handler->display->display_options['arguments']['field_hotel_target_id']['field'] = 'field_hotel_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'special_offers_main' => 'special_offers_main',
  );

  /* Display: special Offers main block */
  $handler = $view->new_display('block', 'special Offers main block', 'special_offers_main_block');

  /* Display: Dashboard special Offers main */
  $handler = $view->new_display('block', 'Dashboard special Offers main', 'dashboard_special_offers_main');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dashboard special Offers Main';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = 'There is no Special Offers Listing page Please <?php print l(\'Create one\',\'node/add/special-offers-main\',array(\'attributes\' => array(\'class\' => \'btn btn-large btn-primary\',\'target\'=>\'_blank\'),\'query\' => array(\'destination\'=>current_path(),\'hid\' => $view->args[0])));?>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['target'] = '_blank';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['alter']['target'] = '_blank';

  /* Display: special Offers main */
  $handler = $view->new_display('block', 'special Offers main', 'special_offers_main');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['special_offers_main'] = $view;

  return $export;
}
