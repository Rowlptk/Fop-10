const num1 = 100;
const num2 = 50;

let val;

// Simple Math
val = num1 + num2;
val = num1 - num2;
val = num1 * num2;
val = num1 / num2;
val = num1 % num2;

val = 12 ** 2;

// Math object
val = Math.PI;
val = Math.E;
val = Math.round(2.4);
val = Math.round(2.5);
val = Math.floor(2.9);
val = Math.ceil(2.01);

val = Math.sqrt(64); 
val = Math.abs(-3); 
val = Math.pow(9,2); 

val = Math.min(2,33,4,1,55,6,3,-2);
val = Math.max(2,33,4,1,55,6,3,-2);


val = Math.random(); // 0 to 1(exclude);

val = Math.ceil(Math.random()*6);
val = Math.floor(Math.random()*6) + 1;

/* 1
   6
0.0000000000001 *6 ==> 0.000000000006 ==> 1
0.9999999999999 * 6 ==>  5.999999999999 ==> 6

*/


console.log(val);