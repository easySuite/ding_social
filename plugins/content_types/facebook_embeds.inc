<?php
/**
 * @file
 * Adding Facebook social plugin on panel.
 *
 * This file is part of ding_social module.
 *
 * ding_social module is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ding_social module is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with ding_social module. If not, see <https://www.gnu.org/licenses/>.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Facebook embeds'),
  'description' => t('Allow to embed Facebook social plugins like posts, videos and pages.'),
  'category' => t('Culture'),
  'edit form' => 'ding_social_facebook_embeds_form',
  'render callback' => 'ding_social_facebook_embeds_render',
);

/**
 * Edit form.
 */
function ding_social_facebook_embeds_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['facebook_entity_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Facebook entity URL'),
    '#default_value' => !empty($conf['facebook_entity_url']) ? $conf['facebook_entity_url'] : NULL,
  );
  return $form;
}

/**
 * Edit form submit function.
 */
function ding_social_facebook_embeds_form_submit($form, &$form_state) {
  $form_state['conf']['facebook_entity_url'] = $form_state['values']['facebook_entity_url'];
}

/**
 * Render the panel.
 */
function ding_social_facebook_embeds_render($subtype, $conf, $panel_args, $context) {
  $url = $conf['facebook_entity_url'];

  $attributes = array();
  switch ($url) {
    case strpos($url, 'posts') !== FALSE:
      $attributes = array(
        'class' => array('fb-post'),
        'data-href' => array($url),
        'data-width' => array('500px'),
      );
      break;

    case strpos($url, 'video') !== FALSE:
      $attributes = array(
        'class' => array('fb-video'),
        'data-href' => array($url),
        'data-allowfullscreen' => array('true'),
      );
      break;

    default:
      $attributes = array(
        'class' => array('fb-page'),
        'data-href' => array($url),
        'data-width' => array('500px'),
        'data-tabs' => array('timeline'),
        'data-hide-cover' => array('false'),
        'data-show-facepile' => array('true'),
      );
      break;
  }

  $container = array(
    '#type' => 'container',
    '#attributes' => $attributes,
  );

  $block = new stdClass();
  $block->title = '';
  $block->content = drupal_render($container);

  return $block;
}
