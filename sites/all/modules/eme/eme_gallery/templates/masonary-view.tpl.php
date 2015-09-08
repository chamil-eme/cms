<div class="grid">
  <div class="grid-sizer"></div>

  <?php foreach ($images as $image){
   ?>
   <div class="grid-item">
     <a class="grouped_elements" rel="group1" href="<?php print $image['highres'];?>">
      <img src="<?php print $image['src'];?>" />
    </a>
  </div>


  <?php
}

?>

</div>
