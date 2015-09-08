<?php
function eme_gallery_masonary_style($entity_type, $entity, $field, $instance, $langcode, $items, $display){
  libraries_load('masonry');
  libraries_load('imagesloaded');
  libraries_load('fancybox');
  drupal_add_js($display['settings'], 'setting');
  $images  =  array();
  foreach ($items as $delta => $item) {
    $image_styles =  image_styles();

    $images[] = array(
     'src'=>image_style_url($display['settings']['gallery_image_style'],$item['uri']),
     'highres'=>file_create_url($item['uri']),

     );
  }
  drupal_add_js(drupal_get_path('module', 'eme_gallery') .'/js/gallery.js', 'file');
  drupal_add_css(drupal_get_path('module', 'eme_gallery') .'/css/gallery.css', 'file');
  if ($display['settings']['shuffle']){
    shuffle($images);
  }
  //kpr ($images);
  $element =  array();
  $element[0]['#markup']  =  theme('eme_gallery_masonary',array('images'=>$images,'settings'=> $display['settings']));

  return $element;
}
