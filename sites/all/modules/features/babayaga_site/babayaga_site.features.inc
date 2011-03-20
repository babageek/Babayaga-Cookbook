<?php
/**
 * @file
 * babayaga_site.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function babayaga_site_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}