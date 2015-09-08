<ul class="nav nav-pills nav-stacked nav-pills-stacked-example">

  <?php
  foreach ($links as $link) {
    ?>
    <li role="presentation" class="<?php print $link['active']?>"><?php print $link['link']?></li>
    <?php } ?>
  </ul>
