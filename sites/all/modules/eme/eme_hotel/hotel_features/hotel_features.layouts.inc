<?php
/**
 * @file
 * hotel_features.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function hotel_features_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'hotel';
  $layout->admin_title = 'Hotel Home Page';
  $layout->admin_description = '';
  $layout->category = 'eMarketingEye';
  $layout->plugin = 'flexible';
  $layout->settings = array(
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
          1 => 1,
          2 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r1_',
        ),
        'parent' => 'main',
      ),
      1 => array(
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
      'r1_' => array(
        'type' => 'region',
        'title' => 'Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r3',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'r3' => array(
        'type' => 'region',
        'title' => 'R5',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 8,
          1 => 7,
          2 => 9,
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r4',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'column',
        'width' => '32.95769008291608',
        'width_type' => '%',
        'parent' => '5',
        'children' => array(
          0 => 11,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => '33.56856233568563',
        'width_type' => '%',
        'parent' => '5',
        'children' => array(
          0 => 10,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'column',
        'width' => '33.4737475813983',
        'width_type' => '%',
        'parent' => '5',
        'children' => array(
          0 => 12,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r1',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'r1' => array(
        'type' => 'region',
        'title' => 'Rooms',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'r2_',
        ),
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'r2_' => array(
        'type' => 'region',
        'title' => 'Dining',
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
          0 => 'r3_',
        ),
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'r3_' => array(
        'type' => 'region',
        'title' => 'Weddings',
        'width' => 100,
        'width_type' => '%',
        'parent' => '12',
        'class' => '',
        'hide_empty' => 0,
      ),
      'r4' => array(
        'type' => 'region',
        'title' => 'R4',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['hotel'] = $layout;

  return $export;
}