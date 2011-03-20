<?php include 'header.tpl.php'; ?>

<div id='page'><div id='main-content' class='limiter clearfix'>

  <?php if ($page['help']) print render($page['help']) ?>

  <div id='content' class='page-content position left size-60'>
    <?php if (!empty($page['content'])) print render($page['content']) ?>
  </div>

  <div id='content' class='page-content position left size-40'>
    <?php if (!empty($page['right'])) print render($page['right']) ?>
  </div>

</div></div>

<?php include 'footer.tpl.php'; ?>
