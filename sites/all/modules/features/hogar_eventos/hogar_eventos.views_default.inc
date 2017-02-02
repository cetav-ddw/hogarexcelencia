<?php
/**
 * @file
 * hogar_eventos.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hogar_eventos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eventos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eventos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eventos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Imagen */
  $handler->display->display_options['fields']['field_eventos_img']['id'] = 'field_eventos_img';
  $handler->display->display_options['fields']['field_eventos_img']['table'] = 'field_data_field_eventos_img';
  $handler->display->display_options['fields']['field_eventos_img']['field'] = 'field_eventos_img';
  $handler->display->display_options['fields']['field_eventos_img']['label'] = '';
  $handler->display->display_options['fields']['field_eventos_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_eventos_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_eventos_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Fecha de eventos */
  $handler->display->display_options['fields']['field_fecha_de_eventos']['id'] = 'field_fecha_de_eventos';
  $handler->display->display_options['fields']['field_fecha_de_eventos']['table'] = 'field_data_field_fecha_de_eventos';
  $handler->display->display_options['fields']['field_fecha_de_eventos']['field'] = 'field_fecha_de_eventos';
  $handler->display->display_options['fields']['field_fecha_de_eventos']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'eventos' => 'eventos',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Fecha de eventos (field_fecha_de_eventos) */
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['id'] = 'field_fecha_de_eventos_value';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['table'] = 'field_data_field_fecha_de_eventos';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['field'] = 'field_fecha_de_eventos_value';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['expose']['operator_id'] = 'field_fecha_de_eventos_value_op';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['expose']['label'] = 'Fecha de eventos (field_fecha_de_eventos)';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['expose']['operator'] = 'field_fecha_de_eventos_value_op';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['expose']['identifier'] = 'field_fecha_de_eventos_value';
  $handler->display->display_options['filters']['field_fecha_de_eventos_value']['default_date'] = 'now +1 day';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['eventos'] = $view;

  return $export;
}
