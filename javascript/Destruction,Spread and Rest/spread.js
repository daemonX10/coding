// Spread
const one=[1,23,34,5,4];
const two=[2,34,2,536,5];

const three=one.concat(two);
const three1=[one,two];
// console.log(typeof(one,two));
// console.log(three);
// console.log(three1);

//  REST

function manyArgument(){
    let args=Array.from(arguments);
    const myArr=args.map(el=>el*2);
    console.log(myArr);
}

manyArgument(2,3);

function manyArgumentV2(...args){ // to pass unlimited no of arguments
    const myArr=args.map(el=>el*2);
    console.log("v2",myArr);
}

manyArgumentV2(2,3,4,5,6,7,8,9,10);

const heroes=['superman','batman','spiderman'];
const villains=['joker','lex luthor','venom'];

/* `const superHeroes=[...heroes,...villains];` is using the spread operator (`...`) to combine the
elements of the `heroes` and `villains` arrays into a new array called `superHeroes`. This creates a
new array that contains all the elements from both arrays. */
const superHeroes=[...heroes,...villains];
console.log(superHeroes);

const teacherName="hitesh choudhary";
/* `console.log([...teacherName]);` is using the spread operator (`...`) to convert the string
`teacherName` into an array of individual characters. It will output each character of the string as
separate elements in the console. */
console.log([...teacherName]);

console.log([...'hitesh choudhary',...'pwskills']);

function twoTest(...values){
    console.log(values);
}
/* The code `console.log(twoTest("hitesh","pw"));` is calling the `twoTest` function and passing two
arguments: "hitesh" and "pw". The function `twoTest` uses the rest parameter syntax (`...values`) to
collect all the arguments passed into an array called `values`. The `console.log` statement will
output the array `values` to the console. */
console.log(twoTest("hitesh","pw"));


// Rest Operator
function sum(...numbers) {
// return numbers.reduce((total, num) => total + num);
return numbers.reduce((sum,numbers)=>sum+numbers);
}

console.log(sum(1, 2, 3)); // Output: 6


// // Spread Operator
// function sum(a, b, c) {
// return a + b + c;
// }

// const numbers = [1, 2, 3];
// console.log(sum(...numbers)); // Output: 6
