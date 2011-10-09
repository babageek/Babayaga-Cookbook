(function($) {
Drupal.behaviors.twist = {};
Drupal.behaviors.twist.mouse_on = false;
Drupal.behaviors.twist.attach = function (context) {

  var closeToggle = function() {
    $('div.toggle-blocks div.block:not(.dont-toggle) .block-title').removeClass('toggle-active');
    $('div.toggle-blocks div.block:not(.dont-toggle) div.block-content').hide();
  }
  
  $('body').click(function() { if (!Drupal.behaviors.twist.mouse_on) { closeToggle(); }});
  $('body').keyup(function(e) { if (e.keyCode == 27) closeToggle(); });

  $('div.toggle-blocks').find('div.block:not(.dont-toggle)').hover(
    function() { Drupal.behaviors.twist.mouse_on = true; },
    function() { Drupal.behaviors.twist.mouse_on = false; }
  );

  // Togglable blocks
  $('div.toggle-blocks:not(.processed)')
    .addClass('processed')
    .find('div.block:not(.dont-toggle)').each(function() {
      // Click handler.
      $('.block-title', this).click(function() {
        var title = $(this);
        if (!title.is('.toggle-active')) {
          $('div.toggle-blocks .block-title').removeClass('toggle-active');
          $('div.toggle-blocks div.block:not(.dont-toggle) div.block-content').hide();
          title.addClass('toggle-active').siblings('div.block-content').show();
        }
        else {
          title.removeClass('toggle-active').siblings('div.block-content').hide();
        }
        return false;
      });

      // Focus handler for equivalent keyboard control.
      $('.block-title > a.toggle', this).focus(function() {
        var title = $(this).parent();
        $('div.toggle-blocks .block-title').removeClass('toggle-active');
        $('div.toggle-blocks div.block:not(.dont-toggle) div.block-content').hide();
        title.addClass('toggle-active').siblings('div.block-content').show();
        return false;
      });
    });
    // Attach handler to all elements that might receive focus. If they are not
    // in an actively toggled block we can assume that focus has "left" that
    // block and hide it.
    $('body:not(.twist-processed)').each(function() {
        $(this).addClass('.twist-processed');
        $('a, input, textarea, select', this).focus(function() {
            if (!$(this).parents('.block:has(.toggle-active)').size()) {
                $('.toggle-active').removeClass('toggle-active').siblings('div.block-content').hide();
            }
        });
    });
};
})(jQuery);
