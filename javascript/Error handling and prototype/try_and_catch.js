

/// error handling in javascript
console.log("hello world");
console.log("money");
let assignmentCompletion=false;

try {
    if(assignmentCompletion===false){
        throw new Error("You have not completed the assignment");
    }
} catch (error) {
    console.log(error.message);
}finally{
    console.log("You can now create Static Webpages");
}
console.log("you are now learning javascript");