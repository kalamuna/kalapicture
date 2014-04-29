<?php
/**
 * @file
 * kalapicture.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function kalapicture_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.kalapicture.screen-xxs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-xs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-sm';
  $breakpoints[] = 'breakpoints.kalapicture.screen-md';
  $breakpoints[] = 'breakpoints.kalapicture.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_12';
  $breakpoint_group->name = 'Picture Full (12/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_12'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.kalapicture.screen-xxs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-xs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-sm';
  $breakpoints[] = 'breakpoints.kalapicture.screen-md';
  $breakpoints[] = 'breakpoints.kalapicture.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_3';
  $breakpoint_group->name = 'Picture Quarter (3/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_3'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.kalapicture.screen-xxs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-xs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-sm';
  $breakpoints[] = 'breakpoints.kalapicture.screen-md';
  $breakpoints[] = 'breakpoints.kalapicture.screen-lg';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_6';
  $breakpoint_group->name = 'Picture Half (6/12)';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_6'] = $breakpoint_group;

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.kalapicture.screen-xs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-xxs';
  $breakpoints[] = 'breakpoints.kalapicture.screen-sm';
  $breakpoints[] = 'breakpoints.kalapicture.screen-md';
  $breakpoints[] = 'breakpoints.kalapicture.screen-lg';
  $breakpoints[] = 'breakpoints.kalapicture.screen-xl';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'kalapicture_jumbotron';
  $breakpoint_group->name = 'Jumbotron 100% width';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['kalapicture_jumbotron'] = $breakpoint_group;

  return $export;
}
