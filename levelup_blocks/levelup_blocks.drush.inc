<?php

/**
 * Implements hook_drush_command().
 */
function levelup_blocks_drush_command() {
  $items = array();

  $items['levelup-blocks'] = array(
    'description' => "Drush command levelup-blocks.",
    // Describe the arguments for this command.  Delete
    // this seciton if command takes no arguments.
    'arguments' => array(
      'arg' => 'Description of command argument.',
    ),
    // List all options used for this command. Only options that
    // are listed here (or that are global Drush options) may
    // be specified on the commnadline; all others raise an error.
    'options' => array(
      'option-name' => array(
        'description' => 'Description of option.',
        'example-value' => 'Example values for option, if required.',
      ),
    ),
    // Give one or more example commandline usages for this command
    'examples' => array(
      'drush levelup-blocks --option-name arg' => 'Do something.',
    ),
    'aliases' => array('shortcut'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH, // No bootstrap at all. Remove for full bootstrap of Drupal site.
  );

  // Commandfiles may also add topics.  These will appear in
  // the list of topics when `drush topic` is executed.
  $topic_file = dirname(__FILE__) . '/levelup-blocks-topic.txt';
  if (file_exists($topic_file)) {
    $items['docs-levelup-blocks'] = array(
      'description' => 'Description of command topic.',
      'hidden' => TRUE,
      'topic' => TRUE,
      'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
      'callback' => 'drush_print_file',
      'callback arguments' => array($topic_file),
    );
  }

  return $items;
}

/**
 * Implements hook_drush_help().
 *
 * @param
 *   A string with the help section (prepend with 'drush:')
 *
 * @return
 *   A string with the help text for your command.
 */
function levelup_blocks_drush_help($section) {
  switch ($section) {
    case 'drush:levelup-blocks':
      return dt("Brief help for Drush command levelup-blocks.");
    // The 'title' meta item is used to name a group of
    // commands in `drush help`.  If a title is not defined,
    // the default is "All commands in ___", with the
    // specific name of the commandfile (e.g. levelup_blocks).
    // Command files with less than four commands will
    // be placed in the "Other commands" section, _unless_
    // they define a title.  It is therefore preferable
    // to not define a title unless the file defines a lot
    // of commands.
    case 'meta:levelup_blocks:title':
      return dt("levelup_blocks commands");
    // The 'summary' meta item is displayed in `drush help --filter`,
    // and is used to give a general idea what the commands in this
    // command file do, and what they have in common.
    case 'meta:levelup_blocks:summary':
      return dt("Summary of all commands in this command group.");
  }
}

/**
 * Implementation of drush_hook_COMMAND().
 *
 * Main command implementation goes here.
 */
function drush_levelup_blocks() {
  $result = dt("Hello, world.");
  drush_print($result);
  // Return the result to make it available to code that calls
  // this command using drush_invoke_process
  return $result;
}

/**
 * Implementation of drush_hook_COMMAND_pre_validate().
 */
function drush_levelup_blocks_pre_validate() {
  return TRUE;
}

/**
 * Implementation of drush_hook_COMMAND_validate().
 */
function drush_levelup_blocks_validate() {
  $validated = TRUE; // replace with command validation logic
  if (!$validated) {
    return drush_set_error('DRUSH_levelup_blocks_ERROR', dt('Command validation failed.'));
  }
  return TRUE;
}

/**
 * Implementation of drush_hook_pre_COMMAND().
 */
function drush_levelup_blocks_pre_levelup_blocks() {
  // Pre-command hook implementation goes here.
  return TRUE;
}

/**
 * Implementation of drush_hook_post_COMMAND().
 */
function drush_levelup_blocks_post_levelup_blocks() {
  // Post-command hook implementation goes here.
  return TRUE;
}

/**
 * Implementation of drush_hook_COMMAND_rollback().
 */
function drush_levelup_blocks_rollback() {
  // Command rollback implementation goes here.
  return TRUE;
}

/**
 * Implementation of drush_hook_pm_enable_pre_validate().
 */
function drush_levelup_blocks_pm_enable_pre_validate() {
  // If module has any required libraries, and it needs them
  // prior to enabling in order to pass validation, then we can
  // attempt to download them here.  We must look at the command
  // arguments, because PM_ENABLE_MODULES is not available
  // in pre-validate.  See drush_levelup_blocks_post_pm_enable
  $extensions = func_get_args();
  // Deal with comma delimited extension list.
  if (strpos($extensions[0], ',') !== FALSE) {
    $extensions = explode(',', $extensions[0]);
  }
}

/**
 * Implementation of drush_hook_post_pm_enable().
 */
function drush_levelup_blocks_post_pm_enable() {
  // If module has any required libraries, this is
  // the best place to enable them.
  /*
  $extensions = drush_get_context('PM_ENABLE_MODULES');
  if (in_array('levelup_blocks', $extensions) && !drush_get_option('skip')) {
    drush_levelup_blocks_download();
  }
  */
  return TRUE;
}

// Customize to download any necessary external libraries.
// Okay to delete if not needed.
function drush_levelup_blocks_download($path = NULL) {
  if (!isset($path)) {
    if (module_exists('libraries')) {
      // Libraries 1.x will return a path even if it doesn't exist
      // while 2.x will return FALSE.
      $path = libraries_get_path('LIBRARYNAME');
      if (!$path) {
        $path = 'sites/all/libraries/LIBRARYNAME';
      }
    }
    else {
      $path = '/' . drupal_get_path('module', 'levelup_blocks') . '/LIBRARYNAME';
    }
  }
  if (is_dir($path)) {
    drush_log('LIBRARYNAME already present. No download required.', 'ok');
  }
  else {
    $library_url = 'http://server.net/library-1.0.0.zip';
    $library_zip = drush_download_file($library_url);
    if (!$library_zip) {
      drush_log(dt('LIBRARYNAME could not be downloaded from @url', array('@url' => $library_url)), 'warning');
    }
    else {
      // Note that drush_tarball_extract will process zip files too.
      $file_list = drush_tarball_extract($library_zip, FALSE, TRUE);
      if (is_array($file_list)) {
        drush_move_dir(dirname($library_zip) . '/' . $file_list[0], $path);
        drush_log(dt('LIBRARYNAME has been extracted to @path.', array('@path' => $path)), 'success');
        return TRUE;
      }
      else {
        drush_log('LIBRARYNAME could not be extracted.', 'warning');
      }
    }
  }
  return FALSE;
}
