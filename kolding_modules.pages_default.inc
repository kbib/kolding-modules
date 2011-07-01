<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function kolding_modules_default_page_manager_handlers() {
  $export = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'article_list-panel_pane_3';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'kolding_article_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['left'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'event_list-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'event-list',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'block-5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['right'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Tekst blok til forside',
      'title' => 'Tekst blok til forside',
      'body' => 'Dette er en tekst blok vi opretter til forsiden, så vi kan linke til digitale materialer.',
      'format' => '2',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['right'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'right';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant_campaigns';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['right'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'top';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['top'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['page_front_panel_panel_context'] = $handler;

 	$handler = new stdClass;
	$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
	$handler->api_version = 1;
	$handler->name = 'node_view_panel_context_3';
	$handler->task = 'node_view';
	$handler->subtask = '';
	$handler->handler = 'panel_context';
	$handler->weight = 2;
	$handler->conf = array(
	  'autogenerate_title' => TRUE,
	  'title' => 'Page node',
	  'no_blocks' => 0,
	  'css_id' => '',
	  'css' => '',
	  'css_cache_file' => '',
	  'contexts' => array(),
	  'relationships' => array(
	    0 => array(
	      'context' => 'argument_nid_1',
	      'name' => 'related_library',
	      'id' => 2,
	      'identifier' => 'Library node',
	      'keyword' => 'related_library',
	    ),
	  ),
	  'access' => array(
	    'plugins' => array(
	      0 => array(
	        'name' => 'perm',
	        'settings' => array(
	          'perm' => 'access content',
	        ),
	        'context' => 'logged-in-user',
	      ),
	      1 => array(
	        'name' => 'node_type',
	        'settings' => array(
	          'type' => array(
	            'topic' => 'topic',
	            'page' => 'page',
	          ),
	        ),
	        'context' => 'argument_nid_1',
	        'not' => FALSE,
	      ),
	    ),
	    'logic' => 'and',
	  ),
	);
	$display = new panels_display;
	$display->layout = 'threecol_left_stacked_right';
	$display->layout_settings = array();
	$display->panel_settings = array(
	  'style_settings' => array(
	    'default' => NULL,
	    'top' => NULL,
	    'left' => NULL,
	    'middle' => NULL,
	    'right' => NULL,
	    'bottom' => NULL,
	  ),
	);
	$display->cache = array();
	$display->title = '';
	$display->content = array();
	$display->panels = array();
	  $pane = new stdClass;
	  $pane->pid = 'new-1';
	  $pane->panel = 'left';
	  $pane->type = 'library_portal';
	  $pane->subtype = 'library_portal';
	  $pane->shown = TRUE;
	  $pane->access = array();
	  $pane->configuration = array(
	    'default_menu' => 'menu-organisation',
	    'context' => 'relationship_related_library_2',
	    'override_title' => 0,
	    'override_title_text' => '',
	  );
	  $pane->cache = array();
	  $pane->style = array(
	    'settings' => NULL,
	  );
	  $pane->css = array();
	  $pane->extras = array();
	  $pane->position = 0;
	  $display->content['new-1'] = $pane;
	  $display->panels['left'][0] = 'new-1';
	  $pane = new stdClass;
	  $pane->pid = 'new-2';
	  $pane->panel = 'middle';
	  $pane->type = 'node_content';
	  $pane->subtype = 'node_content';
	  $pane->shown = TRUE;
	  $pane->access = array();
	  $pane->configuration = array(
	    'links' => 0,
	    'page' => 1,
	    'no_extras' => 0,
	    'override_title' => 0,
	    'override_title_text' => '',
	    'teaser' => 0,
	    'identifier' => '',
	    'link' => 0,
	    'leave_node_title' => 0,
	    'context' => 'argument_nid_1',
	  );
	  $pane->cache = array();
	  $pane->style = array(
	    'settings' => NULL,
	  );
	  $pane->css = array();
	  $pane->extras = array();
	  $pane->position = 0;
	  $display->content['new-2'] = $pane;
	  $display->panels['middle'][0] = 'new-2';
	  $pane = new stdClass;
	  $pane->pid = 'new-3';
	  $pane->panel = 'right';
	  $pane->type = 'block';
	  $pane->subtype = 'tagadelic-2';
	  $pane->shown = TRUE;
	  $pane->access = array();
	  $pane->configuration = array(
	    'override_title' => 1,
	    'override_title_text' => '',
	  );
	  $pane->cache = array();
	  $pane->style = array(
	    'style' => 'ding_box',
	    'settings' => NULL,
	  );
	  $pane->css = array();
	  $pane->extras = array();
	  $pane->position = 0;
	  $display->content['new-3'] = $pane;
	  $display->panels['right'][0] = 'new-3';
	  $pane = new stdClass;
	  $pane->pid = 'new-4';
	  $pane->panel = 'right';
	  $pane->type = 'relevant';
	  $pane->subtype = 'relevant_campaigns';
	  $pane->shown = TRUE;
	  $pane->access = array();
	  $pane->configuration = array(
	    'context' => array(
	      0 => 'argument_nid_1',
	      1 => 'relationship_related_library_2',
	    ),
	    'override_title' => 0,
	    'override_title_text' => '',
	  );
	  $pane->cache = array();
	  $pane->style = array(
	    'settings' => NULL,
	  );
	  $pane->css = array();
	  $pane->extras = array();
	  $pane->position = 1;
	  $display->content['new-4'] = $pane;
	  $display->panels['right'][1] = 'new-4';
	$display->hide_title = PANELS_TITLE_NONE;
	$display->title_pane = '0';
	$handler->conf['display'] = $display;


  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
