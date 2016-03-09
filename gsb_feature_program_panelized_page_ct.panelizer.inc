<?php
/**
 * @file
 * gsb_feature_program_panelized_page_ct.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function gsb_feature_program_panelized_page_ct_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:program_panelized_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'program_panelized_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'gsb-widescreen';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '8d015503-2d0c-458d-838c-5c5027327880';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d7f759dd-eb7a-4372-8bd2-5589969a8906';
    $pane->panel = 'featured_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_program';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'conditions' => array(),
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd7f759dd-eb7a-4372-8bd2-5589969a8906';
    $display->content['new-d7f759dd-eb7a-4372-8bd2-5589969a8906'] = $pane;
    $display->panels['featured_content'][0] = 'new-d7f759dd-eb7a-4372-8bd2-5589969a8906';
    $pane = new stdClass();
    $pane->pid = 'new-c999c6d0-6952-4ad3-a883-97c6e9ec4502';
    $pane->panel = 'featured_content';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c999c6d0-6952-4ad3-a883-97c6e9ec4502';
    $display->content['new-c999c6d0-6952-4ad3-a883-97c6e9ec4502'] = $pane;
    $display->panels['featured_content'][1] = 'new-c999c6d0-6952-4ad3-a883-97c6e9ec4502';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d7f759dd-eb7a-4372-8bd2-5589969a8906';
  $panelizer->display = $display;
  $export['node:program_panelized_page:default'] = $panelizer;

  return $export;
}
