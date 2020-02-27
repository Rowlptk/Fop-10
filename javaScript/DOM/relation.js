const list = document.querySelector('ul.collection');
const listItem = document.querySelector('li.collection-item:first-child');

let val;

val = list.children[1];
list.children[1].textContent = 'Hello';

list.children[3].children[0].id = 'task-link';
val = list.children[3].children[0];

val = list.childNodes;

val = list.firstElementChild;
val = list.lastElementChild;


val = listItem.parentElement; 
val = listItem.parentElement.parentElement;

val = listItem.nextElementSibling;
val = listItem.nextElementSibling.nextElementSibling;
val = listItem.nextElementSibling.nextElementSibling.previousElementSibling;

console.log(val);
console.log(list);
console.log(listItem);