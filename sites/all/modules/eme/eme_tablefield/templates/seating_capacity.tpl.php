<?php
if (!empty($element['tabledata'])){
  ?>
  <div class="container">
    <?php
    foreach ($element['tabledata'] as $key => $row) {
      ?>
      <div class="row">
        <?php
        foreach ($row as $col_data) {
          ?>
          <div class="col-md-1"><?php print $col_data;?> </div>
          <?php } ?>
        </div>
        <?php
      }
      ?>
    </div>
    <?php  }
    ?>
