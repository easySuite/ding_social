<?php

/**
 * @file
 * Template for instagram block item.
 */
?>

<div class="ding-social-insta-item">
    <div class="ding-social-insta-item-image">
        <a href="<?php print $href; ?>">
            <img data-lazy="<?php print $src; ?>" alt="">
        </a>
    </div>
    <div class="ding-social-insta-item-user">
        <div class="profile">
            <div class="profile-photo">
                <a href="https://instagram.com/<?php print $post->user->username; ?>">
                    <img src="<?php print $post->user->profile_picture; ?>" alt="">
                </a>
            </div>
            <div class="profile-name">
                <a href="https://instagram.com/<?php print $post->user->username; ?>">
                  <?php print $post->user->full_name; ?>
                </a>
            </div>
        </div>
    </div>
  <?php if (!empty($caption)) : ?>
      <div class="ding-social-insta-item-caption">
        <?php print $caption; ?>
      </div>
  <?php endif; ?>
</div>
