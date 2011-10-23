<?php
/**
 * @file
 * babayaga_recipe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function babayaga_recipe_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function babayaga_recipe_image_default_styles() {
  $styles = array();

  // Exported image style: recipe-m
  $styles['recipe-m'] = array(
    'name' => 'recipe-m',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '320',
          'height' => '194',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: recipe-portrait
  $styles['recipe-portrait'] = array(
    'name' => 'recipe-portrait',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '185',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: recipe-s
  $styles['recipe-s'] = array(
    'name' => 'recipe-s',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '128',
          'height' => '128',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function babayaga_recipe_node_info() {
  $items = array(
    'ingredient' => array(
      'name' => t('Ingredient'),
      'base' => 'node_content',
      'description' => t('Ingredient content type.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'recipe' => array(
      'name' => t('Recipe'),
      'base' => 'node_content',
      'description' => t('Recipe content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function babayaga_recipe_default_search_api_index() {
  $items = array();
  $items['recipes_index'] = entity_import('search_api_index', '{
    "name" : "Recipes Index",
    "machine_name" : "recipes_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "nid" : { "name" : "Node ID", "indexed" : 0, "type" : "integer", "boost" : "1.0" },
        "vid" : {
          "name" : "Revision ID",
          "indexed" : 0,
          "type" : "integer",
          "boost" : "1.0"
        },
        "is_new" : { "name" : "Is new", "indexed" : 0, "type" : "boolean", "boost" : "1.0" },
        "type" : {
          "name" : "Content type",
          "indexed" : 0,
          "type" : "string",
          "boost" : "1.0"
        },
        "title" : { "name" : "Title", "indexed" : 0, "type" : "text", "boost" : "1.0" },
        "language" : { "name" : "Language", "indexed" : 0, "type" : "string", "boost" : "1.0" },
        "url" : { "name" : "URL", "indexed" : 0, "type" : "uri", "boost" : "1.0" },
        "edit_url" : { "name" : "Edit URL", "indexed" : 0, "type" : "uri", "boost" : "1.0" },
        "status" : { "name" : "Status", "indexed" : 0, "type" : "integer", "boost" : "1.0" },
        "promote" : {
          "name" : "Promoted to frontpage",
          "indexed" : 0,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "sticky" : {
          "name" : "Sticky in lists",
          "indexed" : 0,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "created" : {
          "name" : "Date created",
          "indexed" : 0,
          "type" : "date",
          "boost" : "1.0"
        },
        "changed" : {
          "name" : "Date changed",
          "indexed" : 0,
          "type" : "date",
          "boost" : "1.0"
        },
        "author" : {
          "name" : "Author",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "user",
          "boost" : "1.0"
        },
        "source" : {
          "name" : "Translation source node",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "node",
          "boost" : "1.0"
        },
        "log" : {
          "name" : "Revision log message",
          "indexed" : 0,
          "type" : "text",
          "boost" : "1.0"
        },
        "revision" : {
          "name" : "Creates revision",
          "indexed" : 0,
          "type" : "boolean",
          "boost" : "1.0"
        },
        "field_ingredient_term" : {
          "name" : "Term",
          "indexed" : 0,
          "type" : "integer",
          "entity_type" : "taxonomy_term",
          "boost" : "1.0"
        },
        "field_recipe_duration" : { "name" : "Duration", "indexed" : 0, "type" : "string", "boost" : "1.0" },
        "field_recipe_ingredients_terms" : {
          "name" : "Ingredients Terms",
          "indexed" : 1,
          "type" : "list\\u003cinteger\\u003e",
          "entity_type" : "taxonomy_term",
          "boost" : "1.0"
        },
        "field_recipe_time" : {
          "name" : "Preparation time",
          "indexed" : 0,
          "type" : "integer",
          "boost" : "1.0"
        },
        "field_blog_subtitle" : { "name" : "Subtitle", "indexed" : 0, "type" : "text", "boost" : "1.0" },
        "search_api_language" : {
          "name" : "Item language",
          "indexed" : 1,
          "type" : "string",
          "boost" : "1.0"
        }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "ingredient" : "ingredient" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_recipe_ingredients_terms:parent" : "field_recipe_ingredients_terms:parent" } }
        },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : null },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_recipe_ingredients_terms" : 0, "search_api_language" : 0 } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_recipe_ingredients_terms" : 0, "search_api_language" : 0 },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_recipe_ingredients_terms" : 0, "search_api_language" : 0 },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\']",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : { "file" : "", "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc" }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function babayaga_recipe_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "Database Server",
    "machine_name" : "database_server",
    "description" : "Generic database indexing server",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : {
        "default_node_index" : {
          "search_api_language" : {
            "table" : "search_api_db_default_node_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_default_node_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_default_node_index_title",
            "type" : "text",
            "boost" : "5.0"
          },
          "status" : {
            "table" : "search_api_db_default_node_index_status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "promote" : {
            "table" : "search_api_db_default_node_index_promote",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "sticky" : {
            "table" : "search_api_db_default_node_index_sticky",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_default_node_index_created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_default_node_index_changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_default_node_index_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_default_node_index_body_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_recipe_ingredients_terms:tid" : {
            "table" : "search_api_db_default_node_index_field_recipe_ingredients_terms",
            "type" : "list\\u003cinteger\\u003e",
            "boost" : "1.0"
          },
          "field_recipe_ingredients_terms:name" : {
            "table" : "search_api_db_default_node_index_field_recipe_ingredients_ter_1",
            "type" : "list\\u003ctext\\u003e",
            "boost" : "1.0"
          },
          "field_recipe_ingredients_terms:node_count" : {
            "table" : "search_api_db_default_node_index_field_recipe_ingredients_ter_2",
            "type" : "list\\u003cinteger\\u003e",
            "boost" : "1.0"
          },
          "field_recipe_ingredients_terms:parent" : {
            "table" : "search_api_db_default_node_index_field_recipe_ingredients_ter_3",
            "type" : "list\\u003clist\\u003cinteger\\u003e\\u003e",
            "boost" : "1.0"
          }
        },
        "recipes_index" : {
          "field_recipe_ingredients_terms" : {
            "table" : "search_api_db_recipes_index_field_recipe_ingredients_terms",
            "type" : "list\\u003cinteger\\u003e",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_recipes_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
