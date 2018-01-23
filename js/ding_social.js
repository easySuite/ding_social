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
  });
})(jQuery);
