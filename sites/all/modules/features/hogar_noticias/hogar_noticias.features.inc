<?php
/**
 * @file
 * hogar_noticias.features.inc
 */

/**
 * Implements hook_views_api().
 */
function hogar_noticias_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hogar_noticias_node_info() {
  $items = array(
    'noticias' => array(
      'name' => t('Noticias'),
      'base' => 'node_content',
      'description' => t('Use <em>Noticias</em> para agregar una nueva noticia.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
