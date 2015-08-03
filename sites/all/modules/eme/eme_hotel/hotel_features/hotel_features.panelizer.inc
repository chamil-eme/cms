<?php
/**
 * @file
 * hotel_features.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hotel_features_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hotel:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hotel';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible:hotel';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'r1_' => NULL,
      'r3' => NULL,
      'r1' => NULL,
      'r2_' => NULL,
      'r3_' => NULL,
      'r4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fbc14947-4d00-4aec-80d2-d34332d6b8cd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0cf0f09a-fee4-4019-8ec4-53a97873d5b3';
    $pane->panel = 'r1';
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
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'rooms_main_block',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '0cf0f09a-fee4-4019-8ec4-53a97873d5b3';
    $display->content['new-0cf0f09a-fee4-4019-8ec4-53a97873d5b3'] = $pane;
    $display->panels['r1'][0] = 'new-0cf0f09a-fee4-4019-8ec4-53a97873d5b3';
    $pane = new stdClass();
    $pane->pid = 'new-5a98d48d-551d-4936-9674-b86dadfd4e80';
    $pane->panel = 'r1_';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'panelizer',
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
    $pane->uuid = '5a98d48d-551d-4936-9674-b86dadfd4e80';
    $display->content['new-5a98d48d-551d-4936-9674-b86dadfd4e80'] = $pane;
    $display->panels['r1_'][0] = 'new-5a98d48d-551d-4936-9674-b86dadfd4e80';
    $pane = new stdClass();
    $pane->pid = 'new-ced8a327-1482-47f9-93a2-15c618f8316d';
    $pane->panel = 'r2_';
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
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'dining_main_block',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = 'ced8a327-1482-47f9-93a2-15c618f8316d';
    $display->content['new-ced8a327-1482-47f9-93a2-15c618f8316d'] = $pane;
    $display->panels['r2_'][0] = 'new-ced8a327-1482-47f9-93a2-15c618f8316d';
    $pane = new stdClass();
    $pane->pid = 'new-03e413ad-1116-46f9-84db-f713e4521bee';
    $pane->panel = 'r3_';
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
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'weddings_main_block',
      'context' => array(
        0 => '',
      ),
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
    $pane->uuid = '03e413ad-1116-46f9-84db-f713e4521bee';
    $display->content['new-03e413ad-1116-46f9-84db-f713e4521bee'] = $pane;
    $display->panels['r3_'][0] = 'new-03e413ad-1116-46f9-84db-f713e4521bee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:hotel:default'] = $panelizer;

  return $export;
}
