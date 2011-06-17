<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function wiki_frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels" && $api == "layouts") {
    return array("version" => 1);
  }
}
