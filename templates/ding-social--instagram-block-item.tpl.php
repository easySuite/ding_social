<?php
/**
 * @file
 * Template for instagram block item.
 *
 * This file is part of ding_social module.
 *
 * ding_social module is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ding_social module is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with ding_social module. If not, see <https://www.gnu.org/licenses/>.
 */
?>

<div class="ding-social-insta-item">
    <div class="ding-social-insta-item-image">
        <a href="<?php print $href; ?>" target="_blank">
            <img data-lazy="<?php print $src; ?>" alt="">
        </a>
    </div>
    <div class="ding-social-insta-item-user">
        <div class="profile">
          <!-- @TODO: Find a way to render profile picture. -->
<!--            <div class="profile-photo">-->
<!--                <a href="https://instagram.com/--><?php //print $post->user; ?><!--" target="_blank">-->
<!--                    <img src="--><?php //print $post->user; ?><!--" alt="">-->
<!--                </a>-->
<!--            </div>-->
            <div class="profile-name">
                <a href="https://instagram.com/<?php print $post->user; ?>" target="_blank">
                  <?php print $post->user; ?>
                </a>
            </div>
        </div>
    </div>
  <?php if (!empty($post->caption)) : ?>
      <div class="ding-social-insta-item-caption">
        <?php print $post->caption; ?>
      </div>
  <?php endif; ?>
</div>
