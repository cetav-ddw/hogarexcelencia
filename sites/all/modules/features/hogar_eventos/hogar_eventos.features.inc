<?php
/**
 * @file
 * hogar_eventos.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hogar_eventos_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hogar_eventos_node_info() {
  $items = array(
    'eventos' => array(
      'name' => t('Eventos'),
      'base' => 'node_content',
      'description' => t('Use <em>Eventos</em> para agregar un nuevo evento.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
