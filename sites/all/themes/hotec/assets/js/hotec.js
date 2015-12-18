jQuery(document).ready(function($){
  //jQuery('#dexp-layerslider').find('#section-main-content').addClass('hasSlider');
  if($('#dexp-layerslider').length) { $('#section-main-content').addClass('hasSlider'); }
	$('.dexp-body-inner').append('<div id="dexp_backtotop"><i class="fa fa-angle-up"></i></div>');
	$(window).scroll(function(){
		if($(this).scrollTop()!=0){
			$('#dexp_backtotop').fadeIn();
		}else{
			$('#dexp_backtotop').fadeOut();}
	});
	$('#dexp_backtotop').click(function(){
			$('body,html').animate({scrollTop:0},800);
	});
});