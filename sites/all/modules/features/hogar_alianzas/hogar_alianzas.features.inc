<?php
/**
 * @file
 * hogar_alianzas.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hogar_alianzas_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hogar_alianzas_node_info() {
  $items = array(
    'alianzas' => array(
      'name' => t('Alianzas'),
      'base' => 'node_content',
      'description' => t('Use <em>Alianzas</em> para agregar una nueva alianza.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
