<?php
/**
 * @file
 * corporate_features.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function corporate_features_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:corporate_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'corporate_page';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7e4ea368-2407-4959-b3b6-e789136e788b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-109f113a-e2e5-456b-8014-1e570406c7fa';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '109f113a-e2e5-456b-8014-1e570406c7fa';
    $display->content['new-109f113a-e2e5-456b-8014-1e570406c7fa'] = $pane;
    $display->panels['center'][0] = 'new-109f113a-e2e5-456b-8014-1e570406c7fa';
    $pane = new stdClass();
    $pane->pid = 'new-10d2bfc5-f2d5-4759-a330-ce790149c0b2';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_banners';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '10d2bfc5-f2d5-4759-a330-ce790149c0b2';
    $display->content['new-10d2bfc5-f2d5-4759-a330-ce790149c0b2'] = $pane;
    $display->panels['center'][1] = 'new-10d2bfc5-f2d5-4759-a330-ce790149c0b2';
    $pane = new stdClass();
    $pane->pid = 'new-a09e8764-aba1-45a7-a714-e26c01ffc97b';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a09e8764-aba1-45a7-a714-e26c01ffc97b';
    $display->content['new-a09e8764-aba1-45a7-a714-e26c01ffc97b'] = $pane;
    $display->panels['center'][2] = 'new-a09e8764-aba1-45a7-a714-e26c01ffc97b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-109f113a-e2e5-456b-8014-1e570406c7fa';
  $panelizer->display = $display;
  $export['node:corporate_page:default'] = $panelizer;

  return $export;
}
