<?php print $page_header; ?>

<div id='page'><div id='main-content' class='limiter clearfix'>
  <?php if ($page['help']) print render($page['help']) ?>
    <div id='left' class='page-left clearfix position left <?php print (isset($region_left) && !empty($region_left) ? $region_left : 'size-35') ?>'><div class='inner'>
    <?php if (!empty($page['left'])) print render($page['left']) ?>
  </div></div>    
  <div id='content' class='page-content clearfix position left <?php print (isset($region_content) && !empty($region_content) ? $region_content : 'size-65') ?>'><div class='inner'>
    <?php if (!empty($page['content'])) print render($page['content']) ?>
  </div></div>
</div></div>

<?php print $page_footer; ?>
