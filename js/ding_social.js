(function ($) {
  'use strict';

  $(document).ready(function() {
    $('.ding-social-insta-block').slick({
      infinite: true,
      slidesToShow: 3,
      slidesToScroll: 3,
      prevArrow: $('.insta-prev'),
      nextArrow: $('.insta-next'),
      lazyLoad: 'ondemand'
    });
  });
})(jQuery);
