/**
Write a JavaScript program that checks if the entered password matches the confirmed password. If the
passwords match, the program should log "Password Matched. Password validation Successful." to the console.
Otherwise, it should log "Password didn't match. Password validation unsuccessful" to the console

**/
const prompt = require('prompt-sync')();

let password = prompt("enter the password");

let valid_password="eren";
if(password==valid_password){
    console.log("password matched. \nPassword validation successful.");
}
else{
    console.log("Password didn't match . \nPassword validation unsuccessful ");
}