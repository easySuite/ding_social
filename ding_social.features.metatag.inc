<?php
/**
 * @file
 * ding_social.features.metatag.inc
 *
 * This file is part of ding_social module.
 *
 * ding_social module is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ding_social module is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with ding_social module. If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * Implements hook_metatag_export_default().
 */
function ding_social_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:ding_news.
  $config['node:ding_news'] = array(
    'instance' => 'node:ding_news',
    'disabled' => FALSE,
    'config' => array(
      'og:determiner' => array(
        'value' => 'auto',
      ),
      'og:description' => array(
        'value' => '[node:field_ding_news_lead]',
      ),
      'og:image' => array(
        'value' => '[node:field_ding_news_title_image]',
      ),
      'og:image:url' => array(
        'value' => '[node:field_ding_news_title_image]',
      ),
    ),
  );

  return $config;
}
