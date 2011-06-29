<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function wiki_frontpage_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wiki_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Wiki frontpage';
  $page->admin_description = '';
  $page->path = 'wiki';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'View parent',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wiki_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'wiki_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Wiki Frontpage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'node',
        'id' => 1,
        'identifier' => 'Gallery node',
        'keyword' => 'gallery_node',
        'context_settings' => array(
          'node' => '',
          'nid' => '244',
        ),
      ),
      1 => array(
        'name' => 'node',
        'id' => 2,
        'identifier' => 'Ting reference node',
        'keyword' => 'ting_reference_node',
        'context_settings' => array(
          'node' => 'Cui Bene Oppeto [nid: 244]',
          'nid' => '244',
        ),
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'flexible:wiki_frontpage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle_left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'anbefalinger' => NULL,
      'kampagne' => NULL,
      'emneord' => NULL,
      'kampagne_' => NULL,
      'menu' => NULL,
      'tabs' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Wiki';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'anbefalinger';
    $pane->type = 'content_field';
    $pane->subtype = 'field_ting_refs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'mixed',
      'context' => 'context_node_2',
      'override_title' => 1,
      'override_title_text' => 'Recommendations from %ting_reference_node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'ding_box',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['anbefalinger'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'content_field';
    $pane->subtype = 'field_wiki_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'thumbnail_description',
      'context' => 'context_node_1',
      'override_title' => 1,
      'override_title_text' => '%gallery_node:title - gallery',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-wiki-carousel',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['center'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'emneord';
    $pane->type = 'views_panes';
    $pane->subtype = 'wiki_tags-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Top wiki tags',
      'items_per_page' => '20',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'ding_box',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ding-wiki-terms-pane',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['emneord'][0] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'kampagne';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campaign_count' => 1,
      'campaign_offset' => 0,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
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
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['kampagne'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'kampagne_';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campaign_count' => 1,
      'campaign_offset' => 2,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
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
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['kampagne_'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Foo',
      'body' => 'Foo',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-6'] = $pane;
    $display->panels['menu'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'middle_left';
    $pane->type = 'views_panes';
    $pane->subtype = 'wiki_list-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Recent wiki pages',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['middle_left'][0] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'right';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'campaign_count' => 1,
      'campaign_offset' => 1,
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
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
    $pane->position = 0;
    $display->content['new-8'] = $pane;
    $display->panels['right'][0] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'tabs';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'primary',
      'id' => 'tabs',
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
    $display->content['new-9'] = $pane;
    $display->panels['tabs'][0] = 'new-9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wiki_frontpage'] = $page;

 return $pages;

}
