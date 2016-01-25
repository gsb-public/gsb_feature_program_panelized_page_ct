<?php
/**
 * @file
 * gsb_feature_program_panelized_page_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_program_panelized_page_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__program_panelized_page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '3',
        ),
        'workbench_access' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_program_panelized_page';
  $strongarm->value = array();
  $export['menu_options_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_program_panelized_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_program_panelized_page';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_program_panelized_page';
  $strongarm->value = '0';
  $export['node_preview_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_program_panelized_page';
  $strongarm->value = 1;
  $export['node_submitted_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_program_panelized_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 1,
      ),
      'default' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'full' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'rss' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'diff_standard' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'token' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'act_project_by_criteria' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'act_project_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'alumni_name' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'alumni_reunion_agenda_list' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'compact' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'expanded' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'views_content_pane' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'event_contacts' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'event_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'event_upcoming' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'featured' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'alumni_featured_content' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'idea_story_latest_stories' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'idea_story_related' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'idea_story_top_stories' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'insight_featured_card' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'megamenu' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'news_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'people_fpp' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'phd_job_market_candidate' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'media_contact' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'main_list' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'teaser_listing' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'revision' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_program_panelized_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_program_panelized_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_program_panelized_page';
  $strongarm->value = 0;
  $export['workbench_access_node_type_program_panelized_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_program_panelized_page';
  $strongarm->value = 'published';
  $export['workbench_moderation_default_state_program_panelized_page'] = $strongarm;

  return $export;
}
