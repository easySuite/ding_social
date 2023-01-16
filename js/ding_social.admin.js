(function ($) {
  'use strict';

  Drupal.behaviors.ding_social_node_form_settings = {
    attach: function (context) {
      $('#ding-social-scheduler', context).once(function () {
        if (!$(':input[name="flag[facebook]"]').is(':checked')) {
          $(this).hide();
        }
      });

      $('fieldset#edit-scheduler-settings', context).drupalSetSummary(function () {
        var vals = [];
        if ($('#edit-publish-on').val() || $('#edit-publish-on-datepicker-popup-0').val()) {
          vals.push(Drupal.t('Scheduled for publishing'));
        }
        if ($('#edit-unpublish-on').val() || $('#edit-unpublish-on-datepicker-popup-0').val()) {
          vals.push(Drupal.t('Scheduled for unpublishing'));
        }
        if ($('#edit-fb-publish-on').val() || $('#edit-fb-publish-on-datepicker-popup-0').val()) {
          vals.push(Drupal.t('Scheduled for publishing on Facebook'));
        }
        if (!vals.length) {
          vals.push(Drupal.t('Not scheduled'));
        }
        return vals.join('<br/>');
      });
    }
  };
})(jQuery);
