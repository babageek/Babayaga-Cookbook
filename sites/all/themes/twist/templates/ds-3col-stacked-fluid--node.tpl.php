<?php

/**
 * @file
 * Display Suite fluid 3 column 25/50/25 stacked template.
 */
?>
<?php 
  // Add sidebar classes so that we can apply the correct width to the center region in css.
  if (($left && !$right) || ($right && !$left)) $classes .= ' group-one-sidebar';
  if ($left && $right) $classes .= ' group-two-sidebars';
  if ($left) $classes .= ' group-sidebar-left';
  if ($right) $classes .= ' group-sidebar-right';
?>
<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($header): ?>
    <div class="group-header<?php print $header_classes; ?>"><div class="inner">
      <?php print $header; ?>
    </div></div>
  <?php endif; ?>

  <?php if ($left): ?>
    <div class="group-left<?php print $left_classes; ?>"><div class="inner">
      <?php print $left; ?>
    </div></div>
  <?php endif; ?>

  <?php if ($middle): ?>
    <div class="group-middle<?php print $middle_classes; ?>"><div class="inner">
      <?php print $middle; ?>
    </div></div>
  <?php endif; ?>

  <?php if ($right): ?>
    <div class="group-right<?php print $right_classes; ?>"><div class="inner">
      <?php print $right; ?>
    </div></div>
  <?php endif; ?>
  
  <?php if ($footer): ?>
    <div class="group-footer<?php print $footer_classes; ?>"><div class="inner">
      <?php print $footer; ?>
    </div></div>
  <?php endif; ?>
</div>
