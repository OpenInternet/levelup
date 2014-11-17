<?php
/**
 * @file
 * level_up_all.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function level_up_all_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|activity|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'activity';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_materials',
        2 => 'field_duration',
        3 => 'field_methods',
        4 => 'field_discussion',
        5 => 'field_media',
        6 => 'field_deepening',
        7 => 'field_synthesis',
        8 => 'field_tags',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_materials' => 'ds_content',
      'field_duration' => 'ds_content',
      'field_methods' => 'ds_content',
      'field_discussion' => 'ds_content',
      'field_media' => 'ds_content',
      'field_deepening' => 'ds_content',
      'field_synthesis' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|activity|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_image_caption',
        2 => 'body',
        3 => 'field_event_date',
        4 => 'field_event_location',
        5 => 'field_registration',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_image_caption' => 'ds_content',
      'body' => 'ds_content',
      'field_event_date' => 'ds_content',
      'field_event_location' => 'ds_content',
      'field_registration' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_subtitle',
        1 => 'field_page_image',
        2 => 'field_image_caption',
        3 => 'body',
        4 => 'field_resource_type',
      ),
    ),
    'fields' => array(
      'field_subtitle' => 'ds_content',
      'field_page_image' => 'ds_content',
      'field_image_caption' => 'ds_content',
      'body' => 'ds_content',
      'field_resource_type' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|topic|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'topic';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_summary',
        2 => 'field_discussion',
        3 => 'field_input',
        4 => 'field_deepening',
        5 => 'field_synthesis',
        6 => 'field_activity_reference',
        7 => 'field_tags',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_summary' => 'ds_content',
      'field_discussion' => 'ds_content',
      'field_input' => 'ds_content',
      'field_deepening' => 'ds_content',
      'field_synthesis' => 'ds_content',
      'field_activity_reference' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|topic|default'] = $ds_layout;

  return $export;
}
