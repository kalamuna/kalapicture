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

  // Exported image style: kalapicture_3.
  $styles['kalapicture_3'] = array(
    'name' => 'kalapicture_3',
    'label' => 'Picture Quarter',
    'effects' => array(),
  );

  // Exported image style: kalapicture_6.
  $styles['kalapicture_6'] = array(
    'name' => 'kalapicture_6',
    'label' => 'Picture Half',
    'effects' => array(),
  );

  return $styles;
}
