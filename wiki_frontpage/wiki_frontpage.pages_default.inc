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
  $page->menu = array();
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
    'contexts' => array(),
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
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'anbefalinger';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'ddsadsada',
      'body' => 'Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['anbefalinger'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'carousel',
      'title' => '',
      'body' => 'carousel - Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['center'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'emneord';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'tag cloud',
      'body' => 'Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
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
    $pane->panel = 'kampagne';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'jlfjlfjlsk',
      'title' => 'En campaign',
      'body' => 'Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
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
    $display->panels['kampagne'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
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
    $display->content['new-6'] = $pane;
    $display->panels['kampagne_'][0] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'kampagne_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'dsfdfdsfs',
      'title' => 'en campaign mere',
      'body' => 'Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-7'] = $pane;
    $display->panels['kampagne_'][1] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'menu';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Menu goes here',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-8'] = $pane;
    $display->panels['menu'][0] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'banners',
      'title' => '',
      'body' => '<p><img src="http://beta.koldingbib.dk/sites/default/files/imagecache/mobile-list-image/kirsten_lund.jpg" /></p>
<p><img src="http://beta.koldingbib.dk/sites/default/files/imagecache/mobile-list-image/kirsten_lund.jpg" /></p>
<p><img src="http://beta.koldingbib.dk/sites/default/files/imagecache/mobile-list-image/kirsten_lund.jpg" /></p>',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-9'] = $pane;
    $display->panels['middle'][0] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'middle_left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'fklsædfkælfsd',
      'title' => 'artikler',
      'body' => 'Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.

Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.

Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.

Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-10'] = $pane;
    $display->panels['middle_left'][0] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
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
    $display->content['new-11'] = $pane;
    $display->panels['right'][0] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'fsdfdsd',
      'title' => 'en campaign',
      'body' => 'Rhoncus, massa purus. Tortor placerat ac placerat, porttitor eu, non scelerisque? Phasellus sagittis, eros lacus lectus lorem, arcu aliquam? Dignissim purus! Pellentesque placerat turpis porta natoque sociis lacus proin! Nec etiam vel dis dis eros sit tempor ultricies? Magnis odio diam! Enim. Penatibus. Elit a! Amet aliquam? Tortor. Enim.',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-12'] = $pane;
    $display->panels['right'][1] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
    $pane->panel = 'tabs';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'tabs goes here',
      'format' => '1',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-13'] = $pane;
    $display->panels['tabs'][0] = 'new-13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wiki_frontpage'] = $page;

 return $pages;

}
