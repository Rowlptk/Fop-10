// Log to console
console.log('Hello World!');
console.log(123);
console.log(true);

let greetings = 'Hello';
console.log(greetings);

console.log([1,2,3,4]);

console.log({a:1, b:2});

console.table({a:1, b:2});

console.error('This is an error');
console.warn('This is a warning');
console.clear();

// single line comment
/* 
Multi line
comment
*/
// var, let, const

var name = 'John';
let age = 39;

name = 'Smith';
age = 40;
console.log(name,age);

const pi = 3.1415;
console.log(pi);
//pi= 10.998;

// letters, numbers, _, $
// cannot start with numbers

//let name1 = 'X-men';
//let 1name = 'Y-men';

// multiword ==> first name
// firstname ==> lowercase
// first_name ==> underscore
// firstName ==> Camel case
// FirstName ==> Pascal case

//  Data types
// Primitive
// String
let data = 'Hello';
console.log(typeof data);
// Number
data = 100.89;
console.log(typeof data);
// Boolean
data = false;
console.log(typeof data);
// Null
data = null;
console.log(typeof data);
// Undefined
let car;
console.log(typeof car);

// Reference types
// Array
const hobbies = ['movies', 'music'];
console.log(typeof hobbies);

// Object literals
const address = {
    city: 'Kathmandu',
    state: 'State no 3'
}
console.log(typeof address);

// date object
const today = new Date();
console.log(today);
console.log(typeof today);

// functions
const hello = function() {
    alert('Hello');
}

console.log(hello());
console.log( typeof hello);










