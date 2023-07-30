const powerTwo=(n)=>{
    return n**2
}

console.log(powerTwo(2));

function powerThree(powerTwo,n){
    return (powerTwo(n)*n);
}

console.log(powerThree(powerTwo,3));

/**
 * The function "sayHello" returns an arrow function that logs "hello world" to the console.
 * 
 * @return A function is being returned.
 */
function sayHello(){
    return ()=>{
        console.log("hello world");// function will be return
    }
}
console.log(sayHello);

let guessValue=sayHello();
// guessValue()

/**
 * The higherOrder function takes in a number n and returns a function that takes in a number m and
 * returns a function that takes in a number p and returns the sum of n, m, and p.
 * 
 * @return The code is returning the sum of the three numbers: 2 + 3 + 4, which is 9.
 */
const higherOrder=n=>{
    const oneFun=m=>{
        const twoFun=p=>{
            return m+n+p
        }
        return twoFun
    }
    return oneFun
}

console.log(higherOrder(2)(3)(4));


const myNum=[2,3,4,5];

/**
 * The function `sumArray` takes an array as input and returns the sum of all the elements in the
 * array.
 */
const sumArray=arr=>{
    let total=0;
    arr.forEach(function(elements){
        total+=elements;
    });
    return total
}

console.log(sumArray(myNum));

const additionFunction=arr=>{
    let total=0;
    arr.forEach(function(elements){
        total+=elements;
    });
    return total;
}
console.log(additionFunction(myNum));

function oneMoreHello(){
    console.log("hello hitesh !", Math.random());
}
/* `setInterval` is a built-in JavaScript function that repeatedly calls a function or executes a code
snippet at a specified time interval. It takes two parameters: the function or code to be executed,
and the time interval (in milliseconds) between each execution. */


// setInterval(oneMoreHello,1000);


/* `setTimeout(oneMoreHello,2000);` is setting a timer to execute the `oneMoreHello` function after a
delay of 2000 milliseconds (2 seconds). */


// setTimeout(oneMoreHello,2000);


// More about hof
function useFunction(func){
    return func();
}

useFunction(function (){
    console.log("7");
});

// Calculator Function

function CalculatorFunction(operation,initialValue,numbers){
    let total=initialValue;
    for ( let number of numbers){
        total=operation(total,number);
    }
    return total;
}
function sum(n1,n2){
    return n1+n2;
}
function multiply(n1,n2){
    return n1*n2;
}
function divide(n1,n2){
    return n1/n2;
}
function modules(n1,n2){
    return n1%n2;
}

console.log(CalculatorFunction(sum,1,[1,2,3,4,5]),
CalculatorFunction(multiply,2,[1,2,3,4,5]),
CalculatorFunction(divide,10,[1,2,3,4,5]));
