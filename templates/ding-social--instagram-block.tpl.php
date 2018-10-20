<?php

/**
 * @file
 * Template for instagram block.
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
