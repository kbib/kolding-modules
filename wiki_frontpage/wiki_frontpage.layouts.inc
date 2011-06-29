<?php

/**
 * Implementation of hook_default_panels_layout().
 */
function wiki_frontpage_default_panels_layout() {
  $export = array();
  $layout = new stdClass;
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'wiki_frontpage';
  $layout->admin_title = 'Wiki frontpage';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 9,
          1 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '',
        'region_separation' => '',
        'row_separation' => '',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 11,
          1 => 'main-row',
          2 => 1,
          3 => 8,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'kampagne',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Carousel',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 7,
          1 => 6,
        ),
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'middle_left',
        ),
        'parent' => '2',
        'class' => '',
      ),
      'middle_left' => array(
        'type' => 'region',
        'title' => 'Articles',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'middle',
          1 => 'right',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'middle' => array(
        'type' => 'region',
        'title' => 'Banners',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Campaign',
        'width' => 50,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'anbefalinger',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'anbefalinger' => array(
        'type' => 'region',
        'title' => 'Recommendations',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
      ),
      'kampagne' => array(
        'type' => 'region',
        'title' => 'Campaign',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'emneord',
          1 => 'kampagne_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'emneord' => array(
        'type' => 'region',
        'title' => 'Tag Cloud',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      'kampagne_' => array(
        'type' => 'region',
        'title' => 'Campaign',
        'width' => 50,
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
      ),
      9 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 10,
        ),
        'class' => 'menu',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu',
        ),
        'parent' => '9',
        'class' => '',
      ),
      'menu' => array(
        'type' => 'region',
        'title' => 'Menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
      11 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tabs',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'tabs' => array(
        'type' => 'region',
        'title' => 'Tabs',
        'width' => 100,
        'width_type' => '%',
        'parent' => '11',
        'class' => '',
      ),
    ),
  );

  $export['wiki_frontpage'] = $layout;
  return $export;
}
