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

<header class="header" role="banner">

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
        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
      </a>
    <?php endif; ?>

    <?php print render($page['header']); ?>

</header>

<?php if ($page['above_content']): ?>
        <?php print render($page['above_content']); ?>
<?php endif; ?>

<div class="main-content">
    <a id="main-content"></a>

    <?php if ($breadcrumb): ?>
        <?php print $breadcrumb; ?>
    <?php endif; ?>

    <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
    <?php print render($title_suffix); ?>

    <?php if ($page['sidebar_first']): ?>
        <div id="sidebar-first" class="">
            <?php print render($page['sidebar_first']); ?>
        </div>
    <?php endif; ?>

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

    <?php if ($page['below_content']): ?>
        <?php print render($page['below_content']); ?>
    <?php endif; ?>

</div>

<?php if ($page['extra_content']): ?>
        <?php print render($page['extra_content']); ?>
<?php endif; ?>

<?php if ($page['above_footer']): ?>
    <?php print render($page['above_footer']); ?>
<?php endif; ?>

<footer class="footer" role="contentinfo">

    <?php if ($page['footer_top']): ?>
        <?php print render($page['footer_top']); ?>
    <?php endif; ?>

    <?php if ($page['footer_bottom']): ?>
        <?php print render($page['footer_bottom']); ?>
    <?php endif; ?>

</footer>



