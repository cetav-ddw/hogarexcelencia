jQuery(document).ready(function($) {
    
    (function(window){
        // Variables
        var $mobileMenu = $('#principal-menu');
        var $menu = $('#dropdown-menu');
        var $ctaContent = $('.cta-content');
        var $ctaButton = $('#cta-button');

        // Functions
        var ready = function() {
            $('body').prepend('<div id="opacity"></div>');
            $ctaContent.hide();
        }

        var ctaAnimation = function () {
            // Call to action animations

            $ctaButton.click(function() {
                $ctaContent.slideToggle( 'slow' );
                if ($ctaButton.hasClass('fix-padding')) {
                    $ctaButton.removeClass('fix-padding')
                } else {$ctaButton.addClass('fix-padding')}
            });
        }

        var enquireModule = function() {
            var $opacity = $('#opacity');
            var $close = $('#close-menu');
                       
            // Register when match a viewport of 320px
            enquire.register('screen and (min-width:320px) and (max-width:899px)', {
                
                match: function() {
                    $('.js-footer-accordion').click(function(e) {
                        var $itemClicked = $(e.currentTarget);
                        $itemClicked.toggleClass('is-open');
                    });

                    // Hide menu and show the mobile menu
                    $mobileMenu.addClass('element-hidden');
                    $menu.removeClass('element-hidden');
                    $close.removeClass('element-hidden');

                    // Show the menu when you click the word 'menu'
                    $menu.click(function(){
                        $mobileMenu.removeClass('element-hidden');
                        // Adds a opacity                      
                        $opacity.removeClass('element-hidden').addClass('opacity');
                    });

                    // When you click "Cerrar" hides the menu and the opacity
                    $close.click(function(){
                        $mobileMenu.addClass('element-hidden');
                        $opacity.addClass('element-hidden');
                    });

                    // When you click outside the menu hides the menu and the opacity
                    // ToDo: le estan haciendo click a document, se ejecuta siempre
                    // si ponen un breakpoint en el devtools lo van a ver
                    $opacity.click(function(){
                        $mobileMenu.addClass('element-hidden');
                        $opacity.addClass('element-hidden');
                    });
                    $mobileMenu.click(function(e){
                        e.stopPropagation();
                    });
                    $menu.click(function(e){
                        e.stopPropagation();
                    });
                },      
                unmatch: function() {
                    $('.js-footer-accordion').removeClass('is-open').unbind('click');
                },    
            })

            // Register when match a viewport of 900px
            .register('screen and (min-width:900px)', {
                match: function() {
                    // Show menu when we are not in mobile and hide the mobile menu
                    $mobileMenu.removeClass('element-hidden');
                    $menu.addClass('element-hidden');
                    $close.addClass('element-hidden');
                    $opacity.addClass('element-hidden');

                    // Hover animations
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
                },
                unmatch: function() {

                },    
            });
        };

        window.app = {
            ready: ready,
            cta: ctaAnimation,
            enquire: enquireModule
        }

    }(window));
    
    app.ready();
    app.cta();
    app.enquire();

});