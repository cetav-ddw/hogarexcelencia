<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 */
?>

<header class="header clearfix" role="banner">

    <?php if ($messages): ?>
        <div class="messages-wrapper">
            <div class="messages-content">
                <?php print $messages; ?>
            </div>
            <a href="#" id="messages-toggle"><?php print t('Close');?></a>
        </div>
    <?php endif; ?>

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="logo"/>
      </a>
    <?php endif; ?>
    <a href="#" id="dropdown-menu" class="dropdown-menu">Menú</a>

    <?php print render($page['header']); ?>

</header>

<?php if ($page['above_content']): ?>
        <?php print render($page['above_content']); ?>
<?php endif; ?>

<div class="main-content">
    <a id="main-content"></a>

    <?php if ($tabs): ?>
        <?php print render($tabs); ?>
    <?php endif; ?>

    <?php if ($action_links): ?>
        <ul class="action-links">
            <?php print render($action_links); ?>
        </ul>
    <?php endif; ?>

    <?php if ($page['content']): ?>
        <?php print render($page['content']); ?>
    <?php endif; ?>

</div>

<?php if ($page['below_content']): ?>
    <div class="below-content">
        <?php print render($page['below_content']); ?>
    </div>
<?php endif; ?>

<?php if ($page['cta']): ?>
    <?php print render($page['cta']); ?>
<?php endif; ?>

<footer class="footer" role="contentinfo">

    <?php if ($page['footer_top']): ?>
        <?php print render($page['footer_top']); ?>
    <?php endif; ?>

    <?php if ($page['footer_bottom']): ?>
        <?php print render($page['footer_bottom']); ?>
    <?php endif; ?>

</footer>