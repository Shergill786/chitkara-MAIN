// let a = Number(prompt("Enter first number: "));
// let b = Number(prompt("Enter second number: "));
// console.log("The sum is:", a + b);
// console.log("The difference is:", a - b);
// console.log("The product is:", a * b);
// console.log("The quotient is:", a / b);
// console.log("The remainder is:", a % b);
// console.log("The power is:", a ** b);


// const age=Number(prompt("Enter your age: "));
// const mess=(age>=18) ? "You are an adult." : "You are a minor.";
// console.log(mess);


// const n1 =Number(prompt("Enter a number: "));
// const n2 =Number(prompt("Enter another number: "));
// let greater=(n1>n2) ? n1 : n2;
// console.log("The greater number is:", greater);


// const n1=Number(prompt("Enter a number: "));
// const n2=Number(prompt("Enter another number: "));
// let smallest=(n1<n2) ? n1 : n2;
// console.log("The smallest number is:", smallest);


// let a =true;
// let b =false;
// let x = 10;
// let y = 20;
// console.log(a && b);
// console.log(a || b);
// console.log(!a); 
// console.log(x > 5 && y > 15);
// console.log(x > 15 || y > 15);
// console.log(!(x == y));


// let a=parseFloat(prompt("Enter 1st number: "));
// let b=parseFloat(prompt("Enter 2nd number: "));
// let c=parseFloat(prompt("Enter 3rd number: "));
// let d=parseFloat(prompt("Enter 4th number: "));
// let e=parseFloat(prompt("Enter final number: "));
// let greatest = (a>b && a>c && a>d && a>e &&a) ||
//                 (b>a && b>c && b>d && b>e &&b) || 
//                 (c>a && c>b && c>d && c>e &&c) ||
//                 (d>a && d>b && d>c && d>e &&d) ||
//                 e;

// console.log("The greatest number is:", greatest);


// avg percentage of 5 subjects
// let sub1 =Number(prompt("Enter marks of subject 1: "));
// let sub2 =Number(prompt("Enter marks of subject 2: "));
// let sub3 =Number(prompt("Enter marks of subject 3: "));
// let sub4 =Number(prompt("Enter marks of subject 4: "));
// let sub5 =Number(prompt("Enter marks of subject 5: "));
// let total = sub1 + sub2 + sub3 + sub4 + sub5;
// let avg = total / 5;
// let per = (total / 500) * 100;
// console.log("Total marks:", total);
// console.log("Average marks:", avg);
// console.log("Percentage:", per + "%");


// squareroot ,cube root  of a number
// let num =Number(prompt("Enter a number: "));
// let sqrt=num ** 0.5;
// let cbrt=num ** (1/3);
// console.log("Square root of", num, "is:", sqrt);
// console.log("Cube root of", num, "is:", cbrt);




// greatest and smallest of 3 numbers
// let n1 =Number(prompt("Enter first number: "));
// let n2 =Number(prompt("Enter second number: "));
// let n3 =Number(prompt("Enter third number: "));
// if (n1 >= n2 && n1 >= n3) {
//     console.log("The greatest number is:", n1);
// }
// else if (n2 >= n1 && n2 >= n3) {
//     console.log("The greatest number is:", n2);
// }
// else {
//     console.log("The greatest number is:", n3);
// }
// if (n1 <= n2 && n1 <= n3) {
//     console.log("The smallest number is:", n1);
// }
// else if (n2 <= n1 && n2 <= n3) {
//     console.log("The smallest number is:", n2);
// }
// else {
//     console.log("The smallest number is:", n3);
// }


// area and volume of rectangle
// let length =Number(prompt("Enter length of rectangle: "));
// let width =Number(prompt("Enter width of rectangle: "));
// let height =Number(prompt("Enter height of rectangle: "));
// let area = length * width;
// let volume = length * width * height;
// console.log("Area of rectangle is:", area);
// console.log("Volume of rectangle is:", volume); 


// let age=Number(prompt("Enter your age: "));
// if(age>=18){
//     console.log("You are an adult.");
// }
// else{
//     console.log("You are a minor.");
// }

// if else
// let temp=Number(prompt("Enter the temperature: "));
// if(temp>35){
//     console.log("day is hot");
// }
// else if(temp>=20 && temp<=35){
//     console.log("day is warm");
// }
// else{
//     console.log("day is cold");
// }


// switch case
// let day=Number(prompt("Enter day of the week: "));
// switch(day){
//     case 1  :
//         console.log("Today is Monday"); 
//         break;
//     case 2:
//         console.log("Today is Tuesday");    
//         break;
//     case 3  :
//         console.log("Today is Wednesday");  
//         break;
//     case 4  :
//         console.log("Today is Thursday");  
//         break;  
//     case 5:
//         console.log("Today is Friday");
//         break;
//     case 6  :
//         console.log("Today is Saturday");
//         break;
//     case 7:
//         console.log("Today is Sunday");
//         break;
//     default:
//         console.log("Invalid day");
// }

// let a =Number(prompt("Enter your age: "));
// if (a>60 ){
//     console.log("You are eligible ");
// }
// else{
//     console.log("You are not eligible");
// }


// let char=prompt("Enter a character: ");
// if (char>='A' && char<='Z'){
//     console.log(char,"is an uppercase letter.");
// }
// else {
//     console.log(char,"is a lowercase letter.");
// }


// let num=Number(prompt("Enter your numbers: "));
// if (num>90){
//     console.log("Grade A");
// }
// else if (num>80){
//     console.log("Grade B");
// }
// else if (num>70){
//     console.log("Grade C");
// }
// else if (num>60){
//     console.log("Grade D");
// }
// else{
//     console.log("Grade F");
// }


// let age=Number(prompt("Enter your age: "));
// let inc=Number(prompt("Enter your income: "));
// if (age>=30 && inc<=600000){
//     console.log("You are eligible for 1 lkh loan.");
// }
// else if (age>=40 && age<=45 && inc<1200000){
//     console.log("You are eligible for 5 lkh loan.");
// }
// else if (age>=45 && age<=60 && inc<2400000){
//     console.log("You are eligible for 25 lkh loan.");
// }
// else{
//     console.log("You are not eligible for loan.");
// }


// username with switch case 10 digits 1 uppercase 1 number  3 attempts
// let attempts = 3;
// while (attempts > 0) {
//     let username = prompt("Enter username:");
//     switch (true) {
//         case username.length === 4 &&
//              /[A-Z]/.test(username) &&
//              /\d/.test(username):
//             console.log("Login successful");
//             attempts = 0; 
//             break;
//         default:
//             console.log("Invalid username");
//             attempts--;
//     }
// }


// email validation
// let attempts = 3;
// while (attempts > 0) {
//     let email = prompt("Enter your email address:");
//     switch (true) {
//         case email.includes("@") && email.includes("."):
//             console.log("Valid email address");
//             attempts = 0; 
//             break;
//         default:
//             console.log("Invalid email address");
//             attempts--;
//     }
// }


// let num=Number(prompt("Enter your marks: "));
// if (num>=90){
//     console.log("Grade A");
// }
// else if (num>=80){
//     console.log("Grade B");
// }
// else if (num>=70){
//     console.log("Grade C");  
// }
// else if (num>=60){
//     console.log("Grade D");
// }
// else{
//     console.log("Grade F");
// }



// function demo() {
//     var a = 10;
//     let b = 20;
//     if (true) {
//       var a = 30;
//       let b = 40;
//     }
//     console.log(a, b);
//   }
//   demo();

// let a =5 ,b=10;
// [a,b]=[b,a]
// console.log(a,b)

// let n=5;
// if (n>0) 
//     console.log("post")
// else 
//     console.log("neg")


// switch case
// let d=2;
// switch (d){
//     case 1: console.log("mon");break;
//     case 2: console.log("tue");break;
// }

// for (let i=1;i<=5;i++)
//     console.log(i)

// let i = 2;
// while (i <= 10) {
//   console.log(i);
//   i += 2;
// }


// let sum=0;
// for (let i=1;i<=45;i++) 
//     sum+=1
// console.log(sum)

// for (let i=1; i<=10;i++){
//     if (i===6) break;
//     console.log(i)
// }



// a=prompt("Enter first number: ")
// b=prompt("Enter second number: ")
// function add(a,b){
//     return a+b;
// }
// function sub(a,b){
//     return a-b;
// }
// console.log(add(a,b));
// console.log(sub(a,b));

// function greet(name="user"){
//     console.log(name);
// }
// greet();

// function sum(...n){
//     return n.reduce((a,b)=>a+b,0);
// }
// console.log(sum(1,2,3));

// let sum=0;
// for (i=1;i<=5;i++){
//     sum+=i
// }
// console.log(sum)
// console.log(i)

// let str="hello"
// for (let i of str){
//     console.log(i)
// }

// let obj={
//     item:"book",
//     price:100,
// };
// // console.log(obj.item,obj.price);
// let out=`The price of ${obj.item} is ${obj.price}`;
// console.log(out)

// let str = "helloworld";
// console.log(str.length);
// console.log(str);    


// let cities=["delhi","mumbai","kolkata","chennai"];
// for (let city of cities){
//     console.log(city.toUpperCase());
// }