let val;

// Number  to string
let val1 = String(5);
let val2 = String(1+4);
val = val1 + val2;

// Bool to String
val = String(true);

// Date to String
val = String(new Date());

// Array to String
val = String([1,2,3,4]);

// toString()
val = (5).toString();

// String to Number
val = Number('55');
val = Number(true);
val = Number(false);
val = Number(null);
val = Number('hello'); // NaN ==> Not a Number
val = Number([1,2,3]);

val = parseInt('100.345');
val = parseFloat('100.345');

const val3 = String(5);
const val4 = 6;
const sum = Number(val3 + val4);

let sum1 = '5'+6+7;
let sum2 = 5 + 6 + '7';

console.log(sum1, sum2);

// math object, string methods, template string, array, object, date, 
console.log(sum);

console.log(typeof val);
console.log(val);