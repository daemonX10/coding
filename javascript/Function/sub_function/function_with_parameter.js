// function displayMessage(message_to_be_displayed){
//     console.log(message_to_be_displayed);
// }

// displayMessage("i am happy to learn full stack web development form Pw skills");
// displayMessage("i am enjoying the journey of javascript");




function displayMessage1(message_to_be_displayed="i am a proud student of Pw skills "){
    console.log(message_to_be_displayed);
}

displayMessage1();

displayMessage1("i am happy to learn full stack web development for Pw skills ");


function sumOfTwoNumbers(num1,num2){
    return num1+num2;
}

let results=sumOfTwoNumbers(3,44);
console.log(results);

// function with two parameters.
// function declaration

function sumOfTwoNumbers1(num1,num2){
    return num1+num2;
}

// calling a function 
let number1=10;
let number2=40;

let results1 =sumOfTwoNumbers1(number1,number2);
console.log(results1);


// function with two parameters.
// function Declaration 

function sumOfTwoNumbers2([num1,num2]){
    return num1 +num2;
}

// calling a function

let numbers=[10,40];

let result2=sumOfTwoNumbers2(numbers);
console.log(result2);

