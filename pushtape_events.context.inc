<?php
/**
 * @file
 * pushtape_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pushtape_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_view';
  $context->description = 'on the events page';
  $context->tag = 'pushtape';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '/events' => '/events',
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('on the events page');
  t('pushtape');
  $export['events_view'] = $context;

  return $export;
}
