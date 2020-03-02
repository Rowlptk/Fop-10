// click, dblclick, mouseup, mousedown, mouseenter, mouseleave,
// mouseout, mouseover, mousewheel, mousemove
// keyup, keydown, keypress
// focus, submit, blur etc..

const card = document.querySelector('.card');
const heading = document.querySelector('#task-title');

//card.addEventListener('mousemove', runEvent);

function runEvent(e) {
    heading.textContent = `MouseX : ${e.offsetX} MouseY : ${e.offsetY}` ;
    document.body.style.backgroundColor = `rgb(${e.offsetX},${e.offsetY},255)`;
}

// Event Deligation
//const delItem = document.querySelector('.delete-item');

//delItem.addEventListener('click', deleteItem);

document.body.addEventListener('click', deleteItem);


function deleteItem(e)
{
    if(e.target.parentElement.classList.contains('delete-item'))
    {
        //console.log(e.target);
        e.target.parentElement.parentElement.remove();
    }
}