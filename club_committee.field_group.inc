<?php
/**
 * @file
 * club_committee.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function club_committee_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_committee|user|user|form';
  $field_group->group_name = 'group_committee';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Committee Participation',
    'weight' => '6',
    'children' => array(
      0 => 'field_committee_chair',
      1 => 'field_committee_members',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_committee|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phonenumbers|node|committees|form';
  $field_group->group_name = 'group_phonenumbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'committees';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phone Numbers',
    'weight' => '4',
    'children' => array(
      0 => 'field_phone',
      1 => 'field_phone_number_purpose',
      2 => 'field_private',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phonenumbers|node|committees|form'] = $field_group;

  return $export;
}
