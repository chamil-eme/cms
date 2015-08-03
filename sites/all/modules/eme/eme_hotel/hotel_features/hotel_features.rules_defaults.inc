<?php
/**
 * @file
 * hotel_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hotel_features_default_rules_configuration() {
  $items = array();
  $items['rules_create_new_menu_for_hotel'] = entity_import('rules_config', '{ "rules_create_new_menu_for_hotel" : {
      "LABEL" : "Create New Menu for Hotel",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "eme" ],
      "REQUIRES" : [ "rules", "eme_menu" ],
      "ON" : { "node_insert--hotel" : { "bundle" : "hotel" } },
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "hotel" : "hotel" } } } }
      ],
      "DO" : [ { "eme_menu_crate_new_hotel_menu" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
