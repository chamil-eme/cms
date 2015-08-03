<?php
/**
 * @file
 * rooms_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rooms_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rooms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rooms';
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
  /* Contextual filter: Content: Rooms Main (field_rooms_main) */
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['id'] = 'field_rooms_main_target_id';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['table'] = 'field_data_field_rooms_main';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['field'] = 'field_rooms_main_target_id';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_rooms_main_target_id']['summary_options']['items_per_page'] = '25';
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
    'rooms' => 'rooms',
  );

  /* Display: Rooms list */
  $handler = $view->new_display('block', 'Rooms list', 'rooms_list');

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

  /* Display: Dashboard-Rooms */
  $handler = $view->new_display('block', 'Dashboard-Rooms', 'block_1');
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
  $handler->display->display_options['header']['php']['php_output'] = '<?php print l(\'Create\',\'node/add/rooms\',array(\'attributes\' => array(\'class\' => \'btn btn-large btn-primary\',\'target\'=>\'_blank\'),\'query\' => array(\'destination\'=>current_path(),\'hid\' => $view->args[0])));
?>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = 'There are no Rooms Please <?php print l(\'Create one\',\'node/add/rooms\',array(\'attributes\' => array(\'class\' => \'btn btn-large btn-primary\',\'target\'=>\'_blank\'),\'query\' => array(\'destination\'=>current_path(),\'hid\' => $view->args[0],)));?>
';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rooms_main_target_id']['id'] = 'field_rooms_main_target_id';
  $handler->display->display_options['relationships']['field_rooms_main_target_id']['table'] = 'field_data_field_rooms_main';
  $handler->display->display_options['relationships']['field_rooms_main_target_id']['field'] = 'field_rooms_main_target_id';
  $handler->display->display_options['relationships']['field_rooms_main_target_id']['required'] = TRUE;
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
  $handler->display->display_options['arguments']['field_hotel_target_id']['relationship'] = 'field_rooms_main_target_id';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_hotel_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_hotel_target_id']['summary_options']['items_per_page'] = '25';
  $export['rooms'] = $view;

  $view = new view();
  $view->name = 'rooms_main';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rooms Main';
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
    'rooms_main' => 'rooms_main',
  );

  /* Display: Rooms main block */
  $handler = $view->new_display('block', 'Rooms main block', 'rooms_main_block');

  /* Display: dashboard Rooms Main */
  $handler = $view->new_display('block', 'dashboard Rooms Main', 'dashboard_rooms_main');
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
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: PHP */
  $handler->display->display_options['empty']['php_1']['id'] = 'php_1';
  $handler->display->display_options['empty']['php_1']['table'] = 'views';
  $handler->display->display_options['empty']['php_1']['field'] = 'php';
  $handler->display->display_options['empty']['php_1']['empty'] = TRUE;
  $handler->display->display_options['empty']['php_1']['php_output'] = 'Thre is no Rooms Listing page Please <?php print l(\'Create one\',\'node/add/rooms-main\',array(\'attributes\' => array(\'class\' => \'btn btn-large btn-primary\',\'target\'=>\'_blank\'),\'query\' => array(\'destination\'=>current_path(),\'hid\' => $view->args[0])));?>

';
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
  $export['rooms_main'] = $view;

  return $export;
}
