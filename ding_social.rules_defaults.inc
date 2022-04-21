<?php
/**
 * @file
 * ding_social.rules_defaults.inc
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
 * Implements hook_default_rules_configuration().
 */
function ding_social_default_rules_configuration() {
  $items = array();
  $items['rules_fb_check_node_is_flagged'] = entity_import('rules_config', '{ "rules_fb_check_node_is_flagged" : {
      "LABEL" : "FB: Check node is flagged",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "TAGS" : [ "Ding Social" ],
      "REQUIRES" : [ "flag" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "AND" : [
        { "flag_flagged_node" : {
            "flag" : "facebook",
            "node" : [ "node" ],
            "flagging_user" : [ "node:author" ]
          }
        }
      ]
    }
  }');
  $items['rules_post_events_to_facebook'] = entity_import('rules_config', '{ "rules_post_events_to_facebook" : {
      "LABEL" : "Post Events to Facebook",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Ding Social" ],
      "REQUIRES" : [ "rules", "ding_social" ],
      "ON" : { "node_insert--ding_event" : { "bundle" : "ding_event" } },
      "IF" : [
        { "component_rules_fb_check_node_is_flagged" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "ding_social_link",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-message" ],
            "value" : [ "node:field-ding-event-lead" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-link" ],
            "value" : [ "node:url" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-ding-social-related-id" ],
            "value" : [ "node:nid" ]
          }
        },
        { "scheduled_publish_to_facebook" : {
            "USING" : { "publication" : [ "entity-created" ], "pages" : "" },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id" : "Facebook publication returned ID" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:facebook-id" ],
            "value" : [ "facebook-publication-id" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
      ]
    }
  }');
  $items['rules_post_news_to_facebook'] = entity_import('rules_config', '{ "rules_post_news_to_facebook" : {
      "LABEL" : "Post News to Facebook",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Ding Social" ],
      "REQUIRES" : [ "rules", "ding_social" ],
      "ON" : { "node_insert--ding_news" : { "bundle" : "ding_news" } },
      "IF" : [
        { "component_rules_fb_check_node_is_flagged" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "ding_social_link",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-ding-social-related-id" ],
            "value" : [ "node:nid" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-message" ],
            "value" : [ "node:field-ding-news-lead" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-link" ],
            "value" : [ "node:url" ]
          }
        },
        { "scheduled_publish_to_facebook" : {
            "USING" : { "publication" : [ "entity-created" ], "pages" : "" },
            "PROVIDE" : { "facebook_publication_id" : { "facebook_publication_id" : "Facebook publication returned ID" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:facebook-id" ],
            "value" : [ "facebook-publication-id" ]
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
