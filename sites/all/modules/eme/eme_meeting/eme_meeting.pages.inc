<?php
function eme_meeting_request_form (){
  module_load_include('inc', 'node', 'node.pages');

  $form = node_add('meeting_inquiry_form');
  return  drupal_render($form);
}
