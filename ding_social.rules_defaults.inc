<?php
/**
 * @file
 * ding_social.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ding_social_default_rules_configuration() {
  $items = array();
  $items['rules_post_news_to_facebook'] = entity_import('rules_config', '{ "rules_post_news_to_facebook" : {
      "LABEL" : "Post News to Facebook",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Ding Social" ],
      "REQUIRES" : [ "rules", "fb_autopost_entity" ],
      "ON" : { "node_insert--ding_news" : { "bundle" : "ding_news" } },
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "facebook_publication",
              "param_type" : "post",
              "param_user" : [ "node:author" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
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
        { "data_set" : {
            "data" : [ "entity-created:field-facebook-picture" ],
            "value" : [ "node:field-ding-news-title-image:0:file:url" ]
          }
        },
        { "publish_to_facebook" : {
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
