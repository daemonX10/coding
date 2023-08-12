// class ClassName{
//     constructor(){ }
//     method1(){ }
//     method2(){ }

//     method(){

//     }
// }

class Person{
    constructor(name){
        this.name=name;
    }
    sayHello(){
        console.log("hello , my name is " +this.name);
    }
}

// Static method -- used by Main class inside it declare

class MyClass{
    static myStaticMethod(){
        console.log("this is a static method");
    }
}

MyClass.myStaticMethod();


//  Properties with initial values

class Person1{
    constructor(fName,lName,age,city){
        this.fName=fName;
        this.lName=lName;
        this.age=age;
        this.city=city;
        this.level=0;
        this.skills=[];
    }

    getFullName(){
        const fullName = this.fName + " " + this.lName;
        return fullName;
    }
}

const person2= new Person1("Anuj","Kumar",31,"Delhi");
const person3= new Person1("Rohan","sharma", 40,"kalyan");

console.log(person2.level);
console.log(person3.level);
console.log(person2.skills);
console.log(person3.skills);


