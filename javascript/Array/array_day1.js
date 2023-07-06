// let fruits=["apple","banana","cherry"];
// let last=fruits.pop();
// console.log(fruits);
// console.log(last);

// let fruits1=['apple','banana','mango'];
// let last1 =fruits1.push('cherry');
// console.log(fruits1);
// console.log(last1);

// shift()

// let fruits3=['apple','banana','cherry','gavage'];
// let first3=fruits3.shift();
// console.log(fruits3);
// console.log(first3);


/*let arr=[1,2,3,4,5,6,6]

console.log(arr);

let x=["sanket",1,2,34,]
console.log(x);
*/

/*let a= Array(10);
console.log(a);

let b = Array.of(10);
console.log(b);

let colors = Array('red','green','blue');
console.log(colors); */

// using position we can extract out the original value

let y=[23,32,35,634,6,33,3,53,53,3]
console.log(8 in y); // true here checking the position 8 is present or not
console.log(y[8]); // 53 here we are extracting the value of position 8

// using length we can find the length of the array

console.log(y.length);

y[0]="sanket"; // we can change the value of the array using position
y[11]="damodar"; 
console.log(y); 

let myArray = [];
myArray[5] = "New Item"; // Adding an item at index 5
console.log(myArray); // Output: [undefined, undefined, undefined, undefined, undefined, "New Item"]
console.log(myArray.length); // Output: 6
