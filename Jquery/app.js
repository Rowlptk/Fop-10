// $(document).ready(function() {
//     $('p').click(function(){
//         $(this).hide();
//     })
// })

// On method
// $(document).ready(function(){
//     $('p').on({
//         click : function() {
//             $(this).css("color","red");
//         },
//         dblclick : function() {
//             $(this).css("color","black");
//         },
//         mouseenter : function() {
//             $(this).css('fontSize','18px');
//         },
//         mouseleave : function() {
//             $(this).css('fontSize','16px');
//         }
//     })
// })


$(document).ready(function() {
    $('#b1').click(function() {
        //$('#demo').hide(3000);
        if($(this).html() == 'Hide')
        {
            $('#demo').hide(1000);
            $(this).html('Show');
        } else {
            $('#demo').show(1000);
            $(this).html('Hide');
        }
    })
    $('#b2').click(function() {
        $('#demo').show(2000);
    })
    $('#b3').click(function() {
        $('#demo').toggle(1000);
    })
})