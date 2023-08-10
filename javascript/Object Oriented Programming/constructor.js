class Person{
    constructor(name){
        this.name=name;
    }

    introduce(){
        console.log("hello my name is "+this.name+" and i am a person");
    }
}

const myName= new Person("damodar");
myName.introduce();

//  default constructor will be called if we don't define constructor in class
// default value with class constructor

class Human{
    constructor(
        fName='anuj',
        LName='kumar',
        age=20,
        city="Delhi"
    )
    {
        this.fName=fName;
        this.LName=LName;
        this.age=age;  
        this.city=city;
    }
}

const myMan= new Human();
const myMan1= new Human("sorsari","shakura",30,"hidden leaf village");
console.log(myMan);
console.log(myMan1);





















































































































