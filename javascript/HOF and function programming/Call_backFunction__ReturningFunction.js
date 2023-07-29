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