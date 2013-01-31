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
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_library_map_center';
  $strongarm->value = array(
    'lat' => '55.497138288785806',
    'lon' => '9.441375732421875',
  );

  $export['ding_library_map_center'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_library_map_zoom';
  $strongarm->value = '11';

  $export['ding_library_map_zoom'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_da';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 0,
    'popup_position' => 0,
    'popup_info' => array(
      'value' => '<h2>Vi bruger cookies på koldingbib.dk.</h2>
Du accepterer brug af cookies når du klikker på hjemmesiden.<br />
Hvis du ikke vil tillade cookies - <a href=\'/cookies\'>se vejledning</a> og læs mere.',
      'format' => '2',
    ),
    'popup_agreed' => array(
      'value' => '<h2>Thank you for accepting cookies</h2><p>You can now hide this message or find out more about cookies.</p>',
      'format' => '2',
    ),
    'popup_agreed_enabled' => 1,
    'popup_link' => 'cookies',
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
  );

  $export['eu_cookie_compliance_da'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webtrends_dcs_id';
  $strongarm->value = 'dcsjnu3n5u3uwyy64b9k91v2o_6y8p';

  $export['webtrends_dcs_id'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webtrends_domain';
  $strongarm->value = 'koldingbib.dk';

  $export['webtrends_domain'] = $strongarm;
  return $export;
}
