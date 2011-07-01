<?php

/**
 * Implementation of hook_strongarm().
 */
function kolding_modules_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addthis_config';
  $strongarm->value = array(
    'services_toolbox' => 'facebook,separator,more',
    'services_compact' => '',
    'services_expanded' => '',
    'ui_cobrand' => '',
    'ui_header_color' => '#000000',
    'ui_header_background' => '#FFFFFF',
    'ui_click' => 0,
    'ui_delay' => '',
    'ui_use_addressbook' => 0,
    'data_track_clickback' => 0,
    'username' => '',
    'data_ga_tracker' => 0,
    'ui_use_css' => TRUE,
  );

  $export['addthis_config'] = $strongarm;
  return $export;
}
