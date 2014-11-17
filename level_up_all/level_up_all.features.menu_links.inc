<?php
/**
 * @file
 * level_up_all.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function level_up_all_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/189
  $menu_links['main-menu_about:node/189'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/189',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:node/189',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_additional-resources:node/205
  $menu_links['main-menu_additional-resources:node/205'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/205',
    'router_path' => 'node/%',
    'link_title' => 'Additional Resources',
    'options' => array(
      'identifier' => 'main-menu_additional-resources:node/205',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings-of-trainers:node/208',
  );
  // Exported menu link: main-menu_agenda-planning-guide:node/199
  $menu_links['main-menu_agenda-planning-guide:node/199'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/199',
    'router_path' => 'node/%',
    'link_title' => 'Agenda Planning Guide',
    'options' => array(
      'identifier' => 'main-menu_agenda-planning-guide:node/199',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings:node/206',
  );
  // Exported menu link: main-menu_best-practices:node/193
  $menu_links['main-menu_best-practices:node/193'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/193',
    'router_path' => 'node/%',
    'link_title' => 'Best Practices',
    'options' => array(
      'identifier' => 'main-menu_best-practices:node/193',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-trainers:node/207',
  );
  // Exported menu link: main-menu_draft-agendas:node/204
  $menu_links['main-menu_draft-agendas:node/204'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/204',
    'router_path' => 'node/%',
    'link_title' => 'Draft Agendas',
    'options' => array(
      'identifier' => 'main-menu_draft-agendas:node/204',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings-of-trainers:node/208',
  );
  // Exported menu link: main-menu_event-planning-guide:node/198
  $menu_links['main-menu_event-planning-guide:node/198'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/198',
    'router_path' => 'node/%',
    'link_title' => 'Event Planning Guide',
    'options' => array(
      'identifier' => 'main-menu_event-planning-guide:node/198',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings:node/206',
  );
  // Exported menu link: main-menu_events:admin
  $menu_links['main-menu_events:admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin',
    'router_path' => 'admin',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => 'Events',
      ),
      'identifier' => 'main-menu_events:admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_follow-up-and-me:node/201
  $menu_links['main-menu_follow-up-and-me:node/201'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/201',
    'router_path' => 'node/%',
    'link_title' => 'Follow-Up and M&E',
    'options' => array(
      'identifier' => 'main-menu_follow-up-and-me:node/201',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings:node/206',
  );
  // Exported menu link: main-menu_get-involved:node/192
  $menu_links['main-menu_get-involved:node/192'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/192',
    'router_path' => 'node/%',
    'link_title' => 'Get Involved',
    'options' => array(
      'identifier' => 'main-menu_get-involved:node/192',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/189',
  );
  // Exported menu link: main-menu_integratedholistic-security:node/195
  $menu_links['main-menu_integratedholistic-security:node/195'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/195',
    'router_path' => 'node/%',
    'link_title' => 'Integrated/Holistic Security',
    'options' => array(
      'identifier' => 'main-menu_integratedholistic-security:node/195',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-trainers:node/207',
  );
  // Exported menu link: main-menu_pedagogical-resources:node/194
  $menu_links['main-menu_pedagogical-resources:node/194'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/194',
    'router_path' => 'node/%',
    'link_title' => 'Pedagogical Resources',
    'options' => array(
      'identifier' => 'main-menu_pedagogical-resources:node/194',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-trainers:node/207',
  );
  // Exported menu link: main-menu_resources-for-leading-trainings-of-trainers:node/208
  $menu_links['main-menu_resources-for-leading-trainings-of-trainers:node/208'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/208',
    'router_path' => 'node/%',
    'link_title' => 'Resources for Leading Trainings of Trainers',
    'options' => array(
      'identifier' => 'main-menu_resources-for-leading-trainings-of-trainers:node/208',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources-for-leading-trainings:node/206
  $menu_links['main-menu_resources-for-leading-trainings:node/206'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/206',
    'router_path' => 'node/%',
    'link_title' => 'Resources for Leading Trainings',
    'options' => array(
      'identifier' => 'main-menu_resources-for-leading-trainings:node/206',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources-for-trainers:node/207
  $menu_links['main-menu_resources-for-trainers:node/207'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/207',
    'router_path' => 'node/%',
    'link_title' => 'Resources for Trainers',
    'options' => array(
      'identifier' => 'main-menu_resources-for-trainers:node/207',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_threatsvulnerabilities:node/196
  $menu_links['main-menu_threatsvulnerabilities:node/196'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/196',
    'router_path' => 'node/%',
    'link_title' => 'Threats/Vulnerabilities',
    'options' => array(
      'identifier' => 'main-menu_threatsvulnerabilities:node/196',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-trainers:node/207',
  );
  // Exported menu link: main-menu_tools--services:node/197
  $menu_links['main-menu_tools--services:node/197'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/197',
    'router_path' => 'node/%',
    'link_title' => 'Tools & Services',
    'options' => array(
      'identifier' => 'main-menu_tools--services:node/197',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-trainers:node/207',
  );
  // Exported menu link: main-menu_tools-for-the-classroom:node/202
  $menu_links['main-menu_tools-for-the-classroom:node/202'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/202',
    'router_path' => 'node/%',
    'link_title' => 'Tools for the Classroom',
    'options' => array(
      'identifier' => 'main-menu_tools-for-the-classroom:node/202',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings:node/206',
  );
  // Exported menu link: main-menu_training-topic-repos:node/200
  $menu_links['main-menu_training-topic-repos:node/200'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/200',
    'router_path' => 'node/%',
    'link_title' => 'Training Topic Repos',
    'options' => array(
      'identifier' => 'main-menu_training-topic-repos:node/200',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings:node/206',
  );
  // Exported menu link: main-menu_what-is-a-tot:node/203
  $menu_links['main-menu_what-is-a-tot:node/203'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/203',
    'router_path' => 'node/%',
    'link_title' => 'What is a ToT?',
    'options' => array(
      'identifier' => 'main-menu_what-is-a-tot:node/203',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_resources-for-leading-trainings-of-trainers:node/208',
  );
  // Exported menu link: main-menu_who-owns-this-stuff:node/191
  $menu_links['main-menu_who-owns-this-stuff:node/191'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/191',
    'router_path' => 'node/%',
    'link_title' => 'Who Owns This Stuff?',
    'options' => array(
      'identifier' => 'main-menu_who-owns-this-stuff:node/191',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/189',
  );
  // Exported menu link: main-menu_who-we-are:node/188
  $menu_links['main-menu_who-we-are:node/188'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/188',
    'router_path' => 'node/%',
    'link_title' => 'Who We Are',
    'options' => array(
      'identifier' => 'main-menu_who-we-are:node/188',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/189',
  );
  // Exported menu link: main-menu_why-levelup:node/190
  $menu_links['main-menu_why-levelup:node/190'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/190',
    'router_path' => 'node/%',
    'link_title' => 'Why LevelUp?',
    'options' => array(
      'identifier' => 'main-menu_why-levelup:node/190',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/189',
  );
  // Exported menu link: menu-resources-for-leading-train_agenda-planning-guide:node/199
  $menu_links['menu-resources-for-leading-train_agenda-planning-guide:node/199'] = array(
    'menu_name' => 'menu-resources-for-leading-train',
    'link_path' => 'node/199',
    'router_path' => 'node/%',
    'link_title' => 'Agenda Planning Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-leading-train_agenda-planning-guide:node/199',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-leading-train_event-planning-guide:node/198
  $menu_links['menu-resources-for-leading-train_event-planning-guide:node/198'] = array(
    'menu_name' => 'menu-resources-for-leading-train',
    'link_path' => 'node/198',
    'router_path' => 'node/%',
    'link_title' => 'Event Planning Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-leading-train_event-planning-guide:node/198',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-leading-train_follow-up-and-me:node/201
  $menu_links['menu-resources-for-leading-train_follow-up-and-me:node/201'] = array(
    'menu_name' => 'menu-resources-for-leading-train',
    'link_path' => 'node/201',
    'router_path' => 'node/%',
    'link_title' => 'Follow-Up and M&E',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-leading-train_follow-up-and-me:node/201',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-leading-train_tools-for-the-classroom:node/202
  $menu_links['menu-resources-for-leading-train_tools-for-the-classroom:node/202'] = array(
    'menu_name' => 'menu-resources-for-leading-train',
    'link_path' => 'node/202',
    'router_path' => 'node/%',
    'link_title' => 'Tools for the Classroom',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-leading-train_tools-for-the-classroom:node/202',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-leading-train_training-topic-repos:node/200
  $menu_links['menu-resources-for-leading-train_training-topic-repos:node/200'] = array(
    'menu_name' => 'menu-resources-for-leading-train',
    'link_path' => 'node/200',
    'router_path' => 'node/%',
    'link_title' => 'Training Topic Repos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-leading-train_training-topic-repos:node/200',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainers_best-practices:node/193
  $menu_links['menu-resources-for-trainers_best-practices:node/193'] = array(
    'menu_name' => 'menu-resources-for-trainers',
    'link_path' => 'node/193',
    'router_path' => 'node/%',
    'link_title' => 'Best Practices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainers_best-practices:node/193',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainers_integratedholistic-security:node/195
  $menu_links['menu-resources-for-trainers_integratedholistic-security:node/195'] = array(
    'menu_name' => 'menu-resources-for-trainers',
    'link_path' => 'node/195',
    'router_path' => 'node/%',
    'link_title' => 'Integrated/Holistic Security',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainers_integratedholistic-security:node/195',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainers_pedagogical-resources:node/194
  $menu_links['menu-resources-for-trainers_pedagogical-resources:node/194'] = array(
    'menu_name' => 'menu-resources-for-trainers',
    'link_path' => 'node/194',
    'router_path' => 'node/%',
    'link_title' => 'Pedagogical Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainers_pedagogical-resources:node/194',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainers_threatsvulnerabilities:node/196
  $menu_links['menu-resources-for-trainers_threatsvulnerabilities:node/196'] = array(
    'menu_name' => 'menu-resources-for-trainers',
    'link_path' => 'node/196',
    'router_path' => 'node/%',
    'link_title' => 'Threats/Vulnerabilities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainers_threatsvulnerabilities:node/196',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainers_tools--services:node/197
  $menu_links['menu-resources-for-trainers_tools--services:node/197'] = array(
    'menu_name' => 'menu-resources-for-trainers',
    'link_path' => 'node/197',
    'router_path' => 'node/%',
    'link_title' => 'Tools & Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainers_tools--services:node/197',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainingtrain_additional-resources:node/205
  $menu_links['menu-resources-for-trainingtrain_additional-resources:node/205'] = array(
    'menu_name' => 'menu-resources-for-trainingtrain',
    'link_path' => 'node/205',
    'router_path' => 'node/%',
    'link_title' => 'Additional Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainingtrain_additional-resources:node/205',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainingtrain_draft-agendas:node/204
  $menu_links['menu-resources-for-trainingtrain_draft-agendas:node/204'] = array(
    'menu_name' => 'menu-resources-for-trainingtrain',
    'link_path' => 'node/204',
    'router_path' => 'node/%',
    'link_title' => 'Draft Agendas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainingtrain_draft-agendas:node/204',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-resources-for-trainingtrain_what-is-a-tot:node/203
  $menu_links['menu-resources-for-trainingtrain_what-is-a-tot:node/203'] = array(
    'menu_name' => 'menu-resources-for-trainingtrain',
    'link_path' => 'node/203',
    'router_path' => 'node/%',
    'link_title' => 'What is a ToT?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-resources-for-trainingtrain_what-is-a-tot:node/203',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Additional Resources');
  t('Agenda Planning Guide');
  t('Best Practices');
  t('Draft Agendas');
  t('Event Planning Guide');
  t('Events');
  t('Follow-Up and M&E');
  t('Get Involved');
  t('Integrated/Holistic Security');
  t('Pedagogical Resources');
  t('Resources for Leading Trainings');
  t('Resources for Leading Trainings of Trainers');
  t('Resources for Trainers');
  t('Threats/Vulnerabilities');
  t('Tools & Services');
  t('Tools for the Classroom');
  t('Training Topic Repos');
  t('What is a ToT?');
  t('Who Owns This Stuff?');
  t('Who We Are');
  t('Why LevelUp?');


  return $menu_links;
}
