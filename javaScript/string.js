const firstName = 'William';
const lastName = 'Johnson';
const age = 36;
const str = 'hello there my name is Brad';
const tags = "web design, web development, programming";

let val;

// concatenation
val = firstName + lastName;
val = firstName + ' ' + lastName;

// Append
val = "Brad";
val += 'Traversy'; // val = val + 'Traversy';

val = "Hello, my name is " + firstName + ' and I am ' + age;

//  Escaping
val = 'That\'s awesome, I can\'t wait';

// length
val = firstName.length;

// Change Case
val = firstName.toLowerCase();
val = firstName.toUpperCase();

// William
val = firstName[5];

// indexOf();
val = firstName.indexOf('iam');
val = firstName.indexOf('ima');

// charAt();
val = firstName.charAt('6');
// get last Character
val = tags.charAt(tags.length - 1);

// slice()
val = firstName.slice(2, 5);
val = firstName.slice(-4);

//  split();
//Apple ==> [A,p,p,l,e]
val = tags.split(',');
val = str.split(' ');
val = str.split('');

// replace
val = str.replace('Brad', 'John');

let str1 = "Brad brad BRAD brad Brad brad bRaD BrAd";
val = str1.replace(/brad/gi,'john');

// pattern syntax ==> /pattern/
// g ==> global matching
// i ==> case insensitive match


// Next day ==> Array, object, date, misc, string


console.log(val);