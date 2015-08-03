<?php
/**
 * @file
 * corporate_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function corporate_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'corporate';
  $page->task = 'page';
  $page->admin_title = 'Corporate';
  $page->admin_description = 'Corporate level content';
  $page->path = 'dashboard/corporate';
  $page->access = array();
  $page->menu = array(
    'type' => 'action',
    'title' => 'Manage Corporate Content',
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
  $handler->name = 'page_corporate__panel_context_f37bfbc5-3fda-4610-b458-43f8ee2897ce';
  $handler->task = 'page';
  $handler->subtask = 'corporate';
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
  $display->title = 'Corporate Pages';
  $display->uuid = '998f6f9b-b8cb-4675-ae87-398bab9de766';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11ccf91b-5412-4037-829a-35e030485644';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'corporate_pages';
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
      'display' => 'dashboard_block',
      'override_title' => 1,
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
    $pane->uuid = '11ccf91b-5412-4037-829a-35e030485644';
    $display->content['new-11ccf91b-5412-4037-829a-35e030485644'] = $pane;
    $display->panels['center'][0] = 'new-11ccf91b-5412-4037-829a-35e030485644';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['corporate'] = $page;

  return $pages;

}
