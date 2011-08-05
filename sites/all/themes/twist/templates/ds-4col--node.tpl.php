<?php

/**
 * @file
 * Display Suite 4 column template.
 */
?>
<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($first): ?>
    <div class="group-first<?php print $first_classes; ?>"><div class="inner">
      <?php print $first; ?>
    </div></div>
  <?php endif; ?>

  <?php if ($second): ?>
    <div class="group-second<?php print $second_classes; ?>"><div class="inner">
      <?php print $second; ?>
    </div></div>
  <?php endif; ?>

  <?php if ($third): ?>
    <div class="group-third<?php print $third_classes; ?>"><div class="inner">
      <?php print $third; ?>
    </div></div>
  <?php endif; ?>

  <?php if ($fourth): ?>
    <div class="group-fourth<?php print $fourth_classes; ?>"><div class="inner">
      <?php print $fourth; ?>
    </div></div>
  <?php endif; ?>
</div>