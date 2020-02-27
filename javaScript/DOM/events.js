// document.querySelector('.clear-tasks').addEventListener('click', function(e) {
//     console.log('Hello World!');
//     console.log(e);
//     e.preventDefault();
// })

document.querySelector('.clear-tasks').addEventListener('click',onClick);


function onClick(e) {
    let val;
    
    val = e;
    console.log(val);

    val = e.type;
    console.log(val);
    
    val = e.target;
    console.log(val);
   
    val = e.target.id;
    console.log(val);
   
    val = e.target.className;
    console.log(val);

    val = e.target.classList;
    
    val = e.timeStamp;

    val = e.clientX;
    val = e.clientY;
    val = e.offsetX;
    val = e.offsetY;


    console.log(val);
    e.preventDefault();
}
