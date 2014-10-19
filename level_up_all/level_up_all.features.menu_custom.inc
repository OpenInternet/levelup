<?php
/**
 * @file
 * level_up_all.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function level_up_all_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-resources-for-leading-train.
  $menus['menu-resources-for-leading-train'] = array(
    'menu_name' => 'menu-resources-for-leading-train',
    'title' => 'Resources for Leading Trainings',
    'description' => '',
  );
  // Exported menu: menu-resources-for-trainers.
  $menus['menu-resources-for-trainers'] = array(
    'menu_name' => 'menu-resources-for-trainers',
    'title' => 'Resources for Trainers',
    'description' => '',
  );
  // Exported menu: menu-resources-for-trainingtrain.
  $menus['menu-resources-for-trainingtrain'] = array(
    'menu_name' => 'menu-resources-for-trainingtrain',
    'title' => 'Resources for Leading Trainings of Trainers',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Resources for Leading Trainings');
  t('Resources for Leading Trainings of Trainers');
  t('Resources for Trainers');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
