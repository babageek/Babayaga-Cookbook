(function($) {

Drupal.behaviors.recipe = {};
Drupal.behaviors.recipe.attach = function(context) {

  var h = 0;
  var offset = 0;
  $('.view-recipes table .node').each(function (i, e) {
    if ($(e).find('img').height() == 0) offset = 125;
    if ($(e).height() > h) h = $(e).height();
  });
  $('.view-recipes tr').find('.node').height(h + offset);
    
  var h = 0;
  var offset = 0;
  $('.view-recipes-search table .node').each(function (i, e) {
    if ($(e).find('img').height() == 0) offset = 140;
    if ($(e).height() > h) h = $(e).height();
  });
  $('.view-recipes-search tr').find('.node').height(h + offset);
  
};

})(jQuery);