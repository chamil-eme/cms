// external js: masonry.pkgd.js, imagesloaded.pkgd.js

jQuery(document).ready( function() {
  // init Masonry
  var $grid = jQuery('.grid').masonry({
    itemSelector: '.grid-item',
    isFitWidth: true,
    gutter: 5
  });
  // layout Isotope after each image loads
  $grid.imagesLoaded().progress( function() {
    $grid.masonry();
  });

  jQuery("a.grouped_elements").fancybox();
});
