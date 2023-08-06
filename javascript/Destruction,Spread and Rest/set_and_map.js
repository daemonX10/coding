// Set

const newSet = new Set();
newSet.add(2);
console.log(newSet.has(2));
newSet.add(1);
newSet.add(4);

console.log(newSet);

let myArray=[1,2,3,4,5,6];
let arraySet=new Set (myArray);
// console.log(arraySet);
// console.log(arraySet.has(5));
// console.log(arraySet.clear());
// console.log(arraySet);
// console.log(arraySet.delete());
// console.log(arraySet);

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// Map
const myMap=new Map;
console.log(myMap.size);

let arr=[
    [1,"mithun"],
    [2,"Alka"],
    [3,"Prabir"],
    [5,"vinay"],
    [6,"shivam"]
];

// el=[1,"mithun"];

/* The `map` function is used to iterate over an array and perform a specific operation on each element
of the array. In this case, the `map` function is used to iterate over the `arr` array and add each
element as a key-value pair to the `myMap` map. */

/* The code `arr.map(el=>myMap.set(el[0],el[1]));` is using the `map` function to iterate over the
`arr` array. For each element `el` in the array, it is calling the `myMap.set` method to add a
key-value pair to the `myMap` map. The key is `el[0]` and the value is `el[1]`. This code is
essentially populating the `myMap` map with the elements from the `arr` array. */
arr.map(el=>myMap.set(el[0],el[1]));
console.log(myMap);


