// console.log("Hello, World!");
// console.log("This is a sample JavaScript file.");

// age=24;
// console.log("Age:", age);
// age+=1;
// console.log("Next Year Age:", age);
// name="JAVASCRIPT";
// console.log("Name:", name);

// x=null;
// y=undefined;
// console.log(x);
// console.log(y);

// isActive=true;
// console.log( isActive);


// const pi=3.14;
// console.log("Value of pi:", pi);

// let score=100;
// score+=50;
// console.log("Total Score:", score);



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
// else if (num>=70){x
//     console.log("Grade C");
// }
// else if (num>=60){
//     console.log("Grade D");
// }
// else{
//     console.log("Grade F");
// }



// loops
// for (let i=1;i<=5;i++){
//     console.log("Iteration:", i);
// }

// let count=1;
// while (count<=5){
//     console.log("Count:", count);
//     count++;
// }

// let n=prompt("Enter a number to calculate its factorial: ");
// n=Number(n);
// let factorial=1;
// for (let i=1;i<=n;i++){
//     factorial*=i;
// }
// console.log("Factorial of", n, "is", factorial);


// while 
// let n=prompt("Enter a number to calculate its factorial: ");
// n=Number(n);
// let factorial=1;
// let i=1;
// while (i<=n){
//     factorial*=i;
//     i++;
// }
// console.log("Factorial of", n, "is", factorial);


// for (let i = 1; i <= 5; i++) {
//     let row = "";
//     for (let j = 0; j < i; j++) {
//       row += (2 + j * 2) + " ";
//     }
//     console.log(row.trim());
//   }


// let rows = 3;

// for (let i = 1; i <= rows; i++) {
//     let stars = "";
//     for (let j = 1; j <= i * 2; j++) {
//         stars += "* ";
//     }
//     console.log(stars);
// }


// for (let i = 1; i <= 5; i++) {
//     console.log(2 ** i);
// }


// let num=3;
// for (let i=1;i<=5;i++){
//     console.log(num,"x",i,"=",num*i);
// }


// let str=1;
// for(let i=1;i<=5;i++){
//     str=str*3;
//     let row="";
//     for (let j=1;j<=i;j++){
//        row+="*";
//     }
//     console.log(row);
// }

// double triangle
// for(let i=1;i<=7;i++){
//     let row=""; 
//     if(i<=4){
//     for (let j=1;j<=i;j++){
//          row+="*";
//         }
//     }
//     else{
//         for (let j=1;j<=8-i;j++){
//             row+="*";
//         }   
//     }
//     console.log(row);
// }

// let n = parseInt(prompt("Enter number of levels:"));

// for (let i = 1; i <= n; i++) {
//   console.log("*".repeat(2 ** i));
// }

// for (let i = n - 1; i >= 1; i--) {
//   console.log("*".repeat(2 ** i));
// }


// let n=Number(prompt("enter a number "));
// let i=1;
// let sum=0;
// while (i<=n){
//     sum+=i;
//     i++;
// }
// console.log("sum=",sum);


//sum of  even number using loops upto 30
// let sum=0;
// for (let i=1;i<=30;i++){
//     if (i%2==0){
//         sum+=i;
//     }
// }
// console.log("Sum of even numbers up to 30:", sum);  


// table of 5 
// let num=5;
// for (let i=1;i<=10;i++){
//     console.log(num,"x",i,"=",num*i);
// }


// palendrome
// let num=Number(prompt("Enter a number: "));
// let originalNum=num;
// let rev=0;
// while (num>0){
//     let digit=num%10;
//     rev=rev*10+digit;
//     num=Math.floor(num/10);
// }
// if (originalNum==rev){
//     console.log(originalNum,"is a palindrome number.");
// }
// else{
//     console.log(originalNum,"is not a palindrome number.");
// }

//  for off loop is used to ittrate over values of ittrable like arrays ,strings, maps and sets 
//  for in loop is used to ittrate over properties of object


// let person={name:"John", age:30, city:"New York"};
// for (let key in person){
//     console.log(key)
// }


// sum of all keys
// let obj={a:1,b:2,c:3,d:4};
// let sum=0;
// for (let key in obj){
//     sum+=obj[key];
// }
// console.log("Sum of all values:", sum);


// let score  ={a:45,b:30,c:225};
// let max =score["a"]
// for (let key in score){
//     if (score[key]>max){
//         max=score[key];
//     }
// }
// console.log("Highest score is:", max);


// let arr=[10,20,30,40,50];
// let sum=0;
// for (let value of arr){
//     sum+=value;
// }
// console.log("Sum of array values:", sum);



// either results shows in terminal or node js terminal 
// console is used to \


//  console.table("student")
// console.warn("very bad")
// console.log(10+5)


// console.error("something went wrong")
// let students=[
//     {name:"John", marks:80},
//     {name:"Alice", marks:90}
// ];
// console.table(students)
// console.warn("very bad");
// console.log(10+5);



// let marks = {
//     math: Number(prompt("Math marks:")),
//     science: Number(prompt("Science marks:")),
//     english: Number(prompt("English marks:")),
//     computer: Number(prompt("Computer marks:")),
//     hindi: Number(prompt("Hindi marks:"))
// };

// let sum = 0, count = 0;

// for (let subject in marks) {
//     sum += marks[subject];
//     count++;
// }

// let percentage = sum / count;

// console.log("Percentage =", percentage);

// if (percentage > 90)
//     console.log("Excellent Performer");
// else if (percentage > 70)
//     console.log("Very Good Performer");
// else if (percentage > 50)
//     console.log("Good Performer");
// else if (percentage < 30)
//     console.log("Poor Performer");
// else
//     console.log("Average Performer");


// find mini and max and find sum of values in array
// let arr=[10,20,5,15,30];
// let min=arr[0];
// let max=arr[0];  
// let sum=0;
// for (let value of arr){
//     sum+=value;
//     if (value<min){
//         min=value;
//     }
//     if (value>max){
//         max=value;
//     }
// }
// console.log("Minimum value:", min);
// console.log("Maximum value:", max);
// console.log("Sum of array values:", sum);

//  pattern print 
// 1
// 1 3
// 1 3 5 7
// 1 3 5 7 9
// let n=4;
// for (let i=1;i<=n;i++){
//     let row="";
//     for (let j=1;j<=2*i-1;j++){
//         if (j%2!=0){
//             row+=j+" ";
//         }
//     }
//     console.log(row);
// }

//  arrey meh se search krke agr h toh index print krna h else element not found usin g let search 
// let arr = [10, 25, 30, 45, 50, 60];
// let key = parseInt(prompt("Enter element to search:"));
// let found = false;

// for (let index in arr) {
//   if (arr[index] === key) {
//     console.log("Element found at index:", index);
//     found = true;
//     break;
//   }
// }

// if (!found) {
//   console.log("Element not found");
// }


// a=number(prompt("Enter a number:"));
// b=number(prompt("Enter another number:"));
// function add(a,b){
// //     console.log(a+b);
// // }
// // add(a,b);
// function multiply(a,b){
//    return (a*b);
// }
// function add(a,b){
//     return (a+b);
// }
// function subtract(a,b){
//     return (a-b);
// }
// function divide(a,b){
//         return (a/b);
// }

// let result=multiply(a,b);   
// console.log("Multiplication result:", result);
// let a=add(a,b);
// console.log("Addition result:", a);
// let s=subtract(a,b);
// console.log("Subtraction result:", s);
// let d=divide(a,b);
// console.log("Division result:", d);


// function st (name,age,marks){   
//     console.log(name,age,marks);
// }
// st(age=24,name="JAVA",marks=90);



// function sum(...numbers){
// let total=0;
// for (let n of numbers)   
//     {
//         total+=n;
//     }
//     console.log("Total:", total);
// }   
// sum (1,2,3,4,5);


// function sumall(){
//     let total=0;
//     for (let i=0;i<arguments.length;i++){
//         total+=arguments[i];
//     }
//     console.log("Total:", total);
//     return total;
// }  
// let x=sumall(1,2,3,4,5);



// function sumall(...numbers){
//     let total=0;
//     for (let n of numbers){
//         total+=n;
//     }
//     console.log("Total:", total);
//     return total;
// }
// let x=sumall(1,2,3,4,5,6,7,8,9,10);


// let msg ="Hello ";
// function show() {
//     console.log(msg);
// }
// show();
// console.log(msg);


// calcute for 5-6 numbers and print sum and product

// let num1 = Number(prompt("Enter first number:"));
// let num2 = Number(prompt("Enter second number:"));
// let num3 = Number(prompt("Enter third number:"));
// let num4 = Number(prompt("Enter fourth number:"));
// let num5 = Number(prompt("Enter fifth number:"));

// function calculate(...numbers) {
//     let sum = 0;
//     let product = 1;
//     for (let n of numbers) {
//         sum += n;
//         product *= n;
//     }
//     console.log("Sum:", sum);
//     console.log("Product:", product);
// }
// calculate(num1, num2, num3, num4, num5);



// function changeValue(x) {
//     x=x+20;
//     console.log("Value of x inside function:", x);
// }
// let num=10;
// changeValue(num);
// console.log("Outside function:", num);


// let arr =[1,2,3,4,5];
// console.log("before ", arr);
// function doubleArray(a){
//     for (let i=0;i<a.length;i++){
//         a[i]=a[i]*2;
//     }
// }
// doubleArray(arr);
// console.log("after ", arr);


// swap 2 numbers
// function swap(a,b){
//     let temp=a;
//     a=b;

//     b=temp;
//     console.log("Inside function: a =", a, "b =", b);
// }
// let num1=10;
// let num2=20;
// console.log("Before swap: num1 =", num1, "num2 =", num2);
// swap(num1,num2);
// console.log("After swap: num1 =", num1, "num2 =", num2);


//recursion
// function factorial(n){
//     if (n==0 || n==1){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// let num=5;
// console.log("Factorial of", num, "is", factorial(num));


//n even nu 
// function sumEven(n){
//     if (n===0){
//         return 2;
//     }
//     return 2*n+sumEven(n-1);
// }
// let n=5;
// console.log("Sum of first", n, "even numbers is", sumEven(n));


// fibonacci series upto 21 
// function fibonacci(n){
//     if (n==0){
//         return 0;
//     }
//     else if (n==1){
//         return 1;
//     }
//     return fibonacci(n-1)+fibonacci(n-2);
// }
// let n=9;
// console.log("Fibonacci series up to", n, ":");
// for (let i=0;i<n;i++){
//     console.log(fibonacci(i));
// }


// let sq = (x) => x*x;
// console.log(sq(5));
//  even or odd using arrow function  

// using for loop
// let check= (num) => {
//     if (num % 2 === 0) {
//         return "Even";   
//     } else {
//         return "Odd";    
//     }
// };
// let number = Number(prompt("Enter a number:"));
// console.log(number, "is", check(number));


// print reverse of a no using arrow function
// let reverse = (num) => {
//     let rev = 0;
//     while (num > 0) {
//         let digit = num % 10;
//         rev = rev * 10 + digit;
//         num = Math.floor(num / 10);
//     }   
//     return rev;
// };
// let number = Number(prompt("Enter a number:"));
// console.log("Reverse of", number, "is", reverse(number));


// palindrome using arrow function
// let isPalindrome = (num) => {
//     let originalNum = num;
//     let rev = 0;
//     while (num > 0) {
//         let digit = num % 10;
//         rev = rev * 10 + digit;
//         num = Math.floor(num / 10);
//     }
//     return originalNum === rev;
// };
// let number = Number(prompt("Enter a number:"));
// if (isPalindrome(number)) {
//     console.log(number, "is a palindrome number.");
// } else {
//     console.log(number, "is not a palindrome number.");
// }


// filter fxn is used to filter elements from an array based on a condition and return a new array with the filtered elements.

// let arr=[1,2,3,4,5,6];
// let evenNumbers=arr.filter(num => num%2===0);
// return arr%2===0;
// console.log(evenNumbers);


// sorting 
// let arr=[5,2,9,1,5,6];
// arr.sort((a,b) => a-b);
// return a-b;
// console.log(arr);

// map 
// let arr=[1,2,3,4,5];
// let squared=arr.map(function(num){
// return num*num;}); 
// console.log(squared);

// reduce
// let arr=[1,2,3,4,5];
// let sum=arr.reduce(function(accumulator,currentValue){
// return accumulator+currentValue;},0);
// console.log(sum);


// filter value greater than 40 from array
// let arr=[40,30,50,36];
// let filtered=arr.filter(num => num>=40);
// console.log(filtered);


//  find max and mini form arr using reduce using accumulator 
// let arr=[10,20,5,15,30];
// let min number.reduce((min,current) => current<min ? current : min);
// console.log("Minimum value:", min);
// let max=arr.reduce((max,current) => current>max ? current : max);
// console.log("Maximum value:", max);


// check prime or not prime using ternary 
// num = number(prompt("Enter a number:"));
// function isPrime(num) {
//     for (let i =2 ; i<num ;i++){
//         if (num % i === 0) {
//             return "Not Prime";
//         }   
//     }
//     return "Prime";
// }
// console.log(isPrime(num));

// // max of 3 num suing function expression
// let a=Number(prompt("Enter first number:"));
// let b=Number(prompt("Enter second number:"));
// let c=Number(prompt("Enter third number:"));
// let max = (a > b && a > c) ? a : (b > c) ? b : c;
// console.log("Maximum number is:", max);

// // min of 3 num 
// let a=Number(prompt("Enter first number:"));
// let b=Number(prompt("Enter second number:"));
// let c=Number(prompt("Enter third number:"));
// let min = (a < b && a < c) ? a : (b < c) ? b : c;
// console.log("Minimum number is:", min);