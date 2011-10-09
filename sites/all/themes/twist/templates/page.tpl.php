<?php print $page_header; ?>

<div id='page'><div id='main-content' class='limiter clearfix inner'>
  <?php if ($page['help']) print render($page['help']) ?>
  <div id='content' class='page-content clearfix'>
    <?php if (!empty($page['content'])) print render($page['content']) ?>
  </div>
</div></div>

<?php print $page_footer; ?>
