let val;

val = document;
val = document.body;
val = document.URL;

// single element selector
val = document.getElementById('main');

let task = document.querySelector('#task-title');

// Change Styling
task.style.background = '#333';
task.style.color = '#fff';
task.style.padding = '5px';

// Change content
task.textContent = 'X-men';
task.innerText = 'Men in Black';
task.innerHTML = '<span style="color:yellow;">Avengers</span>'

val = document.querySelector('.card-title');
val = document.querySelector('h5');
val = document.querySelector('li');
val = document.querySelector('ul li');
val = document.querySelector('li:last-child');
val = document.querySelector('li:first-child');
val = document.querySelector('li:nth-child(3)');
val = document.querySelector('li:nth-child(even)');
val = document.querySelector('li:nth-child(odd)');

// multiple element selector
// class 
val = document.getElementsByClassName('collection-item');

val[1].style.color = 'red';

// tag selector
val = document.getElementsByTagName('li');

// querySelectorAll
val = document.querySelectorAll('ul.collection li.collection-item');

val.forEach(function(item, index){
    item.textContent = `Hello : ${index}`;
    item.style.background = '#ccc';
})






console.log(task);
console.log(val);