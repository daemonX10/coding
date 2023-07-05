/*/ /* An anonymous function is a function that does not have a name. It is typically used when you only
need to use the function once and do not need to refer to it again. Anonymous functions are often
used as arguments to other functions or as immediately invoked function expressions (IIFE). */
 
// Array function are anonymous function

 // normal function
// function (){
//     console.log("Hello pw skills");
// }

/// syntax of Anonymous function

// let variableName=function (){
    // function body
// };

(function (num){
    console.log(num*num);
})(5) // output:25