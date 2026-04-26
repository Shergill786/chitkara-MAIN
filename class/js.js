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



// string

// | Function        | Description             |
// | --------------- | ----------------------- |
// | `charAt()`      | Character at index      |
// | `charCodeAt()`  | Unicode of character    |
// | `concat()`      | Join strings            |
// | `includes()`    | Check if string exists  |
// | `indexOf()`     | Position of substring   |
// | `lastIndexOf()` | Last position           |
// | `slice()`       | Extract part            |
// | `substring()`   | Extract substring       |
// | `replace()`     | Replace text            |
// | `replaceAll()`  | Replace all matches     |
// | `split()`       | Convert to array        |
// | `toUpperCase()` | Uppercase               |
// | `toLowerCase()` | Lowercase               |
// | `trim()`        | Remove spaces           |
// | `startsWith()`  | Check beginning         |
// | `endsWith()`    | Check ending            |
// | `repeat()`      | Repeat string           |
// | `padStart()`    | Add characters at start |
// | `padEnd()`      | Add characters at end   |

// Character at index
// let text = "JavaScript";
// console.log(text.charAt(4));
// output is "S"
    
// Unicode of character
// let text = "A";
// console.log(text.charCodeAt(0));
// output is 65

// Join strings
// let a = "Hello";
// let b = "World";
// let result = a.concat(" ", b);
// console.log(result);
// output is "Hello World"

// Check if string exists
// let text = "JavaScript";
// console.log(text.includes("Script"));
// output is true

// Position of substring
// let text = "JavaScript";
// console.log(text.indexOf("a"));
// output is 1

// Last position
// let text = "banana";
// console.log(text.lastIndexOf("a"));
// output is 5

// Extract part
// let text = "JavaScript";
// console.log(text.slice(0,4));
// output is "Java"

// Extract substring
// let text = "JavaScript";
// console.log(text.substring(4,10));
// output is "Script"

// Replace text
// let text = "Hello World";
// let result = text.replace("World", "JavaScript");
// console.log(result);
// output is "Hello JavaScript"

// Replace all matches
// let text = "apple apple apple";
// console.log(text.replaceAll("apple","mango"));
// output is "mango mango mango"

// Convert to array
// let text = "a,b,c";
// console.log(text.split(","));
// output is ["a", "b", "c"]

// Uppercase
// let text = "javascript";
// console.log(text.toUpperCase());
// output is "JAVASCRIPT"

// Lowercase
// let text = "JAVASCRIPT";
// console.log(text.toLowerCase());
// output is "javascript"

// Remove spaces
// let text = "   hello   ";
// console.log(text.trim());
// output is "hello"

// Check beginning
// let text = "JavaScript";
// console.log(text.startsWith("Java"));
// output is true

// Check ending
// let text = "JavaScript";
// console.log(text.endsWith("Script"));    
// output is true

// Add characters at start
// let text = "5";
// console.log(text.padStart(3, "0"));
// output is "005"

// Add characters at end
// let text = "5";
// console.log(text.padEnd(3, "0"));
// output is "500"

// Repeat string
// let text = "Hi ";
// console.log(text.repeat(3));
// output is "Hi Hi Hi"

// string length
// let text = "JavaScript";
// console.log(text.length);
// output is 10



// objects 

// | Function           | Description                        |
// | ------------------ | ---------------------------------- |
// | `Object.keys()`    | Get object keys                    |
// | `Object.values()`  | Get object values                  |
// | `Object.entries()` | Key-value pairs                    |
// | `Object.assign()`  | Copy objects                       |
// | `Object.freeze()`  | Prevent changes                    |
// | `Object.seal()`    | Prevent adding/removing properties |

// const person = {
//     name: "John",
//     age: 25,
//     city: "Delhi"
//   };
//   console.log(person);

// console.log(person.name);
// console.log(person["age"]);

// person.age = 30;
// console.log(person.age);

// delete person.city;
// console.log(person);

// const obj = { a: 1, b: 2, c: 3 };
// console.log(Object.keys(obj));

// const obj = { a: 1, b: 2, c: 3 };
// console.log(Object.values(obj));

// const obj = { a: 1, b: 2 };
// console.log(Object.entries(obj));

// const person = {
//     name: "John",
//     age: 25
//   };
//   for (let key in person) {
//     console.log(key, person[key]);
//   }



// arrays 

// | Function        | Description                                        |
// | --------------- | -------------------------------------------------- |
// | `filter()`      | Returns elements that satisfy a condition          |
// | `map()`         | Creates a new array by transforming elements       |
// | `forEach()`     | Executes a function for each element               |
// | `reduce()`      | Reduces array to a single value                    |
// | `find()`        | Returns first element matching condition           |
// | `findIndex()`   | Returns index of matching element                  |
// | `some()`        | Checks if at least one element satisfies condition |
// | `every()`       | Checks if all elements satisfy condition           |
// | `includes()`    | Checks if element exists                           |
// | `indexOf()`     | Returns index of element                           |
// | `lastIndexOf()` | Returns last index of element                      |
// | `push()`        | Adds element at end                                |
// | `pop()`         | Removes last element                               |
// | `shift()`       | Removes first element                              |
// | `unshift()`     | Adds element at beginning                          |
// | `slice()`       | Returns part of array                              |
// | `splice()`      | Adds/removes elements                              |
// | `concat()`      | Combines arrays                                    |
// | `join()`        | Converts array to string                           |
// | `sort()`        | Sorts array                                        |
// | `reverse()`     | Reverses array                                     |
// | `flat()`        | Flattens nested arrays                             |
// | `flatMap()`     | map() + flat()                                     |

// let fruits = ["Apple", "Banana", "Mango"];
// console.log(fruits);

// let fruits = ["Apple", "Banana", "Mango"];
// console.log(fruits[0]);

// let fruits = ["Apple", "Banana", "Mango"];
// console.log(fruits.length);

// let fruits = ["Apple", "Banana"];
// fruits.push("Mango");
// console.log(fruits);

// let fruits = ["Apple", "Banana", "Mango"];
// fruits.pop();
// console.log(fruits);

// let fruits = ["Apple", "Banana", "Mango"];
// fruits.shift();
// console.log(fruits);

// let fruits = ["Banana", "Mango"];
// fruits.unshift("Apple");
// console.log(fruits);

// let fruits = ["Apple", "Banana", "Mango"];
// console.log(fruits.indexOf("Banana"));

// let fruits = ["Apple", "Banana", "Mango"];
// console.log(fruits.includes("Mango"));

// let nums = [1,2,3,4,5];
// console.log(nums.slice(1,4));

// let nums = [1,2,3,4];
// nums.splice(2,1);
// console.log(nums);

// let a = [1,2];
// let b = [3,4];
// let result = a.concat(b);
// console.log(result);

// let fruits = ["Apple","Banana","Mango"];
// console.log(fruits.join(", "));

// let nums = [1,2,3,4]
// nums.reverse();
// console.log(nums);

// let nums = [4,2,1,3];
// nums.sort();
// console.log(nums);

// let nums = [1,2,3];
// let result = nums.map(n => n*2);
// console.log(result);

// let nums = [1,2,3,4,5];
// let result = nums.filter(n => n > 2);
// console.log(result);

// let nums = [1,2,3,4];
// let sum = nums.reduce((a,b)=>a+b);
// console.log(sum);

// let nums = [1,2,3];
// nums.forEach(n => console.log(n));

// let nums = [10,20,30];
// for (let num of nums) {
//   console.log(num);
// }



// maths fxns

// | Function        | Description                |
// | --------------- | -------------------------- |
// | `Math.abs()`    | Absolute value             |
// | `Math.ceil()`   | Round up                   |
// | `Math.floor()`  | Round down                 |
// | `Math.round()`  | Round nearest              |
// | `Math.trunc()`  | Remove decimals            |
// | `Math.sqrt()`   | Square root                |
// | `Math.cbrt()`   | Cube root                  |
// | `Math.pow()`    | Power                      |
// | `Math.max()`    | Largest number             |
// | `Math.min()`    | Smallest number            |
// | `Math.random()` | Random number              |
// | `Math.sign()`   | Check positive or negative |
// | `Math.log()`    | Natural logarithm          |
// | `Math.log10()`  | Base-10 log                |

// console.log(Math.abs(-10));
// console.log(Math.ceil(4.2));
// console.log(Math.floor(4.8));
// console.log(Math.round(4.5));
// console.log(Math.trunc(4.9));
// console.log(Math.sqrt(16));
// console.log(Math.cbrt(27));
// console.log(Math.pow(2,3));
// console.log(Math.max(1,5,3));
// console.log(Math.min(1,5,3));
// console.log(Math.random());
// console.log(Math.sign(-5));
// console.log(Math.log(10));
// console.log(Math.log10(100));



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

// const arr=[1,2,3];
// arr[6]=7;
// console.log(typeof arr);


