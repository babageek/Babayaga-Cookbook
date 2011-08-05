<?php

/**
 * @file
 * Display Suite 3 column equal width template.
 */
?>
<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
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
</div>