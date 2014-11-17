<?php
/**
 * @file
 * level_up_full_view.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function level_up_full_view_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function level_up_full_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
