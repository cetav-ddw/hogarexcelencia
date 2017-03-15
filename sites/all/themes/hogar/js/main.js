jQuery(document).ready(function($) {
  (function(window){
    var $mainMenu = $('#principal-menu');
    var $mobileMenuLink = $('.mobile-nav-link');
    var $ctaContent = $('.js-cta-content-wrap');
    var $ctaButton = $('#cta-button');

    var ctaAnimation = function () {
        $ctaButton.click(function() {
            $ctaContent.toggleClass('is-visible');
        });
    };

    var enquireModule = function() {
      enquire.register('screen and (min-width:320px) and (max-width:899px)', {
        match: function() {
          var $closeMenu = $('#mobile-nav-close');
          var $offcanvasOverlay = $('.js-offcanvas-overlay');

          $mainMenu.addClass('mobile-main-menu');

          if(!$offcanvasOverlay.length) {
            $offcanvasOverlay = $('<div/>');
            $offcanvasOverlay.addClass('offcanvas-overlay js-offcanvas-overlay');
            $('body').prepend($offcanvasOverlay);
          }

          if(!$closeMenu.length) {
            $closeMenuComponent = '<a href=\"#\" id=\"mobile-nav-close\" class=\"mobile-nav-close\">Cerrar<\/a>';
            $mainMenu.prepend($closeMenuComponent);
            $closeMenu = $('#mobile-nav-close');
          }

          $closeMenu.click(function(){
              $mainMenu.removeClass('is-open');
              $offcanvasOverlay.removeClass('is-visible');
          });

          $('.js-footer-accordion').click(function(e) {
              var $itemClicked = $(e.currentTarget);
              $itemClicked.toggleClass('is-open');
          });

          $mobileMenuLink.click(function(){
            $mainMenu.addClass('is-open');                    
            $offcanvasOverlay.addClass('is-visible');
          });

          $offcanvasOverlay.click(function(){
            $mainMenu.removeClass('is-open');
            $offcanvasOverlay.removeClass('is-visible');
          });
        },
        
        unmatch: function() {
            $('.js-footer-accordion').removeClass('is-open').unbind('click');
        },
      })
      .register('screen and (min-width:900px)', {
          match: function() {
              $mainMenu.removeClass('mobile-main-menu');

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
        cta: ctaAnimation,
        enquire: enquireModule
    };
  }(window));

  app.cta();
  app.enquire();
});