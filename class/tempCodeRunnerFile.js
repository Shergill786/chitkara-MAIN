function swap(a,b){
    let temp=a;
    a=b;

    b=temp;
    console.log("Inside function: a =", a, "b =", b);
}
let num1=10;
let num2=20;
console.log("Before swap: num1 =", num1, "num2 =", num2);
swap(num1,num2);
console.log("After swap: num1 =", num1, "num2 =", num2);


