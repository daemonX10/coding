// Call back function
function hi_function(name,callback){
    console.log("hi"+" "+name+" I am the actual function");
    callback();
}

// call back function example
function exampleFunction(){
    console.log("i come form the callback function");
}

hi_function("damodar",exampleFunction);

// // callback Hell :
// getProduct(18,(user)=>{
//     console.log("Get Products",user);
//     getUserInfo(user.username,(name)=>{
//         console.log(name);
//         getAddress(name,(item)=>{
//             console.log(item);
//             // this goes on
//         })
//     })
// });

// async function getProduct(productId) {
//   try {
//     const user = await getUserInfoById(productId);
//     console.log("Get Products", user);

//     const name = await getUserInfo(user.username);
//     console.log(name);

//     const item = await getAddress(name);
//     console.log(item);

//     // more async operations can be added here if needed
//   } catch (error) {
//     console.error("Error occurred:", error);
//   }
// }

// // Assuming the following functions are asynchronous and return promises:

// function getUserInfoById(productId) {
//   // Mocked implementation returning a promise
//   return new Promise((resolve, reject) => {
//     // Assume some asynchronous operation here to retrieve user information based on the productId
//     // For the sake of example, we'll resolve with a user object
//     const user = {
//       username: "example_user",
//       // other user properties...
//     };
//     resolve(user);
//   });
// }

// function getUserInfo(username) {
//   // Mocked implementation returning a promise
//   return new Promise((resolve, reject) => {
//     // Assume some asynchronous operation here to retrieve user information based on the username
//     // For the sake of example, we'll resolve with a name
//     const name = "John Doe"; // Replace this with the actual name retrieved
//     resolve(name);
//   });
// }

// function getAddress(name) {
//   // Mocked implementation returning a promise
//   return new Promise((resolve, reject) => {
//     // Assume some asynchronous operation here to retrieve address information based on the name
//     // For the sake of example, we'll resolve with an address
//     const address = "123 Main St, City"; // Replace this with the actual address retrieved
//     resolve(address);
//   });
//------------------------------------------------_________________________________________________________________________________________________________________________________________________________________________________________-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Returning Function 

function multiplyBy7(){
    return function(x){return x*7;};
};
const changedValue=multiplyBy7();
console.log(changedValue(25));


// both parent and return function take parameter

function makeAdder(n1){
    return function(n2){ return n1+n2;};
}
console.log(makeAdder(5)(3));