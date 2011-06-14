<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kolding_modules_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function kolding_modules_imagecache_default_presets() {
  $items = array(
    'fullcontent' => array(
      'presetname' => 'fullcontent',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '675',
            'height' => '100%',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function kolding_modules_views_api() {
  return array(
    'api' => '2',
  );
}
