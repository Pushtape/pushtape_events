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

  $view = new view;
  $view->name = 'pushtape_events';
  $view->description = 'Administrative view to show events.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty Text';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no events to be shown. ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_event_venue']['id'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['table'] = 'field_data_field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['field'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_venue_address']['id'] = 'field_venue_address';
  $handler->display->display_options['fields']['field_venue_address']['table'] = 'field_data_field_venue_address';
  $handler->display->display_options['fields']['field_venue_address']['field'] = 'field_venue_address';
  $handler->display->display_options['fields']['field_venue_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_venue_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_venue_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_venue_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_venue_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_venue_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_venue_address']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_event_city']['id'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['table'] = 'field_data_field_event_city';
  $handler->display->display_options['fields']['field_event_city']['field'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_city']['field_api_classes'] = 0;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_event_state']['id'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['table'] = 'field_data_field_event_state';
  $handler->display->display_options['fields']['field_event_state']['field'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_state']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_state']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_state']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_state']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_state']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_state']['field_api_classes'] = 0;
  /* Field: Content: ZIP/Post Code */
  $handler->display->display_options['fields']['field_event_zip_post_code']['id'] = 'field_event_zip_post_code';
  $handler->display->display_options['fields']['field_event_zip_post_code']['table'] = 'field_data_field_event_zip_post_code';
  $handler->display->display_options['fields']['field_event_zip_post_code']['field'] = 'field_event_zip_post_code';
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_zip_post_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_zip_post_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_zip_post_code']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_zip_post_code']['field_api_classes'] = 0;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 1;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 1;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<b><strong><em><i><u>';
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'pushtape_event' => 'pushtape_event',
  );

  /* Display: Events Page */
  $handler = $view->new_display('page', 'Events Page', 'page_1');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Events Block */
  $handler = $view->new_display('block', 'Events Block', 'block_1');
  $export['pushtape_events'] = $view;

  return $export;
}
