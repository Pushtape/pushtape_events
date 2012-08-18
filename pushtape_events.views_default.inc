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

  /* Display: All Events */
  $handler = $view->new_display('panel_pane', 'All Events', 'all_events');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Image */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['ui_name'] = 'Image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_featured_image']['element_class'] = 'listing-image';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_featured_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'image_style' => 'panopoly_image_quarter',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_featured_image']['field_api_classes'] = 0;
  /* Field: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Date';
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
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Event Type */
  $handler->display->display_options['arguments']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['arguments']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['arguments']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['arguments']['field_event_type_tid']['ui_name'] = 'Event Type';
  $handler->display->display_options['arguments']['field_event_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_event_type_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_event_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_type_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_event_type_tid']['not'] = 0;
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
    'pushtape_event' => 'pushtape_event',
  );
  $handler->display->display_options['pane_title'] = 'All Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'field_event_type_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Event Type (field_event_type)',
    ),
  );

  /* Display: Upcoming Events (table) */
  $handler = $view->new_display('panel_pane', 'Upcoming Events (table)', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_date' => 'field_event_date',
    'field_event_city' => 'field_event_city',
    'field_event_venue' => 'field_event_venue',
    'field_venue_address' => 'field_venue_address',
    'field_event_state' => 'field_event_city',
    'field_event_zip_post_code' => 'field_event_city',
    'title' => 'title',
    'field_event_date_1' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_event_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_event_venue' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_venue_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ', ',
      'empty_column' => 0,
    ),
    'field_event_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_zip_post_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Day';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Date';
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
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_venue_address']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_zip_post_code']['exclude'] = TRUE;
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Details';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Time */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'panopoly_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date_1']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'pushtape_event' => 'pushtape_event',
  );
  /* Filter criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Upcoming Events (table)';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Sidebar of Previous Events */
  $handler = $view->new_display('panel_pane', 'Sidebar of Previous Events', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past shows';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_event_venue' => 'field_event_venue',
    'field_event_city' => 'field_event_city',
    'field_event_state' => 'field_event_state',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Day';
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
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_event_venue']['id'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['table'] = 'field_data_field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['field'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['label'] = '';
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
  $handler->display->display_options['fields']['field_event_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_venue']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_event_city']['id'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['table'] = 'field_data_field_event_city';
  $handler->display->display_options['fields']['field_event_city']['field'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['label'] = '';
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
  $handler->display->display_options['fields']['field_event_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_city']['field_api_classes'] = 0;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_event_state']['id'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['table'] = 'field_data_field_event_state';
  $handler->display->display_options['fields']['field_event_state']['field'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['label'] = '';
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
  $handler->display->display_options['fields']['field_event_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_state']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_state']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'pushtape_event' => 'pushtape_event',
  );
  /* Filter criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Sidebar of Previous Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Sidebar of Upcoming Events */
  $handler = $view->new_display('panel_pane', 'Sidebar of Upcoming Events', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming shows';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
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
    'field_event_venue' => 'field_event_venue',
    'field_event_city' => 'field_event_city',
    'field_event_state' => 'field_event_state',
  );
  $handler->display->display_options['row_options']['separator'] = ',';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Day */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Day';
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
  $handler->display->display_options['fields']['field_event_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'panopoly_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_date']['field_api_classes'] = 0;
  /* Field: Content: Venue */
  $handler->display->display_options['fields']['field_event_venue']['id'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['table'] = 'field_data_field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['field'] = 'field_event_venue';
  $handler->display->display_options['fields']['field_event_venue']['label'] = '';
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
  $handler->display->display_options['fields']['field_event_venue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_venue']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_venue']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_venue']['field_api_classes'] = 0;
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_event_city']['id'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['table'] = 'field_data_field_event_city';
  $handler->display->display_options['fields']['field_event_city']['field'] = 'field_event_city';
  $handler->display->display_options['fields']['field_event_city']['label'] = '';
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
  $handler->display->display_options['fields']['field_event_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_city']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_city']['field_api_classes'] = 0;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_event_state']['id'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['table'] = 'field_data_field_event_state';
  $handler->display->display_options['fields']['field_event_state']['field'] = 'field_event_state';
  $handler->display->display_options['fields']['field_event_state']['label'] = '';
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
  $handler->display->display_options['fields']['field_event_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_state']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_state']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_state']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_state']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_state']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'pushtape_event' => 'pushtape_event',
  );
  /* Filter criterion: Content: Event Date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = 'Event Date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Sidebar of Upcoming Events';
  $handler->display->display_options['pane_category']['name'] = 'Events';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';

  /* Display: Events Page */
  $handler = $view->new_display('page', 'Events Page', 'page_1');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['pushtape_events'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Empty Text'),
    t('There are no events to be shown. '),
    t('author'),
    t('Venue'),
    t('Address'),
    t('City'),
    t('State'),
    t('ZIP/Post Code'),
    t('All Events'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('All'),
    t('Events'),
    t('Upcoming Events (table)'),
    t('Upcoming Events'),
    t('Date'),
    t('Details'),
    t('Event Date (field_event_date)'),
    t('Sidebar of Previous Events'),
    t('Past shows'),
    t('Sidebar of Upcoming Events'),
    t('Upcoming shows'),
    t('Events Page'),
  );
  $export['pushtape_events'] = $view;

  return $export;
}
