<?php
/**
 * @file
 * babayaga_recipe.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function babayaga_recipe_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'recipes';
  $view->description = 'Display recipes.';
  $view->tag = 'Babayaga';
  $view->base_table = 'node';
  $view->human_name = 'Recipes';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Other Recipes';
  $handler->display->display_options['css_class'] = 'recipes';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_recipe_pictures';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_recipe_pictures';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'recipe-m',
    'image_link' => 'content',
  );
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_recipe_subtitle';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_recipe_subtitle';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  /* Field: Content: Duration */
  $handler->display->display_options['fields']['entity_id_2']['id'] = 'entity_id_2';
  $handler->display->display_options['fields']['entity_id_2']['table'] = 'field_data_field_recipe_duration';
  $handler->display->display_options['fields']['entity_id_2']['field'] = 'field_recipe_duration';
  $handler->display->display_options['fields']['entity_id_2']['label'] = '';
  $handler->display->display_options['fields']['entity_id_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_2']['empty_zero'] = 0;
  /* Field: Content: Preparation time */
  $handler->display->display_options['fields']['entity_id_3']['id'] = 'entity_id_3';
  $handler->display->display_options['fields']['entity_id_3']['table'] = 'field_data_field_recipe_time';
  $handler->display->display_options['fields']['entity_id_3']['field'] = 'field_recipe_time';
  $handler->display->display_options['fields']['entity_id_3']['label'] = '';
  $handler->display->display_options['fields']['entity_id_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id_3']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';

  /* Display: Latest Recipe */
  $handler = $view->new_display('block', 'Latest Recipe', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest Recipes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 1;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_recipe_pictures';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_recipe_pictures';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_class'] = 'picture';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'recipe-portrait',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id']['group_rows'] = 1;
  $handler->display->display_options['fields']['entity_id']['delta_limit'] = '1';
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['entity_id']['separator'] = '';
  $handler->display->display_options['fields']['entity_id']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_recipe_subtitle';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_recipe_subtitle';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'subtitle';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;

  /* Display: Ingredients */
  $handler = $view->new_display('block', 'Ingredients', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ingredients';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_recipe_ingredients']['id'] = 'field_recipe_ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['table'] = 'field_data_field_recipe_ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['field'] = 'field_recipe_ingredients';
  $handler->display->display_options['fields']['field_recipe_ingredients']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_ingredients']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_recipe_ingredients']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_recipe_ingredients']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Cookware */
  $handler = $view->new_display('block', 'Cookware', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Cookware';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cookware */
  $handler->display->display_options['fields']['field_recipe_cookware']['id'] = 'field_recipe_cookware';
  $handler->display->display_options['fields']['field_recipe_cookware']['table'] = 'field_data_field_recipe_cookware';
  $handler->display->display_options['fields']['field_recipe_cookware']['field'] = 'field_recipe_cookware';
  $handler->display->display_options['fields']['field_recipe_cookware']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_cookware']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_recipe_cookware']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_recipe_cookware']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Picture */
  $handler = $view->new_display('block', 'Picture', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['field_recipe_pictures']['id'] = 'field_recipe_pictures';
  $handler->display->display_options['fields']['field_recipe_pictures']['table'] = 'field_data_field_recipe_pictures';
  $handler->display->display_options['fields']['field_recipe_pictures']['field'] = 'field_recipe_pictures';
  $handler->display->display_options['fields']['field_recipe_pictures']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_pictures']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_recipe_pictures']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_recipe_pictures']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_recipe_pictures']['settings'] = array(
    'colorbox_node_style' => 'recipe-portrait',
    'colorbox_image_style' => 'recipe-portrait',
  );
  $handler->display->display_options['fields']['field_recipe_pictures']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_recipe_pictures']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_recipe_pictures']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_recipe_pictures']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_recipe_pictures']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Other Recipes */
  $handler = $view->new_display('block', 'Other Recipes', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other Recipes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'badge_small';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Pictures */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'field_data_field_recipe_pictures';
  $handler->display->display_options['fields']['entity_id']['field'] = 'field_recipe_pictures';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id']['element_class'] = 'picture';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['entity_id']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['entity_id']['settings'] = array(
    'image_style' => 'recipe-portrait',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['entity_id']['group_rows'] = 1;
  $handler->display->display_options['fields']['entity_id']['delta_limit'] = '1';
  $handler->display->display_options['fields']['entity_id']['delta_offset'] = '0';
  $handler->display->display_options['fields']['entity_id']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['entity_id']['separator'] = '';
  $handler->display->display_options['fields']['entity_id']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['entity_id_1']['id'] = 'entity_id_1';
  $handler->display->display_options['fields']['entity_id_1']['table'] = 'field_data_field_recipe_subtitle';
  $handler->display->display_options['fields']['entity_id_1']['field'] = 'field_recipe_subtitle';
  $handler->display->display_options['fields']['entity_id_1']['label'] = '';
  $handler->display->display_options['fields']['entity_id_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['element_class'] = 'subtitle';
  $handler->display->display_options['fields']['entity_id_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['entity_id_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['entity_id_1']['empty_zero'] = 0;
  $export['recipes'] = $view;

  $view = new view;
  $view->name = 'recipes_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_recipes_index';
  $view->human_name = 'Recipes Search';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recipes Search';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'badge_medium';
  /* Field: Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_recipes_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'recipes';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recipes';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['recipes_search'] = $view;

  return $export;
}
