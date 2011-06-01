

<div id='wrapper-one'><div id='wrapper-two'>
  <?php if ($logo): ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>    
<div id='header'><div class='limiter clearfix'>
  <?php if (isset($main_menu)) : ?>
    <div id='navigation'>
      <div id='navigation-container' class="clearfix"><div class="navigation-container-left clearfix"><div class="navigation-container-right clearfix">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('class' => 'links main-menu'))) ?>
      </div></div></div>
    </div>
  <?php endif; ?>
</div></div>

<div id='page-title'><div class='limiter clearfix'>
  <div class='tabs clearfix'>
    <?php if ($primary_local_tasks): ?>
      <ul class='primary-tabs links clearfix'><?php print render($primary_local_tasks) ?></ul>
    <?php endif; ?>
  </div>

  <?php if ($title && !$is_front):?>
  <h1 class='page-title'>
    <?php print $title ?>
  </h1>
  <?php endif; ?>

  <?php if ($action_links): ?>
    <ul class='action-links links clearfix'><?php print render($action_links) ?></ul>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
</div></div>

<?php if ($show_messages && $messages): ?>
<div id='console'><div class='limiter clearfix'><?php print $messages; ?></div></div>
<?php endif; ?>
