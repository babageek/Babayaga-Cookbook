<?php print $page_header; ?>

<div id='page'><div id='main-content' class='limiter clearfix'>
  <?php if ($page['help']) print render($page['help']) ?>
  <div id='left' class='page-left clearfix position left size-25'><div class=''>
    <?php if (!empty($page['left'])) print render($page['left']) ?>
  </div></div>    
  <div id='content' class='page-content clearfix position left size-75'><div class='inner'>
    <?php if (!empty($page['content'])) print render($page['content']) ?>
  </div></div>
</div></div>

<?php print $page_footer; ?>
