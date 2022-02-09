/**
 * This file is part of ding_social module.
 *
 * ding_social module is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ding_social module is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with ding_social module. If not, see <https://www.gnu.org/licenses/>.
 */

(function ($) {
  'use strict';

  Drupal.behaviors.ding_social = {
    attach: function () {
      $('.ding-social-insta-block').not('.slick-initialized').slick({
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
    }
  };
})(jQuery);
