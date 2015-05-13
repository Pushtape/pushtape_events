<?php
/**
 * @file
 * pushtape_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pushtape_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = '';
  $page->path = 'shows';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Events',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'events',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bonham_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'b17472e1-c860-4aec-a51c-31316709c674';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-da654ba0-772b-43bb-a2c2-d15326d17ec1';
  $pane->panel = 'contentmain';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '0',
    'fields_override' => array(
      'field_event_date' => 1,
      'field_event_city' => 1,
      'field_event_venue' => 1,
      'field_venue_address' => 0,
      'field_event_state' => 1,
      'field_event_zip_post_code' => 0,
      'title' => 1,
      'field_event_date_1' => 1,
    ),
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'da654ba0-772b-43bb-a2c2-d15326d17ec1';
  $display->content['new-da654ba0-772b-43bb-a2c2-d15326d17ec1'] = $pane;
  $display->panels['contentmain'][0] = 'new-da654ba0-772b-43bb-a2c2-d15326d17ec1';
  $pane = new stdClass();
  $pane->pid = 'new-4fe863e3-a113-4926-ad54-89ad50167e98';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'events-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '3',
    'fields_override' => array(
      'title' => 1,
      'field_event_date' => 1,
      'field_event_venue' => 1,
      'field_event_city' => 1,
      'field_event_state' => 1,
    ),
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_style' => array(
        'well' => 'well',
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
      ),
    ),
    'style' => 'bootstrapcustomize',
  );
  $pane->css = array(
    'css_id' => 'events',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4fe863e3-a113-4926-ad54-89ad50167e98';
  $display->content['new-4fe863e3-a113-4926-ad54-89ad50167e98'] = $pane;
  $display->panels['sidebar'][0] = 'new-4fe863e3-a113-4926-ad54-89ad50167e98';
  $pane = new stdClass();
  $pane->pid = 'new-f83d6cf2-af88-4456-a6fa-ed418a36c4b3';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'news-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'teaser',
    'widget_title' => NULL,
    'items_per_page' => NULL,
    'exposed' => array(
      'sort_by' => NULL,
      'sort_order' => NULL,
    ),
    'use_pager' => NULL,
    'pager_id' => NULL,
    'offset' => NULL,
    'link_to_view' => NULL,
    'more_link' => NULL,
    'path' => NULL,
    'view_settings' => 'fields',
    'header_type' => 'none',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => array(
      'pane_style' => array(
        'well' => 'well',
        'pull-left' => 0,
        'pull-right' => 0,
        'clearfix' => 0,
        'jumbotron' => 0,
      ),
    ),
    'style' => 'bootstrapcustomize',
  );
  $pane->css = array(
    'css_id' => 'news',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f83d6cf2-af88-4456-a6fa-ed418a36c4b3';
  $display->content['new-f83d6cf2-af88-4456-a6fa-ed418a36c4b3'] = $pane;
  $display->panels['sidebar'][1] = 'new-f83d6cf2-af88-4456-a6fa-ed418a36c4b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  return $pages;

}
