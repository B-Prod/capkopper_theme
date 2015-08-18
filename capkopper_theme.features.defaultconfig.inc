<?php
/**
 * @file
 * capkopper_theme.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function capkopper_theme_defaultconfig_features() {
  return array(
    'capkopper_theme' => array(
      'default_page_manager_handlers' => 'default_page_manager_handlers',
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_handlers().
 */
function capkopper_theme_defaultconfig_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__default';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default',
  );
  $display = new panels_display();
  $display->layout = 'radix_moscone_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'header' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'footer' => NULL,
      'default' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '448b812a-d51a-4b9b-bba1-7b9c3ae1109f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-893b655a-f26c-4f4f-bfa7-0ce1e5ec296d';
  $pane->panel = 'contentmain';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => 'page-title',
    'id' => '',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '893b655a-f26c-4f4f-bfa7-0ce1e5ec296d';
  $display->content['new-893b655a-f26c-4f4f-bfa7-0ce1e5ec296d'] = $pane;
  $display->panels['contentmain'][0] = 'new-893b655a-f26c-4f4f-bfa7-0ce1e5ec296d';
  $pane = new stdClass();
  $pane->pid = 'new-1842565e-60c0-47e9-b3b4-e6671542c665';
  $pane->panel = 'contentmain';
  $pane->type = 'pane_messages';
  $pane->subtype = 'pane_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1842565e-60c0-47e9-b3b4-e6671542c665';
  $display->content['new-1842565e-60c0-47e9-b3b4-e6671542c665'] = $pane;
  $display->panels['contentmain'][1] = 'new-1842565e-60c0-47e9-b3b4-e6671542c665';
  $pane = new stdClass();
  $pane->pid = 'new-5a1c8eb9-d303-40d4-bfbb-8c0d79c212e9';
  $pane->panel = 'contentmain';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5a1c8eb9-d303-40d4-bfbb-8c0d79c212e9';
  $display->content['new-5a1c8eb9-d303-40d4-bfbb-8c0d79c212e9'] = $pane;
  $display->panels['contentmain'][2] = 'new-5a1c8eb9-d303-40d4-bfbb-8c0d79c212e9';
  $pane = new stdClass();
  $pane->pid = 'new-435580f2-44de-4f4f-aab8-56583d35bb76';
  $pane->panel = 'header';
  $pane->type = 'pane_header';
  $pane->subtype = 'pane_header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '435580f2-44de-4f4f-aab8-56583d35bb76';
  $display->content['new-435580f2-44de-4f4f-aab8-56583d35bb76'] = $pane;
  $display->panels['header'][0] = 'new-435580f2-44de-4f4f-aab8-56583d35bb76';
  $pane = new stdClass();
  $pane->pid = 'new-6234ef40-c29f-4c5e-bb09-70d7b84f461d';
  $pane->panel = 'sidebar';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6234ef40-c29f-4c5e-bb09-70d7b84f461d';
  $display->content['new-6234ef40-c29f-4c5e-bb09-70d7b84f461d'] = $pane;
  $display->panels['sidebar'][0] = 'new-6234ef40-c29f-4c5e-bb09-70d7b84f461d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-435580f2-44de-4f4f-aab8-56583d35bb76';
  $handler->conf['display'] = $display;
  $export['site_template__default'] = $handler;

  return $export;
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function capkopper_theme_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_head_title_include_name';
  $strongarm->value = 1;
  $export['panels_everywhere_head_title_include_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_head_title_include_slogan';
  $strongarm->value = 1;
  $export['panels_everywhere_head_title_include_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_head_title_separator';
  $strongarm->value = ' | ';
  $export['panels_everywhere_head_title_separator'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_provide_sample';
  $strongarm->value = 0;
  $export['panels_everywhere_provide_sample'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = 1;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled_admin';
  $strongarm->value = 0;
  $export['panels_everywhere_site_template_enabled_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_per_theme';
  $strongarm->value = 0;
  $export['panels_everywhere_site_template_per_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pm_existing_pages_disabled_node_overview';
  $strongarm->value = FALSE;
  $export['pm_existing_pages_disabled_node_overview'] = $strongarm;

  return $export;
}
