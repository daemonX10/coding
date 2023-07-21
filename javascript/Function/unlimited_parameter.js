// function declaration

function sumOfAllparameter(){
    let sum=0;
    for (var i=0;i<arguments.length;i++){
        sum+=arguments[i];
    }

    return sum;
}

// function call 

result=sumOfAllparameter(2,3,5,6,67,3);
console.log(result);
