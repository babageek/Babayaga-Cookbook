<?php if (!empty($pre_object)) print render($pre_object) ?>
<div class='<?php print $classes ?> clearfix' <?php print ($attributes) ?>>

  <div class="headings">
    <?php if (!empty($date)): ?>
      <span class='<?php print $hook ?>-date clearfix'><?php print $date ?></span>
    <?php endif; ?>

    <?php if (!empty($links)): ?>
      <span class='<?php print $hook ?>-links clearfix'><?php print render($links) ?></span>
    <?php endif; ?>
  </div>
  
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

</div>

<?php if (!empty($post_object)) print render($post_object) ?>

