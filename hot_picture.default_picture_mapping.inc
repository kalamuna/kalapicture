<?php
/**
 * @file
 * hot_picture.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hot_picture_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'hot_picture_12';
  $picture_mapping->breakpoint_group = 'hot_picture_12';
  $picture_mapping->mapping = array(
    'breakpoints.hot_picture.screen-xxs' => array(
      '1x' => 'hot_picture_12_breakpoints_hot_picture_screen-xxs_1x',
      '2x' => 'hot_picture_12_breakpoints_hot_picture_screen-xxs_2x',
    ),
    'breakpoints.hot_picture.screen-xs' => array(
      '1x' => 'hot_picture_12_breakpoints_hot_picture_screen-xs_1x',
      '2x' => 'hot_picture_12_breakpoints_hot_picture_screen-xs_2x',
    ),
    'breakpoints.hot_picture.screen-sm' => array(
      '1x' => 'hot_picture_12_breakpoints_hot_picture_screen-sm_1x',
      '2x' => 'hot_picture_12_breakpoints_hot_picture_screen-sm_2x',
    ),
    'breakpoints.hot_picture.screen-md' => array(
      '1x' => 'hot_picture_12_breakpoints_hot_picture_screen-md_1x',
      '2x' => 'hot_picture_12_breakpoints_hot_picture_screen-md_2x',
    ),
    'breakpoints.hot_picture.screen-lg' => array(
      '1x' => 'hot_picture_12_breakpoints_hot_picture_screen-lg_1x',
      '2x' => 'hot_picture_12_breakpoints_hot_picture_screen-lg_2x',
    ),
  );
  $export['hot_picture_12'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'hot_picture_3';
  $picture_mapping->breakpoint_group = 'hot_picture_3';
  $picture_mapping->mapping = array(
    'breakpoints.hot_picture.screen-xxs' => array(
      '1x' => 'hot_picture_3_breakpoints_hot_picture_screen-xxs_1x',
      '2x' => 'hot_picture_3_breakpoints_hot_picture_screen-xxs_2x',
    ),
    'breakpoints.hot_picture.screen-xs' => array(
      '1x' => 'hot_picture_3_breakpoints_hot_picture_screen-xs_1x',
      '2x' => 'hot_picture_3_breakpoints_hot_picture_screen-xs_2x',
    ),
    'breakpoints.hot_picture.screen-sm' => array(
      '1x' => 'hot_picture_3_breakpoints_hot_picture_screen-sm_1x',
      '2x' => 'hot_picture_3_breakpoints_hot_picture_screen-sm_2x',
    ),
    'breakpoints.hot_picture.screen-md' => array(
      '1x' => 'hot_picture_3_breakpoints_hot_picture_screen-md_1x',
      '2x' => 'hot_picture_3_breakpoints_hot_picture_screen-md_2x',
    ),
    'breakpoints.hot_picture.screen-lg' => array(
      '1x' => 'hot_picture_3_breakpoints_hot_picture_screen-lg_1x',
      '2x' => 'hot_picture_3_breakpoints_hot_picture_screen-lg_2x',
    ),
  );
  $export['hot_picture_3'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'hot_picture_6';
  $picture_mapping->breakpoint_group = 'hot_picture_6';
  $picture_mapping->mapping = array(
    'breakpoints.hot_picture.screen-xxs' => array(
      '1x' => 'hot_picture_6_breakpoints_hot_picture_screen-xxs_1x',
      '2x' => 'hot_picture_6_breakpoints_hot_picture_screen-xxs_2x',
    ),
    'breakpoints.hot_picture.screen-xs' => array(
      '1x' => 'hot_picture_6_breakpoints_hot_picture_screen-xs_1x',
      '2x' => 'hot_picture_6_breakpoints_hot_picture_screen-xs_2x',
    ),
    'breakpoints.hot_picture.screen-sm' => array(
      '1x' => 'hot_picture_6_breakpoints_hot_picture_screen-sm_1x',
      '2x' => 'hot_picture_6_breakpoints_hot_picture_screen-sm_2x',
    ),
    'breakpoints.hot_picture.screen-md' => array(
      '1x' => 'hot_picture_6_breakpoints_hot_picture_screen-md_1x',
      '2x' => 'hot_picture_6_breakpoints_hot_picture_screen-md_2x',
    ),
    'breakpoints.hot_picture.screen-lg' => array(
      '1x' => 'hot_picture_6_breakpoints_hot_picture_screen-lg_1x',
      '2x' => 'hot_picture_6_breakpoints_hot_picture_screen-lg_2x',
    ),
  );
  $export['hot_picture_6'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'hot_picture_jumbotron';
  $picture_mapping->breakpoint_group = 'hot_picture_jumbotron';
  $picture_mapping->mapping = array(
    'breakpoints.hot_picture.screen-xs' => array(
      '1x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-xs_1x',
      '2x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-xs_2x',
    ),
    'breakpoints.hot_picture.screen-xxs' => array(
      '1x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-xxs_1x',
      '2x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-xxs_2x',
    ),
    'breakpoints.hot_picture.screen-sm' => array(
      '1x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-sm_1x',
      '2x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-sm_2x',
    ),
    'breakpoints.hot_picture.screen-md' => array(
      '1x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-md_1x',
      '2x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-md_2x',
    ),
    'breakpoints.hot_picture.screen-lg' => array(
      '1x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-lg_1x',
      '2x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-lg_2x',
    ),
    'breakpoints.hot_picture.screen-xl' => array(
      '1x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-xl_1x',
      '2x' => 'hot_picture_jumbotron_breakpoints_hot_picture_screen-xl_2x',
    ),
  );
  $export['hot_picture_jumbotron'] = $picture_mapping;

  return $export;
}
