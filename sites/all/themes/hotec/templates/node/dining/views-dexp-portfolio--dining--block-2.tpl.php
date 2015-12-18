<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
//print_r($options);
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php if($options['dexp_portfolio_filter']):?>
  <?php if(isset($categories)):?>
  <div class="portfolio-filters">

  </div>
  <?php endif;?>
<?php endif;?>
<div id="<?php print $view_id;?>" class="dexp-grid-items row">
  <?php foreach($rows as $row):?>
    <?php print $row; ?>
  <?php endforeach;?>
</div>
