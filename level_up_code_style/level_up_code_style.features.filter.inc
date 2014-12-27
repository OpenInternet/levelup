<?php
/**
 * @file
 * level_up_code_style.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function level_up_code_style_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'prettify' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'prettify_filter_tag' => '<code> <source>',
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
