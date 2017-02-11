<?php
/**
 * @file
 * Template for the Hogar Excelencia Familiar basic page.
 *
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['picture']: Main image.
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 *   - $content['main']: Main Content.
 */
?>
<div class="panel-hogar clearfix panel-display" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

	<?php if ($content['picture']): ?>
        <?php print $content['picture']; ?>
    <?php endif; ?>

    <div class="main">

      <?php if ($content['left']): ?>
          <?php print $content['left']; ?>
      <?php endif; ?>

      <?php if ($content['right']): ?>
          <?php print $content['right']; ?>
      <?php endif; ?>

      <?php if ($content['wide']): ?>
          <?php print $content['wide']; ?>
      <?php endif; ?>
      
    </div>

</div>