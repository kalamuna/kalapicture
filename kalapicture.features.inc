<?php
/**
 * @file
 * kalapicture.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kalapicture_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
}
