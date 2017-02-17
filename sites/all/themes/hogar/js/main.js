jQuery(document).ready(function($) {

	// Call to action animations
	var $ctaContent = $('#cta-hidden');
	$ctaContent.addClass('element-hidden');
	var $ctaButton = $('#cta-button');

	$ctaButton.click(function() {
		$ctaContent.slideToggle( 'slow' );
	});

	$ctaButton.mouseenter(function() {
		$ctaButton.css('top', '0');
		$ctaButton.stop().animate ({
		    top: '+=10',
		}, 200, 'linear')
	});

	$ctaButton.mouseleave(function() {
		$ctaButton.stop().animate ({
		    top: '-=10',
		}, 200, 'linear', function() {$ctaButton.css('top', '0');});
	});

	// Menu js animations
	var principalMenu = $('#principal-menu');
	var menu = $('.menu');

	menu.addClass('element-hidden');
	principalMenu.prepend('<div class="dropdown-menu"><span>Menú</span><img src="sites/all/themes/hogar/images/icons/menu.png"></div>');
	principalMenu.addClass('clearfix');

	//Hidde menu
	$('.dropdown-menu').click(function() {
		if (menu.hasClass('element-hidden')) {
			menu.removeClass('element-hidden');
		} else{
			menu.addClass('element-hidden');
		}

	});
});
