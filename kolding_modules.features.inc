<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function kolding_modules_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
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
    'kolding_top_image' => array(
      'presetname' => 'kolding_top_image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '460px',
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
 * Implementation of hook_rules_defaults().
 */
function kolding_modules_rules_defaults() {
  return array(
    'rules' => array(
      'rules_kolding_article_saved' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'kolding_article_saved',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'kolding',
          'kolding_modules' => 'kolding_modules',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#info' => array(
              'label' => 'Created content is article',
              'label callback' => FALSE,
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Content',
                ),
              ),
              'module' => 'Node',
            ),
            '#name' => 'rules_condition_content_is_type',
            '#settings' => array(
              'type' => array(
                'article' => 'article',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'condition',
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#type' => 'action',
            '#settings' => array(
              'view' => 'kolding_article_list',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#info' => array(
              'label' => 'Clear the cache of a article_list view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
          ),
          '1' => array(
            '#type' => 'action',
            '#settings' => array(
              'view' => 'user_blog_list',
            ),
            '#name' => 'cache_actions_action_clear_views_cache',
            '#info' => array(
              'label' => 'Clear the cache of a user_blog_list view.',
              'label callback' => FALSE,
              'arguments' => array(
                'view' => array(
                  'type' => 'string',
                  'label' => 'View',
                  'description' => 'Specify the view you want to clear.',
                ),
              ),
              'module' => 'Cache Actions',
            ),
            '#weight' => 0,
          ),
        ),
        '#version' => 6003,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function kolding_modules_views_api() {
  return array(
    'api' => '2',
  );
}
