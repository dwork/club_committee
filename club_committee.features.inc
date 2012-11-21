<?php
/**
 * @file
 * club_committee.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_committee_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function club_committee_node_info() {
  $items = array(
    'committees' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => t('Committees perform specific functions within the club. A committee might be charged with one or more projects, with managing meetings, or gaining new members.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
