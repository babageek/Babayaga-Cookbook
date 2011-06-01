<?php include 'header.tpl.php'; ?>

<div id='page'><div id='main-content' class='limiter clearfix'>

  <?php if ($page['help']) print render($page['help']) ?>

    <div id='content' class='page-content position left size-60'><div class="inner-left">
      <?php if (!empty($page['content'])) print render($page['content']) ?>
    </div></div>

    <div id='left' class='page-content position left size-40'><div class="inner-right">
      <?php if (!empty($page['right'])) print render($page['right']) ?>
    </div></div>

</div></div>

<?php include 'footer.tpl.php'; ?>
