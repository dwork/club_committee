<?php
/**
 * @file
 * club_committee.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function club_committee_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:committees
  $menu_links['main-menu:committees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'committees',
    'router_path' => 'committees',
    'link_title' => 'Committees',
    'options' => array(
      'attributes' => array(
        'title' => 'Committees',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Committees');


  return $menu_links;
}
