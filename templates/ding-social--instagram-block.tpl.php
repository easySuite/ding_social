<?php
/**
 * @file
 * Template for instagram block.
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
<?php if (isset($block_title)) : ?>
  <h2 class="block-title"><?php print $block_title; ?></h2>
<?php endif; ?>
<div class="ding-social-insta-block">
  <?php print render($content); ?>
</div>
<div class="ding-social-insta-slick-controls slick-slider">
  <ul>
    <button class="insta-prev slick-prev slick-arrow"><-</button>
    <button class="insta-next slick-next slick-arrow">-></button>
  </ul>
</div>
