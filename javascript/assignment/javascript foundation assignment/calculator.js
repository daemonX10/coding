/*
Create a javascript program that takes in two num#ers and a string operator. Make use of a switch statement
to perform the operation on the two num#ers

The calculator function should"
L Take in two num#ers, num1 and num2, and a string representing a mathematical operator, operatorP
L Use a switch statement to determine which operation to perform based on the value of the operatorP
L If the operator is one of the four valid operators (+, -, *, /), perform the corresponding mathematical
operation and store the result in a varia#le called resultP
L If the operator is not one of the valid operators, log "Invalid operator" to the console
*/
prompt = require('prompt-sync')();

let num1=parseFloat(prompt("enter th first number :"));
let num2=parseFloat(prompt("enter the second number :"));
let operator=prompt("enter the operator :");
let result

switch(operator){
    case "+":
        result=num1+num2;
        console.log(result);
        break;

    case "-":
        if(num1>num2){
            result=num1-num2;
            console.log(result);
        }
        else{
            result=num2-num1;
            console.log(result);
        }
        break;
    
    case "*":
        console.log(result=num1*num2);
        break;
    
    case "/":
        result=num1/num2;
        console.log(result);

    default:
        console.log("invalid operators")
}