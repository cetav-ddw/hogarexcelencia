<?php

// Plugin definition
$plugin = array(
  'title' => t('Hogar Page Layout'),
  'category' => t('Columns: 2'),
  'icon' => 'hogarpage.png',
  'theme' => 'hogarpage',
  'css' => 'hogarpage.css',
  'regions' => array(
    'picture' => t('Main Image'),
    'left' => t('Left Column'),
    'right' => t('Right Column'),
    'wide' => t('Wide Column'),
  ),
);
