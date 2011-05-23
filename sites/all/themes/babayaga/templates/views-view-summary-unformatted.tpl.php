<?php
/**
 * @file views-view-summary-unformatted.tpl.php
 * Default simple view template to display a group of summary lines
 *
 * This wraps items in a span if set to inline, or a div if not.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <div class="views-summary views-summary-unformatted">
    <a href="<?php print $row->url; ?>" class="clearfix <?php print !empty($row_classes[$id]) ? $row_classes[$id] : ''; ?>">
      <?php if (!empty($options['count'])): ?>
        <span class="count"><?php print $row->count; ?></span>
      <?php endif; ?>
      <span class="link"><?php print $row->link; ?></span>
    </a>
  </div>
<?php endforeach; ?>
