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
 *   - $content['wide']: Content in the wide column.
 */
?>
<div class="panel-hogar clearfix panel-display" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

	<?php if ($content['picture']): ?>
    <div class="header-img">
      <?php print $content['picture']; ?>
    </div>
  <?php endif; ?>

    <div class="main">

      <?php if ($content['left']): ?>
          <div class="left-column">
            <?php print $content['left']; ?>
          </div>
      <?php endif; ?>

      <?php if ($content['right']): ?>
          <div class="right-column">
            <?php print $content['right']; ?>
          </div>
      <?php endif; ?>

      <?php if ($content['wide']): ?> 
          <div class="wide-column">
            <?php print $content['wide']; ?>
          </div>
      <?php endif; ?>
      
    </div>

</div>