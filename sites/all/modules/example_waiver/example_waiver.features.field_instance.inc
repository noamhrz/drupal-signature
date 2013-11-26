<?php
/**
 * @file
 * example_waiver.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function example_waiver_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-example_waiver-field_personal_signature'
  $field_instances['node-example_waiver-field_personal_signature'] = array(
    'bundle' => 'example_waiver',
    'default_value' => array(
      0 => array(
        'data' => 'a:2:{s:4:"json";s:2:"[]";s:8:"filepath";s:43:"public://signaturefield//13853940068752.png";}',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'signaturefield',
        'settings' => array(),
        'type' => 'signaturefield_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_personal_signature',
    'label' => 'Personal signature',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'signaturefield',
      'settings' => array(
        'color' => '000033',
        'height' => 99,
        'width' => 200,
      ),
      'type' => 'signaturefield_default',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-example_waiver-field_readonly_body'
  $field_instances['node-example_waiver-field_readonly_body'] = array(
    'bundle' => 'example_waiver',
    'default_value' => array(
      0 => array(
        'value' => 'אני החתום מטה בלה בלה בלה בלה בלה בלה',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_readonly_body',
    'label' => 'הצהרה',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Personal signature');
  t('הצהרה');

  return $field_instances;
}
