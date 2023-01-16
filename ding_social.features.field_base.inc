<?php
/**
 * @file
 * ding_social.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ding_social_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_ding_social_related_id'.
  $field_bases['field_ding_social_related_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ding_social_related_id',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
