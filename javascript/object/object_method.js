// let emp={
//     id:101,
//     name:'John',
//     age:25,
//     salary:25000,
// };


// // Method 1: Using dot notation
// console.log(emp.id);

// // Method 2: Using square bracket notation
// console.log(emp['id']);

// // Method 3: Using for-in loop
// for(let key in emp){
//     console.log(key, emp[key]);
// };

// // Method 4: Using Object.keys() method

// console.log(Object.keys(emp));

// /* `Object.keys(emp)` returns an array of all the keys in the `emp` object. The `forEach` method is
// then used to iterate over each key in the array. For each key, the function is executed, which logs
// the key and its corresponding value (`emp[key]`) to the console. This allows you to print all the
// key-value pairs in the `emp` object. */
// Object.keys(emp).forEach(function(key){
//     console.log(key, emp[key]);
// });

// // Method 5: Using Object.values() method
// console.log(Object.values(emp));

// // method 6: Using Object.entries() method
// /* `console.log(Object.entries(emp));` is printing an array of arrays to the console. Each inner array
// contains two elements: the key and the corresponding value from the `emp` object. This allows you to
// see all the key-value pairs in the `emp` object. */
// console.log(Object.entries(emp));

// // Method 7: Using Object.getOwnPropertyNames() method
// console.log(Object.getOwnPropertyNames(emp));

// // Method 8: Using JSON.stringify() method
// /* `console.log(JSON.stringify(emp));` is converting the `emp` object into a JSON string representation
// and then printing it to the console. The `JSON.stringify()` method is used to convert JavaScript
// objects into JSON strings. */
// console.log(JSON.stringify(emp));

// // Method 9: Using Object.assign() method
// /* `console.log(Object.assign({}, emp));` is creating a shallow copy of the `emp` object using the
// `Object.assign()` method. */
// console.log(Object.assign({}, emp));

// /*___________________________xxxxx_____________________________ */


// // object.keys
// const keys=Object.keys(emp);
// console.log(keys);

// // object.values
// const values=Object.values(emp);
// console.log(values);

// // object.entries()
// const entries=Object.entries(emp);
// console.log(entries);

// /* `Object.entries()` is a method in JavaScript that returns an array of arrays, where each inner array
// contains two elements: the key and the corresponding value from the object. It allows you to see all
// the key-value pairs in the object. */


// /* `console.log(Object.assign(emp));` is creating a shallow copy of the `emp` object using the
// `Object.assign()` method. It takes the `emp` object as the source object and creates a new object
// with the same properties and values. The new object is then printed to the console. */

// console.log(Object.assign(emp));

var emp={
    name:"alex",
    age:25,
    salary:100000
};
const emp_obj= Object.assign({},emp);
console.log(emp_obj);


Object.freeze(emp);
console.log(Object.isFrozen(emp));

Object.seal(emp);
console.log(Object.isSealed(emp));