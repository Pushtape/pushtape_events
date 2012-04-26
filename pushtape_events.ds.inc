<?php
/**
 * @file
 * pushtape_events.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function pushtape_events_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|pushtape_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'pushtape_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'burr';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'burr',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => variable_get('pushtape_events_ds_teaser'),
    'theme' => 'burr',
  );
  $export['node|pushtape_event|teaser'] = $ds_layout;

  return $export;
}
