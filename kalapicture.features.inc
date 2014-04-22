<?php
/**
 * @file
 * kalapicture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kalapicture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function kalapicture_image_default_styles() {
  $styles = array();

  // Exported image style: kalapicture_12.
  $styles['kalapicture_12'] = array(
    'name' => 'kalapicture_12',
    'label' => 'Picture Full',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-lg_1x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_1x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-lg_2x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_2x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-md_1x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-md_1x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-md_2x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-md_2x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-sm_1x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_1x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-sm_2x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_2x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-xs_1x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_1x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_12_breakpoints_kalapicture_screen-xs_2x'] = array(
    'name' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_2x',
    'label' => 'kalapicture_12_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_12_breakpoints_module_navbar_wide_1x.
  $styles['kalapicture_12_breakpoints_module_navbar_wide_1x'] = array(
    'name' => 'kalapicture_12_breakpoints_module_navbar_wide_1x',
    'label' => 'kalapicture_12_breakpoints_module_navbar_wide_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3.
  $styles['kalapicture_3'] = array(
    'name' => 'kalapicture_3',
    'label' => 'Picture Quarter',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-lg_1x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_1x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-lg_2x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_2x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-md_1x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-md_1x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-md_2x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-md_2x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-sm_1x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_1x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-sm_2x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_2x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-xs_1x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_1x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_3_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_3_breakpoints_kalapicture_screen-xs_2x'] = array(
    'name' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_2x',
    'label' => 'kalapicture_3_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6.
  $styles['kalapicture_6'] = array(
    'name' => 'kalapicture_6',
    'label' => 'Picture Half',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-lg_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-lg_1x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-lg_1x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-lg_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-lg_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-lg_2x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-lg_2x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-lg_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-md_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-md_1x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-md_1x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-md_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-md_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-md_2x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-md_2x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-md_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-sm_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-sm_1x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-sm_1x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-sm_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-sm_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-sm_2x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-sm_2x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-sm_2x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-xs_1x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-xs_1x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-xs_1x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-xs_1x',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6_breakpoints_kalapicture_screen-xs_2x.
  $styles['kalapicture_6_breakpoints_kalapicture_screen-xs_2x'] = array(
    'name' => 'kalapicture_6_breakpoints_kalapicture_screen-xs_2x',
    'label' => 'kalapicture_6_breakpoints_kalapicture_screen-xs_2x',
    'effects' => array(),
  );

  return $styles;
}
