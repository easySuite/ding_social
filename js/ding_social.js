(function ($) {
  'use strict';

  $(document).ready(function() {
    $('.ding-social-insta-block').slick({
      infinite: false,
      slidesToShow: 3,
      slidesToScroll: 3,
      prevArrow: $('.insta-prev'),
      nextArrow: $('.insta-next'),
      lazyLoad: 'ondemand',
      responsive: [{
        breakpoint: 568,
        settings: {
           slidesToShow: 1,
           slidesToScroll: 1,
        }
      }, {
        breakpoint: 320,
        settings: {
           slidesToShow: 1,
           slidesToScroll: 1
        }
      }]
    });

    var fb_sdk = '<div id="fb-root"></div>\n' +
        '<script>(function(d, s, id) {\n' +
        '  var js, fjs = d.getElementsByTagName(s)[0];\n' +
        '  if (d.getElementById(id)) return;\n' +
        '  js = d.createElement(s); js.id = id;\n' +
        '  js.src = \'https://connect.facebook.net/da_DK/sdk.js#xfbml=1&version=v3.0\';\n' +
        '  fjs.parentNode.insertBefore(js, fjs);\n' +
        '}(document, \'script\', \'facebook-jssdk\'));</script>';

    $('body').prepend(fb_sdk);
  });
})(jQuery);
