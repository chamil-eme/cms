
<?php

/**
 * @file
 * The PHP page that serves all page requests on a Drupal installation.
 *
 * The routines here dispatch control to the appropriate handler, which then
 * prints the appropriate page.
 *
 * All Drupal code is released under the GNU General Public License.
 * See COPYRIGHT.txt and LICENSE.txt.
 */

/**
 * Root directory of Drupal installation.
 */
define('DRUPAL_ROOT', getcwd());

require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);



phpinfo();

exit;



$a= theme('eme_tablefield_formatter_tablefield_seating_capacity' ,array('element' => '3'));
var_dump($a);


exit;


$arr[] =  array (
  'tourpage' => 1060,
  'year' => '2014',
  'month' =>'May',
  'monthnum' => '05',
  'date' => '19'
  );

$arr[] =  array (
  'tourpage' => 1060,
  'year' => '2015',
  'month' =>'January',
  'monthnum' => '01',
  'date' => '19'
  );
$arr[] = array (
  'tourpage' => 1061,
  'year' => '2015',
  'month' =>'August',
  'monthnum' => '09',
  'date' => '20'
  );
$arr[] = array (
  'tourpage' => 1062,
  'year' => '2015',
  'month' =>'August',
  'monthnum' => '09',
  'date' => '21'
  );

$arr[] =  array (
  'tourpage' => 1060,
  'year' => '2016',
  'month' =>'January',
  'monthnum' => '01',
  'date' => '19'
  );
$arr[] = array (
  'tourpage' => 1061,
  'year' => '2016',
  'month' =>'August',
  'monthnum' => '09',
  'date' => '20'
  );
$arr[] = array (
  'tourpage' => 1062,
  'year' => '2016',
  'month' =>'August',
  'monthnum' => '09',
  'date' => '21'
  );


$years =  group_assoc ($arr,'year');


$result =  array();
foreach ($years as $year) {

  $result[$year[0]['year']] =  array();
  $months =  group_assoc ($year,'month');
  foreach ($months as $month) {

    $result[$year[0]['year']][$month[0]['month']] =  array();
    $dates =  group_assoc ($month,'date');
    foreach ($dates as $date) {

     $result[$year[0]['year']][$month[0]['month']][$date[0]['date']] =  $date[0]['tourpage'];
   }
 }

}

function group_assoc($array, $key) {
  $return = array();
  foreach($array as $v) {
    $return[$v[$key]][] = $v;
  }
  return $return;
}



exit;



$main_arr =  array ('a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r');

$re_arranged_array =  array();
$temp_array = array();
$group_val =  4;
foreach ($main_arr as $key=>$row)
{

  if (count($temp_array)<$group_val){
   $temp_array[] =  $row;
 }
 if (count($temp_array)==$group_val || $key==8 || $key ==  9 ){

  $re_arranged_array[]=  $temp_array;
  $temp_array =  array();
}
}

kpr($re_arranged_array);


exit;













$menu = menu_navigation_links('bentota');
print theme('links__bentota', array('links' => $menu));



exit;
$result =  views_get_view_result('special_offers', 'single_special_offer', array(125));
if (empty($result)){
  die('empty');
}

exit;

kpr(theme('tb_megamenu', array('menu_name' => drupal_lookup_path('alias', "node/99"))));


exit;
$block['weight'] = 0;
if ($router_item = menu_get_item('node/128')) {
  kpr($router_item);
  //if ($router_item['access']) {
    // The user has access to the page in $path.
  //}
}
 // $tb_megamenu = db_select('tb_megamenus', 't')->fields('t')->condition('menu_name', $menu_name)->execute()->fetchObject();


 // exit;

 // var_dump(get_hotel_from_url_menu_object(101));

 // function get_hotel_from_url_menu_object($nid){
 // $node  =  node_load($nid);
 // if ($node->type=='hotel'){
 // return $node->nid;
 // }
 // $items  =  field_get_items('node',$node,'field_hotel');
 // if (!empty($items)){
 // return $items[0]['target_id'];
 // }
 // $items  =  field_get_items('node',$node,'field_'.$node->type.'_main');

 // if (!empty($items)){
 // return get_hotel_from_url_menu_object($items[0]['target_id']);

 // }
 // }

 // exit;







 // print theme('tb_megamenu', array('menu_name' => 'bentota'));
 // exit;

 // /*
 // $menu['menu_name'] = 'bentota'; //
 // $main_content_types = core_get_main_content_types();
 // foreach($main_content_types as $main_content_type){
 // $curr_list = variable_get('menu_options_'.$main_content_type);
 // variable_set('menu_options_'.$main_content_type, array_merge($curr_list, array($menu['menu_name'])));
 // }
 // */




 // exit;


 // // $listing_id = core_get_list_nid_from_hotel_nid(79,'rooms_main');
 // // kpr($listing_id);

 // // $listing_id = core_get_list_nid_from_hotel_nid(39,'rooms_main');
 // // kpr($listing_id);



 // print l('Create','node/add/rooms',array('attributes' => array('target'=>'_blank'),'query' => array('destination'=>current_path(),'hid' => $view->args[0])));



 // exit;






 // kpr(menu_load_links('asd'));

 // exit;
 // $node =   node_load(69);

 // eme_menu_crate_new_hotel_menu($node);



 // exit;
 // kpr(menu_get_menus());

 // menu_delete(array('menu_name'=>'menu-hotel-x'));
 // exit;




 // kpr(node_load(39));

 // exit;

 // $a= drupal_lookup_path('alias', "node/39");

 // kpr($a);

 // exit;
 // $field_name = 'field_custom_htag';
 // $filed_info = field_info_field($field_name);


 // if (empty($filed_info)) {

 // $field_custom_htag = array(
 // 'active' => 1,
 // 'cardinality' => 1,
 // 'deleted' => 0,
 // 'entity_types' => array(),
 // 'field_name' => 'field_custom_htag',
 // 'indexes' => array(
 // 'format' => array(
 // 0 => 'format',
 // ),
 // ),
 // 'locked' => 0,
 // 'module' => 'text',
 // 'settings' => array(
 // 'max_length' => 255,
 // ),
 // 'translatable' => 0,
 // 'type' => 'text',
 // );
 // field_create_field($field_custom_htag);
 // }
 // $node_types = node_type_get_types();

 // if (!empty($node_types)) {
 // foreach ($node_types as $type => $node_type_info) {
 // watchdog('eme_custom_htag', 'add fied to'.$node_types);
 // $instance_info = field_info_instance('node', $field_name, $type);
 // if (empty($instance_info)) {
 // $instance = array(
 // 'bundle' => $type,
 // 'default_value' => NULL,
 // 'deleted' => 0,
 // 'description' => '',
 // 'display' => array(
 // 'default' => array(
 // 'label' => 'above',
 // 'module' => 'text',
 // 'settings' => array(),
 // 'type' => 'text_default',
 // 'weight' => 0,
 // ),
 // 'teaser' => array(
 // 'label' => 'above',
 // 'settings' => array(),
 // 'type' => 'hidden',
 // 'weight' => 0,
 // ),
 // ),
 // 'entity_type' => 'node',
 // 'field_name' => $field_name,
 // 'label' => 'Custom htag',
 // 'required' => 0,
 // 'settings' => array(
 // 'text_processing' => 0,
 // 'user_register_form' => FALSE,
 // ),
 // 'widget' => array(
 // 'active' => 1,
 // 'module' => 'text',
 // 'settings' => array(
 // 'size' => 60,
 // ),
 // 'type' => 'text_textfield',
 // 'weight' => 0,
 // ),
 // );

 // kpr($instance);
 // //field_create_instance($instance);
 // }
 // }
 // }


















 // exit;
 // $node_types = node_type_get_types();
 // if (!empty($node_types)) {
 // foreach ($node_types as $type => $node_type_info) {
 // watchdog('eme_custom_htag', 'add fied to'.$node_types);
 // $instance_info = field_info_instance('node', $field_name, $type);
 // if (empty($instance_info)) {
 // $instance = array(
 // 'bundle' => $type,
 // 'default_value' => NULL,
 // 'deleted' => 0,
 // 'description' => '',
 // 'display' => array(
 // 'default' => array(
 // 'label' => 'above',
 // 'module' => 'text',
 // 'settings' => array(),
 // 'type' => 'text_default',
 // 'weight' => 0,
 // ),
 // 'teaser' => array(
 // 'label' => 'above',
 // 'settings' => array(),
 // 'type' => 'hidden',
 // 'weight' => 0,
 // ),
 // ),
 // 'entity_type' => 'node',
 // 'field_name' => $field_name,
 // 'label' => 'Custom htag',
 // 'required' => 0,
 // 'settings' => array(
 // 'text_processing' => 0,
 // 'user_register_form' => FALSE,
 // ),
 // 'widget' => array(
 // 'active' => 1,
 // 'module' => 'text',
 // 'settings' => array(
 // 'size' => 60,
 // ),
 // 'type' => 'text_textfield',
 // 'weight' => 0,
 // ),
 // );

 // field_create_instance($instance);
 // }
 // }
 // }


 // exit;

 // kpr(field_info_fields());


 // exit;

 // $field_custom_htag = array(
 // 'active' => 1,
 // 'cardinality' => 1,
 // 'deleted' => 0,
 // 'entity_types' => array(),
 // 'field_name' => $field_name,
 // 'indexes' => array(
 // 'format' => array(
 // 0 => 'format',
 // ),
 // ),
 // 'locked' => 0,
 // 'module' => 'text',
 // 'settings' => array(
 // 'max_length' => 255,
 // ),
 // 'translatable' => 0,
 // 'type' => 'text',
 // );
 // field_create_field($field_custom_htag);

