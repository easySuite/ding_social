(function ($) {
  'use strict';

  Drupal.behaviors.ding_campaign_ding_social_flag = {
    attach: function (context) {
      $('#ding-social-scheduler', context).once(function () {
        if (!$(':input[name="flag[facebook]"]').is(':checked')) {
          $(this).hide();
        }
      });
    }
  };
})(jQuery);
