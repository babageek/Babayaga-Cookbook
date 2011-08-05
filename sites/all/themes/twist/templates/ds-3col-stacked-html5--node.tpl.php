<?php

/**
 * @file
 * Display Suite 3 column stacked template HTML 5 version.
 */
?>
<div class="<?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($header): ?>
    <header class="group-header<?php print $header_classes; ?>"><div class="inner">
      <?php print $header; ?>
    </div></header>
  <?php endif; ?>

  <?php if ($left): ?>
    <aside class="group-left<?php print $left_classes; ?>"><div class="inner">
      <?php print $left; ?>
    </div></aside>
  <?php endif; ?>

  <?php if ($middle): ?>
    <section class="group-middle<?php print $middle_classes; ?>"><div class="inner">
      <?php print $middle; ?>
    </div></section>
  <?php endif; ?>

  <?php if ($right): ?>
    <aside class="group-right<?php print $right_classes; ?>"><div class="inner">
      <?php print $right; ?>
    </div></aside>
  <?php endif; ?>

  <?php if ($footer): ?>
    <footer class="group-footer<?php print $footer_classes; ?>"><div class="inner">
      <?php print $footer; ?>
    </div></footer>
  <?php endif; ?>
</div>