<?php
/**
 * @file
 * special_offers_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function special_offers_features_default_rules_configuration() {
  $items = array();
  $items['rules_restrict_access_to_special_offers_nodes'] = entity_import('rules_config', '{ "rules_restrict_access_to_special_offers_nodes" : {
      "LABEL" : "Restrict Access to Special Offers Nodes ",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "eme" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--special_offers" : { "bundle" : "special_offers" } },
      "DO" : []
    }
  }');
  return $items;
}
