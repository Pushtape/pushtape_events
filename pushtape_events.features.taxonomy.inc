<?php
/**
 * @file
 * pushtape_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pushtape_events_taxonomy_default_vocabularies() {
  return array(
    'pushtape_event_type' => array(
      'name' => 'Event Type',
      'machine_name' => 'pushtape_event_type',
      'description' => 'A categorization of events',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
