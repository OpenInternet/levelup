<?php
/**
 * @file
 * level_up_full_view.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function level_up_full_view_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|sub_topic|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'sub_topic';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'level_up_full_view_link' => array(
      'weight' => '15',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|sub_topic|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function level_up_full_view_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'level_up_full_view_link';
  $ds_field->label = 'level_up_full_view_link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="/print/[node:url:path]/full">- Export Full Module w/ADIDS (.rtf)</a><br />
<a href="/printpdf/[node:url:path]/full">- Export Full Module w/ADIDS (.pdf)</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['level_up_full_view_link'] = $ds_field;

  return $export;
}
