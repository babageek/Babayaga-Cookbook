<?php
/**
 * @file
 * feature_pages.features.field.inc
 */

/**
 * Implementation of hook_field_default_fields().
 */
function feature_pages_field_default_fields() {
  $fields = array();

  // Exported field: 'node-page-body'
  $fields['node-page-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => -4,
      ),
    ),
  );

  // Exported field: 'node-page-field_page_attachments'
  $fields['node-page-field_page_attachments'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_page_attachments',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '1',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'page',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_table',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_page_attachments',
      'label' => 'Attachments',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'jpg jpeg gif png txt doc xls pdf ppt pps odt ods odp',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'insert' => 1,
          'insert_class' => '',
          'insert_default' => 'image_medium',
          'insert_styles' => array(
            'auto' => 'auto',
            'colorbox__event-m' => 0,
            'colorbox__event-s' => 0,
            'colorbox__event-spotlight' => 0,
            'colorbox__large' => 0,
            'colorbox__medium' => 0,
            'colorbox__news-m' => 0,
            'colorbox__news-s' => 0,
            'colorbox__organisation-logo-m' => 0,
            'colorbox__organisation-logo-s' => 0,
            'colorbox__square_thumbnail' => 0,
            'colorbox__thumbnail' => 0,
            'colorbox__video-m' => 0,
            'colorbox__video-s' => 0,
            'image' => 0,
            'image_event-m' => 0,
            'image_event-s' => 0,
            'image_event-spotlight' => 0,
            'image_large' => 'image_large',
            'image_medium' => 'image_medium',
            'image_news-m' => 0,
            'image_news-s' => 0,
            'image_organisation-logo-m' => 0,
            'image_organisation-logo-s' => 0,
            'image_square_thumbnail' => 'image_square_thumbnail',
            'image_thumbnail' => 'image_thumbnail',
            'image_video-m' => 0,
            'image_video-s' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '-3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachments');
  t('Body');

  return $fields;
}
