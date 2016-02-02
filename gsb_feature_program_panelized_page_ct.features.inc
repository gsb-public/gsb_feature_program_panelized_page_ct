<?php
/**
 * @file
 * gsb_feature_program_panelized_page_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_program_panelized_page_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_program_panelized_page_ct_node_info() {
  $items = array(
    'program_panelized_page' => array(
      'name' => t('Program Panelized Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
