<?php
/**
 * @file
 * test_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function test_feature_taxonomy_default_vocabularies() {
  return array(
    'test_taxonomy' => array(
      'name' => 'Test Taxonomy',
      'machine_name' => 'test_taxonomy',
      'description' => 'Test Vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
