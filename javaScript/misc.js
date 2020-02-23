let val;

const today = new Date();
let birthday = new Date('9-10-1982 11:25:00');
birthday = new Date('September 10 1981');
birthday = new Date('9/10/1981');
birthday = new Date(2020, 0, 1, 12, 00, 09, 999);
birthday = new Date(-10000000000000);


val = today.getMonth() + 1 ;
val = today.getDate() ;
val = today.getDay() ;
val = today.getFullYear() ;
val = today.getHours() ;
val = today.getMinutes() ;
val = today.getSeconds() ;
val = today.getMilliseconds() ;
val = today.getTime() ;


// == ==> loose comparison(exclude data type) ==> !=
// === ==> strict comparison(including data type) == !==
let id = 2
if(id === '2')
{
    console.log('correct');
} 
else {
    console.log('incorrect');
}

// forEach and for/in


console.log(val);
console.log(today);
console.log(birthday);