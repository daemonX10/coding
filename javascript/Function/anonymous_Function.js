// function declaration

// function(){
//     console.log("hello world");
// }

// right ways

let hello_world=function(){
    console.log("hello world");
};

hello_world();


// immediately invoked Function expression

// IIFE

(function(){
    console.log("hello world");
})( /* parameter */);

(function(num){
    console.log(num*num);
})(5);