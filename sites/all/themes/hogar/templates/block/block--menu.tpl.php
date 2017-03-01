<nav id="<?php print $block_html_id; ?>" class="<?php print $classes; ?>"<?php print $attributes; ?>>

<a href="#" id="icon-menu" class="icon-menu">x</a>
<?php print render($title_prefix); ?>
<?php if ($block->subject): ?>
  <h3<?php print $title_attributes; ?> class="block-title"><?php print $block->subject ?></h3>
<?php endif;?>
  <?php print render($title_suffix); ?>

    <?php print $content ?>

</nav>
