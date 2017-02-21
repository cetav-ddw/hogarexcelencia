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
});