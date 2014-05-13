<?php
/**
 * @file
 * hot_picture.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function hot_picture_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.hot_picture.screen-xxs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-xs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-sm';
  $breakpoints[] = 'breakpoints.hot_picture.screen-md';
  $breakpoints[] = 'breakpoints.hot_picture.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hot_picture_12';
  $breakpoint_group->name = 'Picture Full (12/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['hot_picture_12'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.hot_picture.screen-xxs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-xs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-sm';
  $breakpoints[] = 'breakpoints.hot_picture.screen-md';
  $breakpoints[] = 'breakpoints.hot_picture.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hot_picture_3';
  $breakpoint_group->name = 'Picture Quarter (3/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['hot_picture_3'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.hot_picture.screen-xxs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-xs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-sm';
  $breakpoints[] = 'breakpoints.hot_picture.screen-md';
  $breakpoints[] = 'breakpoints.hot_picture.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hot_picture_6';
  $breakpoint_group->name = 'Picture Half (6/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['hot_picture_6'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.hot_picture.screen-xs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-xxs';
  $breakpoints[] = 'breakpoints.hot_picture.screen-sm';
  $breakpoints[] = 'breakpoints.hot_picture.screen-md';
  $breakpoints[] = 'breakpoints.hot_picture.screen-lg';
  $breakpoints[] = 'breakpoints.hot_picture.screen-xl';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hot_picture_jumbotron';
  $breakpoint_group->name = 'Jumbotron 100% width';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['hot_picture_jumbotron'] = $breakpoint_group;

  return $export;
}
