<?php
/**
 * @file
 * ding_social.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function ding_social_flag_default_flags() {
  $flags = array();
  // Exported flag: "Facebook".
  $flags['facebook'] = array(
    'content_type' => 'node',
    'title' => 'Facebook',
    'global' => 1,
    'types' => array(
      0 => 'ding_event',
      1 => 'ding_news',
    ),
    'flag_short' => 'Push to Facebook',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Don\'t push to Facebook',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 4,
        1 => 6,
        2 => 3,
        3 => 7,
        4 => 9,
      ),
      'unflag' => array(
        0 => 4,
        1 => 6,
        2 => 3,
        3 => 7,
        4 => 9,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 0,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'ding_social',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
