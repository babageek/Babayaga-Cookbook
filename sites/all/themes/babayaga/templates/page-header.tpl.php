<?php $section_title = !isset($section_title) ? null : $section_title; ?>

<div id='wrapper-one'><div id='wrapper-two'>
<div id='header'><div class='limiter clearfix'>
  <?php if ($logo): ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
    </a>
  <?php endif; ?>    
  <?php if (isset($main_menu)) : ?>
    <div id='navigation'>
      <div id='navigation-container' class="clearfix">
        <?php print theme('links', array('links' => $main_menu, 'attributes' => array('class' => 'links main-menu'))) ?>
      </div>
    </div>
  <?php endif; ?>
</div></div>

<div id='page-title' class='<?php if (!$primary_local_tasks) print 'no-tabs'; ?>'><div class='limiter clearfix'>
  <div class='tabs clearfix'>
    <?php if ($primary_local_tasks): ?>
      <ul class='primary-tabs links clearfix'><?php print render($primary_local_tasks) ?></ul>
    <?php endif; ?>
  </div>

  <?php if (($section_title || $title) && !$is_front):?>
  <h1 class='page-title'>
    <span class='w-left'><span class='w-right'><?php ($section_title ? print $section_title : print $title) ?></span></span>
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

<?php if (!empty($page['featured'])): ?>
  <div id='featured'><div class='limiter clearfix inner'>
    <?php print render($page['featured']) ?>
  </div></div>
<?php endif; ?>

