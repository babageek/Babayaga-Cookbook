<?php if (!empty($pre_object)) print render($pre_object) ?>
<div class='<?php print $classes ?> clearfix' <?php print ($attributes) ?>>
  <?php if ($layout && (!empty($submitted) || !empty($links))): ?>
    <div class='position left size-20'><div class='inner-left column-wrapper'>
  <?php endif; ?>

  <?php if (!empty($date)): ?>
    <div class='<?php print $hook ?>-date clearfix'>
      <?php print $date ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($links)): ?>
    <div class='<?php print $hook ?>-links clearfix'>
      <?php print render($links) ?>
    </div>
  <?php endif; ?>

  <?php if ($layout && (!empty($submitted) || !empty($links))): ?>
    </div></div>
  <?php endif; ?>

  <?php if ($layout): ?>
    <div class='position left size-80'><div class='inner-right column-wrapper'>
  <?php endif; ?>

  <?php if (!empty($title_prefix)) print render($title_prefix); ?>

  <?php if (!empty($title) && !$page): ?>
    <h2 <?php if (!empty($title_attributes)) print $title_attributes ?>>
      <?php if (!empty($new)): ?><span class='new'><?php print $new ?></span><?php endif; ?>
      <a href="<?php print $node_url ?>"><?php print $title ?></a>
    </h2>
  <?php endif; ?>

  <?php if (!empty($title_suffix)) print render($title_suffix); ?>

  <?php if (!empty($content)): ?>
    <div class='<?php print $hook ?>-content clearfix <?php if (!empty($is_prose)) print 'prose' ?>'>
      <?php print render($content) ?>
    </div>
  <?php endif; ?>
        
  <?php if (!empty($addthis)): ?>
    <div class='<?php print $hook ?>-addthis clearfix'>
      <?php print render($addthis) ?>
    </div>
  <?php endif; ?>

  <?php if ($layout): ?>
    </div></div>
  <?php endif; ?>
</div>

<?php if (!empty($post_object)) print render($post_object) ?>
