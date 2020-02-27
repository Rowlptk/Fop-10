{/* <li class="collection-item" id="new-item" title="New Item">
    Hello World
    <a href="#" class="delete-item secondary-content">
        <i class="fa fa-remove"></i>
    </a>
</li> */}

// Create Element
const li = document.createElement('li');

// Add Class
li.className = 'collection-item';

// Add id;
li.id = 'new-item';

// Add attribute
li.setAttribute('title','New Item');

// create text
const text = document.createTextNode('Hello World!');

// append text to li
li.appendChild(text);

// create link
const link = document.createElement('a');

// add classes to link
link.className = 'delete-item secondary-content';

// add icon to link
link.innerHTML = '<i class="fa fa-remove"></i>';

//add link to li
li.appendChild(link);

// append li to ul
document.querySelector('ul.collection').appendChild(li);

// remove method
document.querySelector('ul.collection').remove();

console.log(li);
console.log(link);