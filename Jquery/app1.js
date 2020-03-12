$(document).ready(function() {
    $('#f1').click(function(){
        $('#div1').fadeIn(2000);
    })

    $('#f2').click(function() {
        $('#div1').fadeOut(3000);
    })
    
    $('#f3').click(function() {
        $('#div1').fadeToggle(1000);
    })

    $('#f4').click(function() {
        $('#div1').fadeTo(2000,0.3)
    })

    // $('#div2').mouseenter(function(){
    //     $('#div1').slideDown(3000);
    // })
    // $('#div2').mouseleave(function(){
    //     $('#div1').slideUp(3000);
    // })

    $('#div2').click(function() {
        $('#div1').slideToggle(1000);
    })

})