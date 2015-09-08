<?php
/**
 * @file
 * dashboard_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dashboard_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hotel_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Hotel Dashboard';
  $page->admin_description = 'Dashboard for individual hotel';
  $page->path = 'dashboard/hotels/%node';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'eme dashboard access',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hotel_dashboard__panel_context_e9f5fc58-4c87-419e-a08b-92637d568683';
  $handler->task = 'page';
  $handler->subtask = 'hotel_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'eme dashboard access',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '24.391412634645295',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 12,
          1 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => '25.11919734108095',
        'width_type' => '%',
        'parent' => 'main-row',
        'children' => array(
          0 => 11,
          1 => 4,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'rooms',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'dining',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'rooms' => array(
        'type' => 'region',
        'title' => 'Rooms',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'dining' => array(
        'type' => 'region',
        'title' => 'Dining',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 10,
          1 => 14,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => '6',
        'children' => array(
          0 => 13,
          1 => 9,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'weddings',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'special_offers',
        ),
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'weddings' => array(
        'type' => 'region',
        'title' => 'Weddings',
        'width' => 100,
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'rooms_main',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'rooms_main' => array(
        'type' => 'region',
        'title' => 'Rooms main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
        'hide_empty' => 0,
      ),
      12 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'dining_main',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'dining_main' => array(
        'type' => 'region',
        'title' => 'Dining Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
        'hide_empty' => 0,
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'weddings_main',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'weddings_main' => array(
        'type' => 'region',
        'title' => 'Weddings Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
        'hide_empty' => 0,
      ),
      'special_offers' => array(
        'type' => 'region',
        'title' => 'Special offers Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'special_offers_',
        ),
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'special_offers_' => array(
        'type' => 'region',
        'title' => 'Special Offers',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'rooms' => NULL,
      'dining' => NULL,
      'weddings' => NULL,
      'rooms_main' => NULL,
      'dining_main' => NULL,
      'weddings_main' => NULL,
      'hotel_content' => NULL,
      'special_offers' => NULL,
      'special_offers_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Hotel  - %node:title';
  $display->uuid = '609dee44-1df4-443d-8046-59277761c938';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bba8877e-4420-4745-9090-219aee3028c4';
    $pane->panel = 'dining';
    $pane->type = 'views';
    $pane->subtype = 'dining';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dining_dashboard_block',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dining Pages',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bba8877e-4420-4745-9090-219aee3028c4';
    $display->content['new-bba8877e-4420-4745-9090-219aee3028c4'] = $pane;
    $display->panels['dining'][0] = 'new-bba8877e-4420-4745-9090-219aee3028c4';
    $pane = new stdClass();
    $pane->pid = 'new-f2459455-5ec8-414f-82a9-192768c6bc99';
    $pane->panel = 'dining_main';
    $pane->type = 'views';
    $pane->subtype = 'dining_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dashboard_dining_main',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Dining Listing Page',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f2459455-5ec8-414f-82a9-192768c6bc99';
    $display->content['new-f2459455-5ec8-414f-82a9-192768c6bc99'] = $pane;
    $display->panels['dining_main'][0] = 'new-f2459455-5ec8-414f-82a9-192768c6bc99';
    $pane = new stdClass();
    $pane->pid = 'new-61eb16f2-e7cb-4e76-8db3-00d65a394185';
    $pane->panel = 'rooms';
    $pane->type = 'views';
    $pane->subtype = 'rooms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Rooms Pages',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '61eb16f2-e7cb-4e76-8db3-00d65a394185';
    $display->content['new-61eb16f2-e7cb-4e76-8db3-00d65a394185'] = $pane;
    $display->panels['rooms'][0] = 'new-61eb16f2-e7cb-4e76-8db3-00d65a394185';
    $pane = new stdClass();
    $pane->pid = 'new-701e784a-b9c7-44c4-9745-d1476dda16f3';
    $pane->panel = 'rooms_main';
    $pane->type = 'views';
    $pane->subtype = 'rooms_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dashboard_rooms_main',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Rooms Listing Page',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '701e784a-b9c7-44c4-9745-d1476dda16f3';
    $display->content['new-701e784a-b9c7-44c4-9745-d1476dda16f3'] = $pane;
    $display->panels['rooms_main'][0] = 'new-701e784a-b9c7-44c4-9745-d1476dda16f3';
    $pane = new stdClass();
    $pane->pid = 'new-52ec784f-d5bd-407a-bf8f-7632c06c4a69';
    $pane->panel = 'special_offers';
    $pane->type = 'views';
    $pane->subtype = 'special_offers_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dashboard_special_offers_main',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Special Offers Main Page',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52ec784f-d5bd-407a-bf8f-7632c06c4a69';
    $display->content['new-52ec784f-d5bd-407a-bf8f-7632c06c4a69'] = $pane;
    $display->panels['special_offers'][0] = 'new-52ec784f-d5bd-407a-bf8f-7632c06c4a69';
    $pane = new stdClass();
    $pane->pid = 'new-0daea050-052e-4e42-be0a-7329a1c0b13f';
    $pane->panel = 'special_offers_';
    $pane->type = 'views';
    $pane->subtype = 'special_offers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dashboard_special_offers',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Special Offers Page',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0daea050-052e-4e42-be0a-7329a1c0b13f';
    $display->content['new-0daea050-052e-4e42-be0a-7329a1c0b13f'] = $pane;
    $display->panels['special_offers_'][0] = 'new-0daea050-052e-4e42-be0a-7329a1c0b13f';
    $pane = new stdClass();
    $pane->pid = 'new-b2b6b964-859a-47fc-b52d-2009b37185e5';
    $pane->panel = 'weddings';
    $pane->type = 'views';
    $pane->subtype = 'wedding';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dashboard_weddings',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Weddings Page ',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b2b6b964-859a-47fc-b52d-2009b37185e5';
    $display->content['new-b2b6b964-859a-47fc-b52d-2009b37185e5'] = $pane;
    $display->panels['weddings'][0] = 'new-b2b6b964-859a-47fc-b52d-2009b37185e5';
    $pane = new stdClass();
    $pane->pid = 'new-00bd52c2-c9c2-4ff4-82f3-ef5d7d7e4d56';
    $pane->panel = 'weddings_main';
    $pane->type = 'views';
    $pane->subtype = 'wedding_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '%2',
      'url' => '',
      'display' => 'dashboard_weddings_main',
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Weddings Listing Page',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '00bd52c2-c9c2-4ff4-82f3-ef5d7d7e4d56';
    $display->content['new-00bd52c2-c9c2-4ff4-82f3-ef5d7d7e4d56'] = $pane;
    $display->panels['weddings_main'][0] = 'new-00bd52c2-c9c2-4ff4-82f3-ef5d7d7e4d56';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hotel_dashboard'] = $page;

  return $pages;

}
