<?php
/**
 * @file
 * babayaga_site.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function babayaga_site_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_compression_type';
  $strongarm->value = 'min';
  $export['colorbox_compression_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_custom_settings_activate';
  $strongarm->value = '1';
  $export['colorbox_custom_settings_activate'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_image_style';
  $strongarm->value = 'blog-l';
  $export['colorbox_image_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_imagefield_gallery';
  $strongarm->value = '1';
  $export['colorbox_imagefield_gallery'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 1;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_insert_gallery';
  $strongarm->value = '0';
  $export['colorbox_insert_gallery'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 0;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_login';
  $strongarm->value = 0;
  $export['colorbox_login'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_login_form';
  $strongarm->value = 'user_login';
  $export['colorbox_login_form'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_login_links';
  $strongarm->value = '0';
  $export['colorbox_login_links'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxheight';
  $strongarm->value = '100%';
  $export['colorbox_maxheight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_maxwidth';
  $strongarm->value = '100%';
  $export['colorbox_maxwidth'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_opacity';
  $strongarm->value = '0.50';
  $export['colorbox_opacity'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_overlayclose';
  $strongarm->value = 1;
  $export['colorbox_overlayclose'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_pages';
  $strongarm->value = 'admin*
img_assist*
imce*
node/add/*
node/*/edit';
  $export['colorbox_pages'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_path';
  $strongarm->value = 'sites/all/libraries/colorbox';
  $export['colorbox_path'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshow';
  $strongarm->value = '0';
  $export['colorbox_slideshow'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowauto';
  $strongarm->value = 1;
  $export['colorbox_slideshowauto'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_slideshowspeed';
  $strongarm->value = '2500';
  $export['colorbox_slideshowspeed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_style';
  $strongarm->value = 'default';
  $export['colorbox_style'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_close';
  $strongarm->value = 'Close';
  $export['colorbox_text_close'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_current';
  $strongarm->value = '{current} of {total}';
  $export['colorbox_text_current'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_next';
  $strongarm->value = 'Next »';
  $export['colorbox_text_next'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_previous';
  $strongarm->value = '« Prev';
  $export['colorbox_text_previous'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_start';
  $strongarm->value = 'start slideshow';
  $export['colorbox_text_start'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_text_stop';
  $strongarm->value = 'stop slideshow';
  $export['colorbox_text_stop'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_title_trim';
  $strongarm->value = '1';
  $export['colorbox_title_trim'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_title_trim_length';
  $strongarm->value = '100';
  $export['colorbox_title_trim_length'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_speed';
  $strongarm->value = '350';
  $export['colorbox_transition_speed'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_transition_type';
  $strongarm->value = 'elastic';
  $export['colorbox_transition_type'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_domain';
  $strongarm->value = 'midnightspoon';
  $export['disqus_domain'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_location';
  $strongarm->value = 'content_area';
  $export['disqus_location'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_nodetypes';
  $strongarm->value = array(
    'blog' => 'blog',
    'ingredient' => 0,
    'recipe' => 0,
    'book' => 0,
  );
  $export['disqus_nodetypes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_userapikey';
  $strongarm->value = 'v16iAucsS2PToFm9Soi3vA1gI7fZNs6lfPOqhJTH0DWOw6OYxvWrFKKE7E1OjhBR';
  $export['disqus_userapikey'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'disqus_weight';
  $strongarm->value = '50';
  $export['disqus_weight'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'google_fonts_enabled_fonts';
  $strongarm->value = array(
    'Cardo' => 'Cardo',
    'Allan' => 0,
    'Allerta' => 0,
    'Allerta Stencil' => 0,
    'Anonymous Pro' => 0,
    'Anonymous Pro italic' => 0,
    'Anonymous Pro bold' => 0,
    'Anonymous Pro bold italic' => 0,
    'Arimo' => 0,
    'Arimo italic' => 0,
    'Arimo bold' => 0,
    'Arimo bold italic' => 0,
    'Arvo' => 0,
    'Arvo italic' => 0,
    'Arvo bold' => 0,
    'Arvo bold italic' => 0,
    'Bentham' => 0,
    'Buda' => 0,
    'Cabin' => 0,
    'Calligraffitti' => 0,
    'Cantarell' => 0,
    'Cantarell italic' => 0,
    'Cantarell bold' => 0,
    'Cantarell bold italic' => 0,
    'Cherry Cream Soda' => 0,
    'Chewy' => 0,
    'Coda' => 0,
    'Coming+Soon' => 0,
    'Copse' => 0,
    'Corben' => 0,
    'Cousine' => 0,
    'Cousine italic' => 0,
    'Cousine bold' => 0,
    'Cousine bold italic' => 0,
    'Covered By Your Grace' => 0,
    'Crafty Girls' => 0,
    'Crimson Text' => 0,
    'Crushed' => 0,
    'Cuprum' => 0,
    'Dancing Script' => 0,
    'Droid Sans' => 0,
    'Droid Sans bold' => 0,
    'Droid Sans Mono' => 0,
    'Droid Serif' => 0,
    'Droid Serif italic' => 0,
    'Droid Serif bold' => 0,
    'Droid Serif bold italic' => 0,
    'Fontdiner Swanky' => 0,
    'Geo' => 0,
    'Gruppo' => 0,
    'Homemade Apple' => 0,
    'IM Fell DW Pica' => 0,
    'IM Fell DW Pica italic' => 0,
    'IM Fell DW Pica SC' => 0,
    'IM Fell Double Pica' => 0,
    'IM Fell Double Pica italic' => 0,
    'IM Fell Double Pica SC' => 0,
    'IM Fell English' => 0,
    'IM Fell English italic' => 0,
    'IM Fell English SC' => 0,
    'IM Fell French Canon' => 0,
    'IM Fell French Canon italic' => 0,
    'IM Fell French Canon SC' => 0,
    'IM Fell Great Primer' => 0,
    'IM Fell Great Primer italic' => 0,
    'IM Fell Great Primer SC' => 0,
    'Inconsolata' => 0,
    'Irish Growler' => 0,
    'Josefin Sans 100' => 0,
    'Josefin Sans 100 italic' => 0,
    'Josefin Sans 300' => 0,
    'Josefin Sans 300 italic' => 0,
    'Josefin Sans 400' => 0,
    'Josefin Sans 400 italic' => 0,
    'Josefin Sans 600' => 0,
    'Josefin Sans 600 italic' => 0,
    'Josefin Sans 700' => 0,
    'Josefin Sans 700 italic' => 0,
    'Josefin Slab 100' => 0,
    'Josefin Slab 100 italic' => 0,
    'Josefin Slab 300' => 0,
    'Josefin Slab 300 italic' => 0,
    'Josefin Slab 400' => 0,
    'Josefin Slab 400 italic' => 0,
    'Josefin Slab 600' => 0,
    'Josefin Slab 600 italic' => 0,
    'Josefin Slab 700' => 0,
    'Josefin Slab 700 italic' => 0,
    'Just Another Hand' => 0,
    'Just Me Again Down Here' => 0,
    'Kenia' => 0,
    'Kranky' => 0,
    'Kreon' => 0,
    'Kreon light' => 0,
    'Kreon bold' => 0,
    'Kristi' => 0,
    'Lato 100' => 0,
    'Lato 100 italic' => 0,
    'Lato light' => 0,
    'Lato light italic' => 0,
    'Lato regular' => 0,
    'Lato regular italic' => 0,
    'Lato bold' => 0,
    'Lato bold italic' => 0,
    'Lato 900' => 0,
    'Lato 900 italic' => 0,
    'Lekton' => 0,
    'Lekton italic' => 0,
    'Lekton bold' => 0,
    'Lobster' => 0,
    'Luckiest Guy' => 0,
    'Maiden Orange' => 0,
    'Meddon' => 0,
    'Merriweather' => 0,
    'Molengo' => 0,
    'Mountains of Christmas' => 0,
    'Neucha' => 0,
    'Neuton' => 0,
    'Nobile' => 0,
    'Nobile italic' => 0,
    'Nobile bold' => 0,
    'Nobile bold italic' => 0,
    'OFL Sorts Mill Goudy TT' => 0,
    'OFL Sorts Mill Goudy TT italic' => 0,
    'Old Standard TT' => 0,
    'Old Standard TT italic' => 0,
    'Old Standard TT bold' => 0,
    'Orbitron' => 0,
    'Orbitron 500' => 0,
    'Orbitron bold' => 0,
    'Orbitron 900' => 0,
    'PT Sans' => 0,
    'PT Sans italic' => 0,
    'PT Sans bold' => 0,
    'PT Sans bold italic' => 0,
    'PT Sans Caption' => 0,
    'PT Sans Caption bold' => 0,
    'PT Sans Narrow' => 0,
    'PT Sans Narrow bold' => 0,
    'Permanent Marker' => 0,
    'Philosopher' => 0,
    'Puritan' => 0,
    'Puritan italic' => 0,
    'Puritan bold' => 0,
    'Puritan bold italic' => 0,
    'Radley' => 0,
    'Raleway' => 0,
    'Reenie Beanie' => 0,
    'Rock Salt' => 0,
    'Schoolbell' => 0,
    'Slackey' => 0,
    'Sniglet' => 0,
    'Sunshiney' => 0,
    'Syncopate' => 0,
    'Tangerine' => 0,
    'Tangerine bold' => 0,
    'Tinos' => 0,
    'Tinos italic' => 0,
    'Tinos bold' => 0,
    'Tinos bold italic' => 0,
    'Ubuntu' => 0,
    'Ubuntu italic' => 0,
    'Ubuntu bold' => 0,
    'Ubuntu bold italic' => 0,
    'UnifrakturCook' => 0,
    'UnifrakturMaguntia' => 0,
    'Unkempt' => 0,
    'Vibur' => 0,
    'Vollkorn' => 0,
    'Vollkorn italic' => 0,
    'Vollkorn bold' => 0,
    'Vollkorn bold italic' => 0,
    'Walter Turncoat' => 0,
    'Yanone Kaffeesatz 200' => 0,
    'Yanone Kaffeesatz 300' => 0,
    'Yanone Kaffeesatz 400' => 0,
    'Yanone Kaffeesatz 700' => 0,
  );
  $export['google_fonts_enabled_fonts'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'info@local';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Midnight Spoon';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'babayaga';
  $export['theme_default'] = $strongarm;

  return $export;
}
