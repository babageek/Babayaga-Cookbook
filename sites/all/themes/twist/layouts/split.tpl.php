<?php print $page_header; ?>

<div id='page'><div id='main-content' class='limiter clearfix inner'>
  <?php if ($page['help']) print render($page['help']) ?>
  <div id='content' class='page-content clearfix position left size-50'><div class='inner'>
    <?php if (!empty($page['content'])) print render($page['content']) ?>
  </div></div>
  <div id='right' class='page-right clearfix position left size-50'><div class='inner'>
    <?php if (!empty($page['right'])) print render($page['right']) ?>
  </div></div>
</div></div>

<?php print $page_footer; ?>
