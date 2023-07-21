//  Arrow function

// one parameter and single return expression
const square = x => x*x;

let output=square(5);
console.log(output);

// multiple parameters and a single return  expression 

const sum_of_twoNumber=(x,y)=>x+y;
console.log(sum_of_twoNumber(2,3));

// Multiple parameters and a single return expression

const sum=(x,y) => {
    console.log(`Adding ${x} and ${y}`);
    return x+y;
};

console.log(sum(2,4));

// Returning an object 
const sum_and_difference=(x,y)=>({
    sum:x+y, difference:x-y
});

console.log(sum_and_difference(5,7))


// CALLING A FUNCTION 
//  TODO (MAP, FILTER, REDUCE)
const map=(arr,fn)=>{
    const result=[];
    for(const item of arr){
        result.push(fn(item));
    }
    return result;
};

//_______________________________________________________________________//

let addTwoNumbers=function(x,y){
    return x+y;
};

console.log(addTwoNumbers(2,5));
