var sum=0;
var arr=[10,15,20,30];
/* The code `arr.forEach(function myFunction(elements){ sum=sum+elements; });` is using the `forEach`
method to iterate over each element in the `arr` array. For each element, it is executing the
provided function `myFunction`. */
arr.forEach(function myFunction(elements){
    sum=sum+elements;
});

console.log(sum);

var values=["one","two","three"];
var ans=values.shift();
console.log(ans);

let numbers=[1,2,3,4,5];
let removed =numbers.splice(2,2,23,33);
console.log(numbers);
console.log(removed);

/* The `Map` is a built-in JavaScript object that allows you to store key-value pairs. It is similar to
an object, but with some differences. The `Map` object allows any type of key, whereas object keys
are limited to strings or symbols. Additionally, the `Map` object maintains the order of the
inserted elements, whereas object properties do not have a guaranteed order. */


const double=numbers.map(doubles)