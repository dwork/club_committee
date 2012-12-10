<?php
/**
 * @file
 * club_committee.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function club_committee_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'committee_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committee Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Committee Details';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['relationships']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['relationships']['field_album_target_id']['required'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Title : [title] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Committee Type */
  $handler->display->display_options['fields']['field_committee_type']['id'] = 'field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['table'] = 'field_data_field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['field'] = 'field_committee_type';
  $handler->display->display_options['fields']['field_committee_type']['label'] = '';
  $handler->display->display_options['fields']['field_committee_type']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['text'] = 'Committee Type: [field_committee_type]';
  $handler->display->display_options['fields']['field_committee_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_committee_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_committee_type']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['text'] = 'Website : [field_website] ';
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_website']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_website']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_website']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Field: Phone Number */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['text'] = 'Phone Number : [field_phone]';
  $handler->display->display_options['fields']['field_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone']['click_sort_column'] = 'number';
  $handler->display->display_options['fields']['field_phone']['type'] = 'local_phone_number';
  $handler->display->display_options['fields']['field_phone']['field_api_classes'] = 0;
  /* Field: Content: Private */
  $handler->display->display_options['fields']['field_private']['id'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['table'] = 'field_data_field_private';
  $handler->display->display_options['fields']['field_private']['field'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['text'] = '( [field_private] )';
  $handler->display->display_options['fields']['field_private']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_private']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_private']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_private']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_private']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_private']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_private']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_private']['field_api_classes'] = 0;
  /* Field: Content: Purpose */
  $handler->display->display_options['fields']['field_phone_number_purpose']['id'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['table'] = 'field_data_field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['field'] = 'field_phone_number_purpose';
  $handler->display->display_options['fields']['field_phone_number_purpose']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_phone_number_purpose']['field_api_classes'] = 0;
  /* Field: Chair Name (hidden) */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Chair Name (hidden)';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_first_name] [field_last_name] [field_middle_initial] [field_suffix]';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = 0;
  /* Field: Check Phone# fields */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Check Phone# fields';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
if (isset( $data->field_field_phone[0])) {
    print "Phone: " . $data->field_field_phone[0][\'rendered\'][\'#markup\'];
    if (isset($data->field_field_private[0])) {
       print \' (\' . $data->field_field_private[0][\'rendered\'][\'#markup\'] . \')\';
   }
   if (isset($data->field_field_phone_number_purpose[0])) {
       print " : " . $data->field_field_phone_number_purpose[0][\'raw\'][\'safe_value\'];
   }
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 1;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'Committee Chair';
  $handler->display->display_options['fields']['php_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$name = \'\';
$line = \'\';
$query = new EntityFieldQuery;
  $query
    ->entityCondition(\'entity_type\', \'user\')
    ->propertyCondition(\'status\', 1)
    ->propertyCondition(\'uid\',1,\'<>\')
    ->fieldCondition(\'field_committee_chair\',\'target_id\',$row->nid,\'=\');
  $result = $query->execute();
  if (isset($result[\'user\'])) {
    $users = user_load_multiple(array_keys($result[\'user\']));
    foreach ($users as $user) {
       $name .= club_base_user_name($user) . "\\n";
       $ph = club_base_get_phone ($user->uid);   // number, location, type
       $ph = array();
       if (!empty($ph)) {
         foreach($ph as $phone) {
           $line .= $phone[\'location\']." : ". $phone[\'number\'] . "; ";
         }
       }
     }
     print $name . "<BR> &nbsp; &nbsp; &nbsp; " .  $line;
  }
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Committee Members';
  $handler->display->display_options['fields']['php_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = '$name = \'\';
$query = new EntityFieldQuery;
  $query
    ->entityCondition(\'entity_type\', \'user\')
    ->propertyCondition(\'status\', 1)
    ->propertyCondition(\'uid\',1,\'<>\')
    ->fieldCondition(\'field_committee_members\',\'target_id\',$row->nid,\'=\');
  $result = $query->execute();
  $users = user_load_multiple(array_keys($result[\'user\']));
  foreach ($users as $user) {
    $name .= club_base_user_name($user) . "\\n";
  }
return $name;';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_locations']['id'] = 'field_event_locations';
  $handler->display->display_options['fields']['field_event_locations']['table'] = 'field_data_field_event_locations';
  $handler->display->display_options['fields']['field_event_locations']['field'] = 'field_event_locations';
  $handler->display->display_options['fields']['field_event_locations']['label'] = 'Meeting Location';
  $handler->display->display_options['fields']['field_event_locations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_event_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_locations']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_event_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_event_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_event_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_event_locations']['field_api_classes'] = 0;
  /* Field: Content: Album Cover */
  $handler->display->display_options['fields']['field_album_cover_full']['id'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['table'] = 'field_data_field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['field'] = 'field_album_cover_full';
  $handler->display->display_options['fields']['field_album_cover_full']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['field_album_cover_full']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album_cover_full']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album_cover_full']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_album_cover_full']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_album_cover_full']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  $handler->display->display_options['fields']['body_1']['relationship'] = 'field_album_target_id';
  $handler->display->display_options['fields']['body_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['text'] = '[body_1] ... Click here: ';
  $handler->display->display_options['fields']['body_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body_1']['hide_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body_1']['field_api_classes'] = 0;
  /* Field: Album (Click to see Album) */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['ui_name'] = 'Album (Click to see Album)';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_album']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_album']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_album']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_album']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_album']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Album cover + description */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Album cover + description';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<table><tr><td>[field_album_cover_full]</td><td>[body_1] [field_album]</td></table>';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: ( Return to Committees ) Link */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = '( Return to Committees ) Link';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Return to Committees';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'committees';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committees' => 'committees',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'committee-details';
  $export['committee_details'] = $view;

  $view = new view;
  $view->name = 'committees_list_';
  $view->description = 'Display committee information';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committees (List)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Committees';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_committee_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_member_name' => 'field_member_name',
    'mail' => 'mail',
    'nothing' => 'nothing',
    'field_committee_type' => 'field_committee_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_member_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_committee_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Node NID (hidden) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node NID (hidden)';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'committee-details/[nid]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Field: Club/Chapter (field_chapter) */
  $handler->display->display_options['arguments']['field_chapter_target_id']['id'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['table'] = 'field_data_field_chapter';
  $handler->display->display_options['arguments']['field_chapter_target_id']['field'] = 'field_chapter_target_id';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_options']['code'] = 'if (function_exists(\'club_base_get_chapter\')) { 
  return club_base_get_chapter();
} else {
  drupal_set_message(t(\'Error: function "club_base_get_chapter" not found; make sure "club_base" module is installed and activated\'));
}';
  $handler->display->display_options['arguments']['field_chapter_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_chapter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_chapter_target_id']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_chapter_target_id']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committees' => 'committees',
  );
  /* Filter criterion: Content: Committee Type (field_committee_type) */
  $handler->display->display_options['filters']['field_committee_type_tid']['id'] = 'field_committee_type_tid';
  $handler->display->display_options['filters']['field_committee_type_tid']['table'] = 'field_data_field_committee_type';
  $handler->display->display_options['filters']['field_committee_type_tid']['field'] = 'field_committee_type_tid';
  $handler->display->display_options['filters']['field_committee_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['operator_id'] = 'field_committee_type_tid_op';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['label'] = 'Committee Type';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['operator'] = 'field_committee_type_tid_op';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['identifier'] = 'field_committee_type_tid';
  $handler->display->display_options['filters']['field_committee_type_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_committee_type_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_committee_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_committee_type_tid']['vocabulary'] = 'committee_type';
  $handler->display->display_options['filters']['field_committee_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_committee_type_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'committees';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Committees';
  $handler->display->display_options['menu']['description'] = 'Committees';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['committees_list_'] = $view;

  return $export;
}
