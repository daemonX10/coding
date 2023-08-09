class product{

    constructor(name,price,discount){
        this.name=name;
        this.price=price
        this.discount=discount;
        
    }

    display(){
        console.log("name of the product is", this.name , "and price is ", this.price);
    }

    discountPrice(){ 
        let newPrice = this.price*(Math.floor(100-this.discount)/100);
        return newPrice;
    }
}

const p=new product("iphone",100000,25);
p.discountPrice();
p.display();
console.log(p.discountPrice());



