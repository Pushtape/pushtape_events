<?php
/**
 * @file
 * pushtape_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushtape_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default, pushtape';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'title' => 'title',
    'body' => 'body',
    'field_links' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_links' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No events yet';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No events yet. Create an <a href="node/add/event">event!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_links']['id'] = 'field_links';
  $handler->display->display_options['fields']['field_links']['table'] = 'field_data_field_links';
  $handler->display->display_options['fields']['field_links']['field'] = 'field_links';
  $handler->display->display_options['fields']['field_links']['label'] = '';
  $handler->display->display_options['fields']['field_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_links']['separator'] = ' · ';
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'shows';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Shows';
  $handler->display->display_options['menu']['description'] = 'Shows';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Shows';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = '-1 week';

  /* Display: All Events */
  $handler = $view->new_display('panel_pane', 'All Events', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Upcoming Shows (table) */
  $handler = $view->new_display('panel_pane', 'Upcoming Shows (table)', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date' => 'field_date',
    'field_venue_city' => 'field_venue_city',
    'field_venue' => 'field_venue',
    'field_venue_state' => 'field_venue_city',
    'field_venue_zip_post_code' => 'field_venue_city',
    'title' => 'title',
    'field_date_2' => 'field_date_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_venue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_zip_post_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_venue_city']['id'] = 'field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['table'] = 'field_data_field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['field'] = 'field_venue_city';
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_venue_state']['id'] = 'field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['table'] = 'field_data_field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['field'] = 'field_venue_state';
  /* Field: Content: ZIP/Post Code */
  $handler->display->display_options['fields']['field_venue_zip_post_code']['id'] = 'field_venue_zip_post_code';
  $handler->display->display_options['fields']['field_venue_zip_post_code']['table'] = 'field_data_field_venue_zip_post_code';
  $handler->display->display_options['fields']['field_venue_zip_post_code']['field'] = 'field_venue_zip_post_code';
  $handler->display->display_options['fields']['field_venue_zip_post_code']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Details';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Time */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'panopoly_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['pane_title'] = 'Upcoming Shows';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Upcoming Shows (list) */
  $handler = $view->new_display('panel_pane', 'Upcoming Shows (list)', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming shows';
  $handler->display->display_options['display_description'] = 'Displays a list of upcoming shows';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_venue_city' => 'field_venue_city',
    'field_venue_state' => 'field_venue_state',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Time */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'panopoly_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_venue_city']['id'] = 'field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['table'] = 'field_data_field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['field'] = 'field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['label'] = '';
  $handler->display->display_options['fields']['field_venue_city']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_venue_state']['id'] = 'field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['table'] = 'field_data_field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['field'] = 'field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['label'] = '';
  $handler->display->display_options['fields']['field_venue_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['sorts']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value_1']['order'] = 'DESC';
  $handler->display->display_options['pane_title'] = 'Upcoming Shows (sidebar)';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Previous Shows (list) */
  $handler = $view->new_display('panel_pane', 'Previous Shows (list)', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past shows';
  $handler->display->display_options['display_description'] = 'Displays a list of previous shows';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_venue_city' => 'field_venue_city',
    'field_venue_state' => 'field_venue_state',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Time */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'panopoly_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_venue']['id'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['table'] = 'field_data_field_venue';
  $handler->display->display_options['fields']['field_venue']['field'] = 'field_venue';
  $handler->display->display_options['fields']['field_venue']['label'] = '';
  $handler->display->display_options['fields']['field_venue']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_venue']['element_label_colon'] = FALSE;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_venue_city']['id'] = 'field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['table'] = 'field_data_field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['field'] = 'field_venue_city';
  $handler->display->display_options['fields']['field_venue_city']['label'] = '';
  $handler->display->display_options['fields']['field_venue_city']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_venue_state']['id'] = 'field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['table'] = 'field_data_field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['field'] = 'field_venue_state';
  $handler->display->display_options['fields']['field_venue_state']['label'] = '';
  $handler->display->display_options['fields']['field_venue_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['sorts']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value_1']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value_1']['id'] = 'field_date_value_1';
  $handler->display->display_options['filters']['field_date_value_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value_1']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['pane_title'] = 'Previous Shows (sidebar)';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['events'] = $view;

  return $export;
}
