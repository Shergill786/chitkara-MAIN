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
