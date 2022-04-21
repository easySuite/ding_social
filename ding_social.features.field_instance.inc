<?php
/**
 * @file
 * ding_social.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ding_social_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'facebook_publication-ding_social_link-field_ding_social_related_id'.
  $field_instances['facebook_publication-ding_social_link-field_ding_social_related_id'] = array(
    'bundle' => 'ding_social_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'facebook_publication',
    'field_name' => 'field_ding_social_related_id',
    'label' => 'Related ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'quiz_result' => FALSE,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'facebook_publication-ding_social_link-field_facebook_link'.
  $field_instances['facebook_publication-ding_social_link-field_facebook_link'] = array(
    'bundle' => 'ding_social_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'facebook_publication',
    'field_name' => 'field_facebook_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'facebook_publication-ding_social_link-field_facebook_message'.
  $field_instances['facebook_publication-ding_social_link-field_facebook_message'] = array(
    'bundle' => 'ding_social_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'facebook_publication',
    'field_name' => 'field_facebook_message',
    'label' => 'Message',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'facebook_publication-ding_social_link-field_facebook_published'.
  $field_instances['facebook_publication-ding_social_link-field_facebook_published'] = array(
    'bundle' => 'ding_social_link',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Whether a post is published. Default is published.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'facebook_publication',
    'field_name' => 'field_facebook_published',
    'label' => 'Published',
    'required' => 0,
    'settings' => array(
      'quiz_result' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'facebook_publication-ding_social_link-field_facebook_scheduled_publish'.
  $field_instances['facebook_publication-ding_social_link-field_facebook_scheduled_publish'] = array(
    'bundle' => 'ding_social_link',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'facebook_publication',
    'field_name' => 'field_facebook_scheduled_publish',
    'label' => 'Scheduled publish time',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'quiz_result' => FALSE,
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Link');
  t('Message');
  t('Published');
  t('Related ID');
  t('Scheduled publish time');
  t('Whether a post is published. Default is published.');

  return $field_instances;
}
