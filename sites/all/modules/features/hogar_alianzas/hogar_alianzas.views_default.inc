<?php
/**
 * @file
 * hogar_alianzas.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hogar_alianzas_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'alianzas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Alianzas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_alianzas_logo']['id'] = 'field_alianzas_logo';
  $handler->display->display_options['fields']['field_alianzas_logo']['table'] = 'field_data_field_alianzas_logo';
  $handler->display->display_options['fields']['field_alianzas_logo']['field'] = 'field_alianzas_logo';
  $handler->display->display_options['fields']['field_alianzas_logo']['label'] = '';
  $handler->display->display_options['fields']['field_alianzas_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alianzas_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_alianzas_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'alianzas' => 'alianzas',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['alianzas'] = $view;

  return $export;
}
