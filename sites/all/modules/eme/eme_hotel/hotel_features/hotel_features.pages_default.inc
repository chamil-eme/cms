<?php
/**
 * @file
 * hotel_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hotel_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hotels';
  $page->task = 'page';
  $page->admin_title = 'Hotels';
  $page->admin_description = 'Hotel level content';
  $page->path = 'dashboard/hotels';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Manage Hotel Content',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hotels__panel_context_8214cb80-392e-4470-ae4c-76b3362e8cc2';
  $handler->task = 'page';
  $handler->subtask = 'hotels';
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
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1544b26-09ed-46d6-ad15-999c2e8b5079';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a232640-3ec8-4b19-a2e2-e6af2beed0b9';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'hotel_list';
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
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'country_list',
      'override_title' => 0,
      'override_title_text' => '',
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
    $pane->uuid = '4a232640-3ec8-4b19-a2e2-e6af2beed0b9';
    $display->content['new-4a232640-3ec8-4b19-a2e2-e6af2beed0b9'] = $pane;
    $display->panels['center'][0] = 'new-4a232640-3ec8-4b19-a2e2-e6af2beed0b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hotels'] = $page;

  return $pages;

}
