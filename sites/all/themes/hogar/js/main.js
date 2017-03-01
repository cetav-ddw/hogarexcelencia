jQuery(document).ready(function($) {
	$('body').prepend('<div id="opacity"></div>');
	var $mobileMenu = $('#principal-menu'); //Menu
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

	// Register when match a viewport of 320px
	enquire.register('screen and (min-width:320px) and (max-width:899px)', {
		match : function() {
			// Hide menu and show the mobile menu
			$mobileMenu.addClass('element-hidden');
			$('#dropdown-menu').removeClass('element-hidden');
			$('#icon-menu').removeClass('element-hidden');

			// Show the menu when you click the word 'menu'
			$('#dropdown-menu').click(function(){
				$mobileMenu.removeClass('element-hidden');
				// Adds a opacity
				$('#opacity').removeClass('element-hidden').addClass('opacity');
			});

			// When you click the 'X' hides the menu and the opacity
			$('#icon-menu').click(function(){
				$mobileMenu.addClass('element-hidden');
				$('.opacity').addClass('element-hidden');
			});

			// When you click outside the menu hides the menu and the opacity
			$(document).click(function(){
				$mobileMenu.addClass('element-hidden');
				$('.opacity').addClass('element-hidden');
			});
			$mobileMenu.click(function(e){
				e.stopPropagation();
			});
			$('#dropdown-menu').click(function(e){
				e.stopPropagation();
			});
		},      
		unmatch : function() {

		},    
	})

	// Register when match a viewport of 900px
	.register('screen and (min-width:900px)', {
		match : function() {
			// Show menu when we are not in mobile and hide the mobile menu
			$mobileMenu.removeClass('element-hidden');
			$('#dropdown-menu').addClass('element-hidden');
			$('#icon-menu').addClass('element-hidden');

			// Remove the event of the document
			$(document).click(function(){
				$mobileMenu.removeClass('element-hidden');
			});
		},
		unmatch : function() {
	
		},    
	});
});