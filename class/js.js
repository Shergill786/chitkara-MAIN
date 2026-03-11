// let a = 10;
// let b = 5;

// console.log(a + b); // Arithmetic
// console.log(a - b); // Arithmetic
// console.log(a * b); // Arithmetic
// console.log(a / b); // Arithmetic
// console.log(a % b); // Arithmetic
// console.log(a < b); // Comparison
// console.log(a > b); // Comparison
// console.log(a == b); // Comparison
// console.log(a != b); // Comparison
// console.log(a >= b); // Comparison
// console.log(a <= b); // Comparison
// console.log(a > 5 || b < 10); // Logical
// console.log(a > 5 && b < 10); // Logical
// let result = (a > b) ? "A is greater" : "B is greater";
// console.log(result);

// let day = 3;

// switch(day) {
//     case 1:
//         console.log("Monday");
//         break;
//     case 2:
//         console.log("Tuesday");
//         break;
//     case 3:
//         console.log("Wednesday");
//         break;
//     default:
//         console.log("Invalid day");
// }




// strings
// let str1 = "Hello"; 

// string length
// console.log(str1.length);

// string indexing
// console.log(str1[0]); 

// template literals
// let name = "Alice";
// let age = 30;
// let greeting = `Hello, ${name} Your age is ${age}.`;
// console.log(greeting);

// string methods

// string uppercase
// str.toUpperCase();

// let str = "Hello World";
// console.log(str.toUpperCase());


// string lowercase
// str.toLowerCase();

// let str = "Hello World";
// console.log(str.toLowerCase());


// string trim (to remove whitespace)
// str.trim();

// let str = "   Hello World   ";
// console.log(str.trim());


// string slice (returns a part of the string)
// str.slice(start, end?);

// let str = "Hello World";
// console.log(str.slice(0, 5)); // Output: Hello
// console.log(str.slice(6)); // Output: World


// string concatination (joins two strings)
// str.concat(str1);
// str + str1;
// let str1 = "Hello";
// let str2 = "World";
// console.log(str1.concat(" ", str2));


// string replace 
// str.replace(searchValue, newValue);

// let str = "Hello World";
// console.log(str.replace("World", "JavaScript")); // Output: Hello JavaScript


// string



// function reverse(inputstring){
//     let res="";
//     for (i=inputstring.length-1;i>=0;i--){
//         console.log(inputstring[i])
        
//         res+=inputstring[i];
//     }
//     console.log(res);
// }
// reverse("hello")


// function factorial(input){
//     let result=1;
//     for (i=1;i<=input;i++){
//         result*=i;
//     }
//     console.log(result);
// }
// factorial(4)


// function leapyr(input){
//     if (input % 4 == 0){
//         return true;
//     }
//     else{
//     return false ;
//     }
// }

// console.log(leapyr(2000))


// function sum(input){
//     const string = input.toString();
//     const list = string.split('');
//     let sum =0;
//     list.forEach(num=>{
//     sum=sum+parseInt(num) ;
//     })
//     return sum;
// }
// console.log(sum(43))

// function sum(input){
//     const string = input.toString();
//     const list = string.split('');
//     let sum =0;
//     list.forEach(num=>{
//         sum=sum+parseInt(num);
//     })
//     return sum;
// }
// console.log(sum(567))


// function biggestnumber (array){
//     let biggest = array[0];
//     for (i=1;i<array.length;i++){
//         if (array[i]>biggest){
//             biggest=array[i];
//         }
//     }
//     return biggest;
// }
// console.log(biggestnumber ([1,2,3,5]));

// function biggest(array){
//     let biggest=array[0];
//     for (i=1;i<array.length;i++){
//         if (biggest<array[i]){
//             biggest=array[i];
//         }
//     }
//     return biggest;
// }
// console.log(biggest([1,2,3,4]))
