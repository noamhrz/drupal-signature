<?php
/**
 * @file
 * example_waiver.features.inc
 */

/**
 * Implements hook_node_info().
 */
function example_waiver_node_info() {
  $items = array(
    'example_waiver' => array(
      'name' => t('Example waiver'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('First name'),
      'help' => '',
    ),
  );
  return $items;
}
