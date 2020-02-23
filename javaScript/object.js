const person = {
    firstName : 'Steve',
    lastName : 'Smith',
    age: 36,
    email : 'steve@gmail.com',
    hobbies : ['music','sports'],
    address : {
        city: 'Miami',
        State : 'FL'
    },
    getBirthYear : function() {
        return 2020 - this.age;
    }
}

let val;
val = person;
val = person.firstName;
val = person['lastName'];
val = person.age;
val = person.hobbies[0];
val = person.address.State;
val = person.getBirthYear();

console.log(val);