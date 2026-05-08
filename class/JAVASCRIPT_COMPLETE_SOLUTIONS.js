// // SECTION 1: OPERATORS & EXPRESSIONS

// function s1_easy_1() {
//     console.log("Q1.1: Arithmetic Operators");
//     let a = 10, b = 3;
//     console.log(`Addition: ${a + b}`);
//     console.log(`Subtraction: ${a - b}`);
//     console.log(`Multiplication: ${a * b}`);
//     console.log(`Division: ${a / b}`);
//     console.log(`Modulus: ${a % b}`);
// }

// function s1_easy_2() {
//     console.log("Q1.2: Even or Odd");
//     let num = 25;
//     console.log(`${num} is ${num % 2 === 0 ? "EVEN" : "ODD"}`);
// }

// function s1_easy_3() {
//     console.log("Q1.3: Relational Operators");
//     let a = 5, b = 10;
//     console.log(`a < b: ${a < b}`);
//     console.log(`a > b: ${a > b}`);
//     console.log(`a === b: ${a === b}`);
// }

// function s1_easy_4() {
//     console.log("Q1.4: Logical Operators");
//     let x = true, y = false;
//     console.log(`x && y: ${x && y}`);
//     console.log(`x || y: ${x || y}`);
//     console.log(`!x: ${!x}`);
// }

// function s1_easy_5() {
//     console.log("Q1.5: Ternary Operator");
//     let a = 15, b = 10;
//     let max = (a > b) ? a : b;
//     console.log(`Max of ${a} and ${b} is ${max}`);
// }

// function s1_medium_6() {
//     console.log("Q1.6: Nested Ternary");
//     let p = 20, q = 55, r = 30;
//     let largest = (p > q) ? ((p > r) ? p : r) : ((q > r) ? q : r);
//     console.log(`Largest: ${largest}`);
// }

// function s1_medium_7() {
//     console.log("Q1.7: Assignment Operators");
//     let num = 10;
//     num += 5;
//     console.log(`After += 5: ${num}`);
//     num -= 3;
//     console.log(`After -= 3: ${num}`);
// }

// function s1_hard_8() {
//     console.log("Q1.8: Loose vs Strict Equality");
//     let a = 5, b = "5";
//     console.log(`a == b (loose): ${a == b}`);
//     console.log(`a === b (strict): ${a === b}`);
// }
//     let x = 5;
//     console.log(`Initial: x = ${x}`);
//     console.log(`x++: ${x++} (post-increment)`);
//     console.log(`After x++: x = ${x}`);
//     console.log(`++x: ${++x} (pre-increment)`);
//     let y = 10;
//     console.log(`y--: ${y--} (post-decrement)`);
//     console.log(`After y--: y = ${y}`);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 2: CONTROL FLOW - CONDITIONALS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q2.1: Check if number is positive, negative, or zero */
// function s2_easy_1() {
//     console.log("\n=== Q2.1: Positive/Negative/Zero Check ===");
//     let num = -15;
//     if (num > 0)
//         console.log(`${num} is POSITIVE`);
//     else if (num < 0)
//         console.log(`${num} is NEGATIVE`);
//     else
//         console.log(`${num} is ZERO`);
// }

// /* Q2.2: Check voting eligibility */
// function s2_easy_2() {
//     console.log("\n=== Q2.2: Voting Eligibility ===");
//     let age = 22;
//     if (age >= 18)
//         console.log(`Age ${age}: ELIGIBLE to vote`);
//     else
//         console.log(`Age ${age}: NOT eligible to vote`);
// }

// /* Q2.3: Find largest of 3 numbers using if-else */
// function s2_medium_3() {
//     console.log("\n=== Q2.3: Largest of 3 Numbers ===");
//     let x = 45, y = 23, z = 67;
//     if (x >= y && x >= z)
//         console.log(`Largest: ${x}`);
//     else if (y >= x && y >= z)
//         console.log(`Largest: ${y}`);
//     else
//         console.log(`Largest: ${z}`);
// }

// /* Q2.4: Simple calculator using switch */
// function s2_medium_4() {
//     console.log("\n=== Q2.4: Simple Calculator (Switch) ===");
//     let a = 10, b = 5;
//     let op = '+';
//     switch (op) {
//         case '+': console.log(`${a} + ${b} = ${a + b}`); break;
//         case '-': console.log(`${a} - ${b} = ${a - b}`); break;
//         case '*': console.log(`${a} * ${b} = ${a * b}`); break;
//         case '/': console.log(`${a} / ${b} = ${a / b}`); break;
//         default: console.log("Invalid operator");
//     }
// }

// /* Q2.5: Grade system using else-if ladder */
// function s2_hard_5() {
//     console.log("\n=== Q2.5: Grade System ===");
//     let marks = 78;
//     let grade;
//     if (marks >= 90) grade = 'A';
//     else if (marks >= 80) grade = 'B';
//     else if (marks >= 70) grade = 'C';
//     else if (marks >= 60) grade = 'D';
//     else grade = 'F';
//     console.log(`Marks: ${marks} | Grade: ${grade}`);
// }

// /* Q2.6: Switch with fall-through and default */
// function s2_hard_6() {
//     console.log("\n=== Q2.6: Day of Week (Switch) ===");
//     let day = 3;
//     let dayName;
//     switch (day) {
//         case 1: dayName = "Monday"; break;
//         case 2: dayName = "Tuesday"; break;
//         case 3: dayName = "Wednesday"; break;
//         case 4: dayName = "Thursday"; break;
//         case 5: dayName = "Friday"; break;
//         case 6: dayName = "Saturday"; break;
//         case 7: dayName = "Sunday"; break;
//         default: dayName = "Invalid day";
//     }
//     console.log(`Day ${day} is ${dayName}`);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 3: CONTROL FLOW - LOOPS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q3.1: Print numbers 1–10 using for loop */
// function s3_easy_1() {
//     console.log("\n=== Q3.1: Print Numbers 1-10 (For Loop) ===");
//     let result = "";
//     for (let i = 1; i <= 10; i++)
//         result += i + " ";
//     console.log(result);
// }

// /* Q3.2: Print multiplication table */
// function s3_easy_2() {
//     console.log("\n=== Q3.2: Multiplication Table (5) ===");
//     for (let i = 1; i <= 10; i++)
//         console.log(`5 × ${i} = ${5 * i}`);
// }

// /* Q3.3: While loop - factorial */
// function s3_medium_3() {
//     console.log("\n=== Q3.3: Factorial Using While Loop ===");
//     let n = 5, fact = 1;
//     let i = 1;
//     while (i <= n) {
//         fact *= i;
//         i++;
//     }
//     console.log(`5! = ${fact}`);
// }

// /* Q3.4: Do-while loop - print numbers */
// function s3_medium_4() {
//     console.log("\n=== Q3.4: Do-While Loop ===");
//     let i = 1;
//     let result = "";
//     do {
//         result += i + " ";
//         i++;
//     } while (i <= 5);
//     console.log(result);
// }

// /* Q3.5: for...in loop - iterate object keys */
// function s3_medium_5() {
//     console.log("\n=== Q3.5: for...in Loop (Object Keys) ===");
//     let student = { name: "John", age: 20, grade: "A" };
//     for (let key in student)
//         console.log(`${key}: ${student[key]}`);
// }

// /* Q3.6: for...of loop - iterate array values */
// function s3_hard_6() {
//     console.log("\n=== Q3.6: for...of Loop (Array Values) ===");
//     let arr = [10, 20, 30, 40, 50];
//     let result = "";
//     for (let value of arr)
//         result += value + " ";
//     console.log(result);
// }

// /* Q3.7: Break and continue statements */
// function s3_hard_7() {
//     console.log("\n=== Q3.7: Break & Continue ===");
//     let result = "";
//     for (let i = 1; i <= 10; i++) {
//         if (i === 5) continue;
//         if (i === 8) break;
//         result += i + " ";
//     }
//     console.log(result);
// }

// /* Q3.8: Nested loops - print triangle pattern */
// function s3_hard_8() {
//     console.log("\n=== Q3.8: Triangle Pattern (Nested Loops) ===");
//     for (let i = 1; i <= 5; i++) {
//         let row = "";
//         for (let j = 1; j <= i; j++)
//             row += "* ";
//         console.log(row);
//     }
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 4: CONSOLE METHODS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q4.1: console.log() - basic output */
// function s4_easy_1() {
//     console.log("\n=== Q4.1: console.log() ===");
//     console.log("Hello World");
//     console.log(42);
//     console.log(3.14);
//     console.log(true);
// }

// /* Q4.2: console.log() with multiple arguments */
// function s4_easy_2() {
//     console.log("\n=== Q4.2: console.log() Multiple Args ===");
//     console.log("Name:", "John", "Age:", 25, "Score:", 95.5);
// }

// /* Q4.3: console.warn() - warning messages */
// function s4_medium_3() {
//     console.log("\n=== Q4.3: console.warn() ===");
//     console.warn("This is a warning message");
//     console.warn("Be careful with this operation!");
// }

// /* Q4.4: console.error() - error messages */
// function s4_medium_4() {
//     console.log("\n=== Q4.4: console.error() ===");
//     console.error("An error occurred");
//     console.error("File not found!");
// }

// /* Q4.5: console.table() - display data in table format */
// function s4_hard_5() {
//     console.log("\n=== Q4.5: console.table() ===");
//     let data = [
//         { id: 1, name: "Alice", score: 95 },
//         { id: 2, name: "Bob", score: 87 },
//         { id: 3, name: "Charlie", score: 92 }
//     ];
//     console.table(data);
// }

// /* Q4.6: console.group() - group related logs */
// function s4_hard_6() {
//     console.log("\n=== Q4.6: console.group() ===");
//     console.group("User Information");
//     console.log("Name: John");
//     console.log("Age: 25");
//     console.log("Email: john@example.com");
//     console.groupEnd();
// }

// /* Q4.7: console.time() - measure execution time */
// function s4_hard_7() {
//     console.log("\n=== Q4.7: console.time() ===");
//     console.time("Loop Time");
//     let sum = 0;
//     for (let i = 0; i < 1000000; i++)
//         sum += i;
//     console.timeEnd("Loop Time");
//     console.log(`Sum: ${sum}`);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 5: ARRAYS & OBJECTS (REFERENCE TYPES)
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q5.1: Create and access array elements */
// function s5_easy_1() {
//     console.log("\n=== Q5.1: Array Creation & Access ===");
//     let arr = [10, 20, 30, 40, 50];
//     console.log("Array:", arr);
//     console.log("First element:", arr[0]);
//     console.log("Last element:", arr[arr.length - 1]);
// }

// /* Q5.2: Array methods - push, pop, shift, unshift */
// function s5_easy_2() {
//     console.log("\n=== Q5.2: Array Methods ===");
//     let arr = [1, 2, 3];
//     console.log("Original:", arr);
//     arr.push(4);
//     console.log("After push(4):", arr);
//     arr.pop();
//     console.log("After pop():", arr);
//     arr.unshift(0);
//     console.log("After unshift(0):", arr);
// }

// /* Q5.3: Create and access object properties */
// function s5_medium_3() {
//     console.log("\n=== Q5.3: Object Creation & Access ===");
//     let student = {
//         name: "John",
//         age: 20,
//         grade: "A",
//         city: "New York"
//     };
//     console.log("Object:", student);
//     console.log("Name:", student.name);
//     console.log("Age:", student["age"]);
// }

// /* Q5.4: Modify object properties */
// function s5_medium_4() {
//     console.log("\n=== Q5.4: Modify Object Properties ===");
//     let person = { name: "Alice", age: 25 };
//     console.log("Original:", person);
//     person.age = 26;
//     person.city = "Boston";
//     console.log("Modified:", person);
// }

// /* Q5.5: Array - find sum and average */
// function s5_hard_5() {
//     console.log("\n=== Q5.5: Array Sum & Average ===");
//     let arr = [10, 20, 30, 40, 50];
//     let sum = 0;
//     for (let num of arr)
//         sum += num;
//     console.log("Array:", arr);
//     console.log("Sum:", sum);
//     console.log("Average:", sum / arr.length);
// }

// /* Q5.6: Array - find max and min */
// function s5_hard_6() {
//     console.log("\n=== Q5.6: Array Max & Min ===");
//     let arr = [15, 42, 8, 56, 23];
//     let max = arr[0], min = arr[0];
//     for (let num of arr) {
//         if (num > max) max = num;
//         if (num < min) min = num;
//     }
//     console.log("Array:", arr);
//     console.log("Max:", max, "Min:", min);
// }

// /* Q5.7: Array methods - slice, splice, concat */
// function s5_hard_7() {
//     console.log("\n=== Q5.7: slice(), splice(), concat() ===");
//     let arr1 = [1, 2, 3, 4, 5];
//     console.log("Original:", arr1);
//     console.log("slice(1, 4):", arr1.slice(1, 4));
//     let arr2 = [...arr1];
//     arr2.splice(2, 1, 99);
//     console.log("After splice(2, 1, 99):", arr2);
//     let combined = arr1.concat([6, 7, 8]);
//     console.log("Concatenated:", combined);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 6-8: FUNCTIONS PART 1 (BASICS & ARGUMENTS)
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q6.1: Function to add two numbers */
// function s6_easy_1() {
//     console.log("\n=== Q6.1: Function - Add Two Numbers ===");
//     function add(x, y) {
//         return x + y;
//     }
//     console.log("add(10, 20) =", add(10, 20));
// }

// /* Q6.2: Function with default parameters */
// function s6_easy_2() {
//     console.log("\n=== Q6.2: Function with Default Parameters ===");
//     function greet(name = "Guest", age = 18) {
//         return `Hello ${name}, age ${age}`;
//     }
//     console.log(greet());
//     console.log(greet("John"));
//     console.log(greet("Alice", 25));
// }

// /* Q6.3: Function with variable length arguments (rest parameters) */
// function s6_medium_3() {
//     console.log("\n=== Q6.3: Variable Length Arguments (...args) ===");
//     function sum(...numbers) {
//         let total = 0;
//         for (let num of numbers)
//             total += num;
//         return total;
//     }
//     console.log("sum(1, 2, 3) =", sum(1, 2, 3));
//     console.log("sum(1, 2, 3, 4, 5) =", sum(1, 2, 3, 4, 5));
// }

// /* Q6.4: Passing arrays and objects (call by reference) */
// function s6_medium_4() {
//     console.log("\n=== Q6.4: Pass by Reference (Objects) ===");
//     function modifyArray(arr) {
//         arr[0] = 999;
//     }
//     let myArr = [1, 2, 3];
//     console.log("Before:", myArr);
//     modifyArray(myArr);
//     console.log("After:", myArr);
// }

// /* Q6.5: Recursive function - factorial */
// function s6_hard_5() {
//     console.log("\n=== Q6.5: Recursive Function - Factorial ===");
//     function factorial(n) {
//         if (n <= 1) return 1;
//         return n * factorial(n - 1);
//     }
//     console.log("5! =", factorial(5));
// }

// /* Q6.6: Recursive function - fibonacci */
// function s6_hard_6() {
//     console.log("\n=== Q6.6: Recursive Function - Fibonacci ===");
//     function fibonacci(n) {
//         if (n <= 1) return n;
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
//     console.log("fib(7) =", fibonacci(7));
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 7: SCOPE RULES & PASS BY VALUE/REFERENCE
// // ═══════════════════════════════════════════════════════════════════════════

// /* Global variable */
// let globalVar = 100;

// /* Q7.1: Global vs Local scope */
// function s7_easy_1() {
//     console.log("\n=== Q7.1: Global vs Local Scope ===");
//     let localVar = 50;
//     console.log("Local variable:", localVar);
//     console.log("Global variable:", globalVar);
//     function innerFunc() {
//         let innerVar = 25;
//         console.log("Inner variable:", innerVar);
//         console.log("Can access global:", globalVar);
//     }
//     innerFunc();
// }

// /* Q7.2: Demonstrate pass by value */
// function s7_easy_2() {
//     console.log("\n=== Q7.2: Pass by Value (Primitives) ===");
//     function modifyNum(num) {
//         num = 999;
//     }
//     let x = 10;
//     console.log("Before:", x);
//     modifyNum(x);
//     console.log("After:", x);
// }

// /* Q7.3: Demonstrate pass by reference */
// function s7_medium_3() {
//     console.log("\n=== Q7.3: Pass by Reference (Objects) ===");
//     function modifyObj(obj) {
//         obj.name = "Modified";
//         obj.age = 99;
//     }
//     let person = { name: "John", age: 25 };
//     console.log("Before:", person);
//     modifyObj(person);
//     console.log("After:", person);
// }

// /* Q7.4: Function scope - variables */
// function s7_medium_4() {
//     console.log("\n=== Q7.4: Function Scope ===");
//     let funcVar = "outside";
//     function testFunc() {
//         let funcVar = "inside";
//         console.log(funcVar);
//     }
//     console.log("Before call:", funcVar);
//     testFunc();
//     console.log("After call:", funcVar);
// }

// /* Q7.5: Block scope with let and const */
// function s7_hard_5() {
//     console.log("\n=== Q7.5: Block Scope (let vs var) ===");
//     if (true) {
//         let blockLet = "I'm block-scoped";
//         var blockVar = "I'm function-scoped";
//     }
//     console.log(blockVar);
//     try {
//         console.log(blockLet);
//     } catch (e) {
//         console.log("blockLet is not accessible outside block");
//     }
// }

// /* Q7.6: var vs let vs const */
// function s7_hard_6() {
//     console.log("\n=== Q7.6: var vs let vs const ===");
//     var varX = 1;
//     let letX = 2;
//     const constX = 3;
//     console.log("var can be reassigned");
//     varX = 10;
//     console.log("var:", varX);
//     console.log("let can be reassigned but block-scoped");
//     letX = 20;
//     console.log("let:", letX);
//     console.log("const cannot be reassigned (immutable reference)");
//     // constX = 30; // This would cause an error
//     console.log("const:", constX);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 8: RECURSIVE FUNCTIONS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q8.1: Recursive sum of array */
// function s8_easy_1() {
//     console.log("\n=== Q8.1: Recursive Array Sum ===");
//     function sumArray(arr, index = 0) {
//         if (index === arr.length) return 0;
//         return arr[index] + sumArray(arr, index + 1);
//     }
//     let arr = [1, 2, 3, 4, 5];
//     console.log("Array:", arr);
//     console.log("Sum:", sumArray(arr));
// }

// /* Q8.2: Recursive power function */
// function s8_easy_2() {
//     console.log("\n=== Q8.2: Recursive Power ===");
//     function power(base, exp) {
//         if (exp === 0) return 1;
//         return base * power(base, exp - 1);
//     }
//     console.log("power(2, 5) =", power(2, 5));
// }

// /* Q8.3: Recursive reverse string */
// function s8_medium_3() {
//     console.log("\n=== Q8.3: Recursive Reverse String ===");
//     function reverseString(str) {
//         if (str.length === 0) return "";
//         return reverseString(str.slice(1)) + str[0];
//     }
//     console.log("Original: 'Hello'");
//     console.log("Reversed:", reverseString("Hello"));
// }

// /* Q8.4: Recursive palindrome check */
// function s8_medium_4() {
//     console.log("\n=== Q8.4: Recursive Palindrome Check ===");
//     function isPalindrome(str, left = 0, right = str.length - 1) {
//         if (left >= right) return true;
//         if (str[left] !== str[right]) return false;
//         return isPalindrome(str, left + 1, right - 1);
//     }
//     console.log("'racecar' is palindrome:", isPalindrome("racecar"));
//     console.log("'hello' is palindrome:", isPalindrome("hello"));
// }

// /* Q8.5: Tower of Hanoi recursion */
// function s8_hard_5() {
//     console.log("\n=== Q8.5: Tower of Hanoi (3 Disks) ===");
//     function hanoi(n, src, dest, aux) {
//         if (n === 1) {
//             console.log(`Move disk 1 from ${src} to ${dest}`);
//             return;
//         }
//         hanoi(n - 1, src, aux, dest);
//         console.log(`Move disk ${n} from ${src} to ${dest}`);
//         hanoi(n - 1, aux, dest, src);
//     }
//     hanoi(3, 'A', 'C', 'B');
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 9-10: FUNCTION DECLARATIONS, EXPRESSIONS & ARROW FUNCTIONS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q9.1: Function declaration */
// function s9_easy_1() {
//     console.log("\n=== Q9.1: Function Declaration ===");
//     function multiply(a, b) {
//         return a * b;
//     }
//     console.log("multiply(5, 3) =", multiply(5, 3));
// }

// /* Q9.2: Function expression */
// function s9_easy_2() {
//     console.log("\n=== Q9.2: Function Expression ===");
//     const divide = function(a, b) {
//         return a / b;
//     };
//     console.log("divide(20, 4) =", divide(20, 4));
// }

// /* Q9.3: Anonymous function expression */
// function s9_medium_3() {
//     console.log("\n=== Q9.3: Anonymous Function Expression ===");
//     const square = function(x) {
//         return x * x;
//     };
//     console.log("square(5) =", square(5));
// }

// /* Q9.4: Arrow function - basic syntax */
// function s9_medium_4() {
//     console.log("\n=== Q9.4: Arrow Function - Basic Syntax ===");
//     const add = (a, b) => {
//         return a + b;
//     };
//     console.log("add(10, 20) =", add(10, 20));
// }

// /* Q9.5: Arrow function - concise syntax (single line return) */
// function s9_hard_5() {
//     console.log("\n=== Q9.5: Arrow Function - Concise Syntax ===");
//     const subtract = (a, b) => a - b;
//     const square = x => x * x;
//     const greet = () => "Hello World";
//     console.log("subtract(20, 5) =", subtract(20, 5));
//     console.log("square(7) =", square(7));
//     console.log("greet() =", greet());
// }

// /* Q9.6: Arrow function with implicit return */
// function s9_hard_6() {
//     console.log("\n=== Q9.6: Arrow Function Implicit Return ===");
//     const createObj = (name, age) => ({ name, age });
//     const obj = createObj("John", 25);
//     console.log("Object created:", obj);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 11: LEXICAL THIS IN ARROW FUNCTIONS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q10.1: Regular function vs arrow function this */
// function s10_easy_1() {
//     console.log("\n=== Q10.1: Lexical 'this' - Regular vs Arrow ===");
//     let obj = {
//         name: "Test Object",
//         regularFunc: function() {
//             console.log("Regular function - this.name:", this.name);
//         },
//         arrowFunc: () => {
//             console.log("Arrow function - this is global context");
//         }
//     };
//     obj.regularFunc();
//     obj.arrowFunc();
// }

// /* Q10.2: Arrow function inherits lexical this */
// function s10_medium_2() {
//     console.log("\n=== Q10.2: Arrow Function Lexical 'this' ===");
//     let person = {
//         name: "Alice",
//         greet: function() {
//             let arrow = () => {
//                 console.log(`Hi, I'm ${this.name}`);
//             };
//             arrow();
//         }
//     };
//     person.greet();
// }

// /* Q10.3: this in event handlers */
// function s10_hard_3() {
//     console.log("\n=== Q10.3: 'this' Binding ===");
//     let obj = {
//         value: 42,
//         getValue: function() {
//             return this.value;
//         }
//     };
//     console.log("obj.getValue():", obj.getValue());
//     let func = obj.getValue;
//     console.log("func() as standalone:", func()); // undefined (this is global)
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 12-13: SCOPING (GLOBAL, FUNCTION, BLOCK)
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q11.1: Global scope */
// let globalCount = 0;

// function s11_easy_1() {
//     console.log("\n=== Q11.1: Global Scope ===");
//     console.log("Global variable accessible:", globalCount);
//     globalCount++;
//     console.log("After increment:", globalCount);
// }

// /* Q11.2: Function scope encapsulation */
// function s11_easy_2() {
//     console.log("\n=== Q11.2: Function Scope ===");
//     function createCounter() {
//         let count = 0;
//         return {
//             increment: function() {
//                 count++;
//                 return count;
//             },
//             getCount: function() {
//                 return count;
//             }
//         };
//     }
//     let counter = createCounter();
//     console.log("First increment:", counter.increment());
//     console.log("Second increment:", counter.increment());
//     console.log("Current count:", counter.getCount());
// }

// /* Q11.3: Block scope with if statement */
// function s11_medium_3() {
//     console.log("\n=== Q11.3: Block Scope - if Statement ===");
//     let x = 10;
//     if (true) {
//         let x = 20;
//         console.log("Inside block:", x);
//     }
//     console.log("Outside block:", x);
// }

// /* Q11.4: Block scope with for loop */
// function s11_medium_4() {
//     console.log("\n=== Q11.4: Block Scope - for Loop ===");
//     for (let i = 0; i < 3; i++) {
//         console.log("Inside loop:", i);
//     }
//     try {
//         console.log("Outside loop:", i);
//     } catch (e) {
//         console.log("i is not accessible outside loop");
//     }
// }

// /* Q11.5: Module pattern using IIFE (Immediately Invoked Function Expression) */
// function s11_hard_5() {
//     console.log("\n=== Q11.5: Module Pattern (IIFE) ===");
//     let calculator = (function() {
//         let privateVar = 0;
//         return {
//             add: function(x) {
//                 privateVar += x;
//                 return privateVar;
//             },
//             subtract: function(x) {
//                 privateVar -= x;
//                 return privateVar;
//             },
//             getPrivate: function() {
//                 return privateVar;
//             }
//         };
//     })();
//     console.log("Add 5:", calculator.add(5));
//     console.log("Subtract 2:", calculator.subtract(2));
//     console.log("Private value:", calculator.getPrivate());
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 14: CLOSURES
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q12.1: Basic closure */
// function s12_easy_1() {
//     console.log("\n=== Q12.1: Basic Closure ===");
//     function outer(x) {
//         return function inner(y) {
//             return x + y;
//         };
//     }
//     let add5 = outer(5);
//     console.log("add5(10) =", add5(10));
//     console.log("add5(15) =", add5(15));
// }

// /* Q12.2: Closure with multiple levels */
// function s12_easy_2() {
//     console.log("\n=== Q12.2: Nested Closures ===");
//     function outer(a) {
//         return function middle(b) {
//             return function inner(c) {
//                 return a + b + c;
//             };
//         };
//     }
//     let result = outer(1)(2)(3);
//     console.log("outer(1)(2)(3) =", result);
// }

// /* Q12.3: Closure in loop */
// function s12_medium_3() {
//     console.log("\n=== Q12.3: Closure in Loop ===");
//     let functions = [];
//     for (let i = 0; i < 3; i++) {
//         functions.push(() => i);
//     }
//     console.log("Functions in array:");
//     functions.forEach((fn, index) => console.log(`Function ${index}: ${fn()}`));
// }

// /* Q12.4: Data privacy with closure */
// function s12_medium_4() {
//     console.log("\n=== Q12.4: Data Privacy (Closure) ===");
//     function createBankAccount(initialBalance) {
//         let balance = initialBalance;
//         return {
//             deposit: function(amount) {
//                 balance += amount;
//                 return balance;
//             },
//             withdraw: function(amount) {
//                 balance -= amount;
//                 return balance;
//             },
//             getBalance: function() {
//                 return balance;
//             }
//         };
//     }
//     let account = createBankAccount(1000);
//     console.log("Deposit 500:", account.deposit(500));
//     console.log("Withdraw 200:", account.withdraw(200));
//     console.log("Current balance:", account.getBalance());
// }

// /* Q12.5: Factory function with closure */
// function s12_hard_5() {
//     console.log("\n=== Q12.5: Factory Function with Closure ===");
//     function createMultiplier(factor) {
//         return function(number) {
//             return number * factor;
//         };
//     }
//     let double = createMultiplier(2);
//     let triple = createMultiplier(3);
//     console.log("double(5) =", double(5));
//     console.log("triple(5) =", triple(5));
// }

// /* Q12.6: Function memoization using closure */
// function s12_hard_6() {
//     console.log("\n=== Q12.6: Memoization (Closure) ===");
//     function memoize(fn) {
//         const cache = {};
//         return function(...args) {
//             const key = JSON.stringify(args);
//             if (key in cache) {
//                 console.log(`Cache hit for ${key}`);
//                 return cache[key];
//             }
//             console.log(`Computing for ${key}`);
//             const result = fn(...args);
//             cache[key] = result;
//             return result;
//         };
//     }
//     function expensiveFunc(n) {
//         let sum = 0;
//         for (let i = 0; i < n; i++) sum += i;
//         return sum;
//     }
//     let memoized = memoize(expensiveFunc);
//     console.log("First call(1000):", memoized(1000));
//     console.log("Second call(1000):", memoized(1000));
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 15-18: HIGHER-ORDER FUNCTIONS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q13.1: map() - transform array elements */
// function s13_easy_1() {
//     console.log("\n=== Q13.1: map() - Transform Array ===");
//     let numbers = [1, 2, 3, 4, 5];
//     let squared = numbers.map(n => n * n);
//     console.log("Original:", numbers);
//     console.log("Squared:", squared);
// }

// /* Q13.2: map() with objects */
// function s13_easy_2() {
//     console.log("\n=== Q13.2: map() with Objects ===");
//     let students = [
//         { name: "John", score: 85 },
//         { name: "Alice", score: 92 },
//         { name: "Bob", score: 78 }
//     ];
//     let names = students.map(s => s.name);
//     let scores = students.map(s => s.score);
//     console.log("Names:", names);
//     console.log("Scores:", scores);
// }

// /* Q13.3: filter() - select elements */
// function s13_medium_3() {
//     console.log("\n=== Q13.3: filter() - Select Elements ===");
//     let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
//     let evens = numbers.filter(n => n % 2 === 0);
//     let greater5 = numbers.filter(n => n > 5);
//     console.log("Original:", numbers);
//     console.log("Even numbers:", evens);
//     console.log("Numbers > 5:", greater5);
// }

// /* Q13.4: filter() with objects */
// function s13_medium_4() {
//     console.log("\n=== Q13.4: filter() with Objects ===");
//     let students = [
//         { name: "John", score: 85, passed: true },
//         { name: "Alice", score: 92, passed: true },
//         { name: "Bob", score: 45, passed: false }
//     ];
//     let passed = students.filter(s => s.passed);
//     let highScores = students.filter(s => s.score >= 85);
//     console.log("Passed students:", passed.map(s => s.name));
//     console.log("High scores:", highScores.map(s => s.name));
// }

// /* Q13.5: reduce() - accumulate values */
// function s13_hard_5() {
//     console.log("\n=== Q13.5: reduce() - Accumulate Values ===");
//     let numbers = [1, 2, 3, 4, 5];
//     let sum = numbers.reduce((acc, n) => acc + n, 0);
//     let product = numbers.reduce((acc, n) => acc * n, 1);
//     console.log("Numbers:", numbers);
//     console.log("Sum:", sum);
//     console.log("Product:", product);
// }

// /* Q13.6: reduce() - transform to object */
// function s13_hard_6() {
//     console.log("\n=== Q13.6: reduce() - Transform to Object ===");
//     let students = [
//         { name: "John", score: 85 },
//         { name: "Alice", score: 92 },
//         { name: "Bob", score: 78 }
//     ];
//     let scoreMap = students.reduce((acc, s) => {
//         acc[s.name] = s.score;
//         return acc;
//     }, {});
//     console.log("Score map:", scoreMap);
// }

// /* Q14.1: sort() - ascending order */
// function s14_easy_1() {
//     console.log("\n=== Q14.1: sort() - Ascending Order ===");
//     let numbers = [64, 34, 25, 12, 22];
//     let sorted = [...numbers].sort((a, b) => a - b);
//     console.log("Original:", numbers);
//     console.log("Sorted ascending:", sorted);
// }

// /* Q14.2: sort() - descending order */
// function s14_easy_2() {
//     console.log("\n=== Q14.2: sort() - Descending Order ===");
//     let numbers = [64, 34, 25, 12, 22];
//     let sorted = [...numbers].sort((a, b) => b - a);
//     console.log("Original:", numbers);
//     console.log("Sorted descending:", sorted);
// }

// /* Q14.3: sort() - strings */
// function s14_medium_3() {
//     console.log("\n=== Q14.3: sort() - Strings ===");
//     let words = ["zebra", "apple", "mango", "banana"];
//     let sorted = [...words].sort();
//     console.log("Original:", words);
//     console.log("Sorted:", sorted);
// }

// /* Q14.4: sort() - objects by property */
// function s14_medium_4() {
//     console.log("\n=== Q14.4: sort() - Objects by Property ===");
//     let students = [
//         { name: "John", score: 85 },
//         { name: "Alice", score: 92 },
//         { name: "Bob", score: 78 }
//     ];
//     let sorted = [...students].sort((a, b) => b.score - a.score);
//     console.log("Sorted by score (descending):");
//     sorted.forEach(s => console.log(`${s.name}: ${s.score}`));
// }

// /* Q14.5: Chaining map, filter, reduce */
// function s14_hard_5() {
//     console.log("\n=== Q14.5: Chaining Higher-Order Functions ===");
//     let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
//     let result = numbers
//         .filter(n => n % 2 === 0)        // Get evens
//         .map(n => n * n)                  // Square them
//         .reduce((sum, n) => sum + n, 0);  // Sum them
//     console.log("Evens:", [2, 4, 6, 8, 10]);
//     console.log("Squared:", [4, 16, 36, 64, 100]);
//     console.log("Sum:", result);
// }

// /* Q14.6: find() and findIndex() */
// function s14_hard_6() {
//     console.log("\n=== Q14.6: find() & findIndex() ===");
//     let students = [
//         { name: "John", score: 85 },
//         { name: "Alice", score: 92 },
//         { name: "Bob", score: 78 }
//     ];
//     let found = students.find(s => s.score > 90);
//     let index = students.findIndex(s => s.name === "Bob");
//     console.log("Student with score > 90:", found);
//     console.log("Index of Bob:", index);
// }

// /* Q14.7: forEach() and every() */
// function s14_hard_7() {
//     console.log("\n=== Q14.7: forEach() & every() ===");
//     let numbers = [2, 4, 6, 8, 10];
//     console.log("Using forEach:");
//     numbers.forEach((n, i) => console.log(`  Index ${i}: ${n}`));
//     let allEven = numbers.every(n => n % 2 === 0);
//     console.log("All even:", allEven);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // MAIN MENU & EXECUTION
// // ═══════════════════════════════════════════════════════════════════════════

// // Function to run all sections
// function runAllSections() {
//     console.clear();
//     console.log("╔════════════════════════════════════════════════════════════╗");
//     console.log("║     JAVASCRIPT COMPLETE SOLUTIONS - ALL SECTIONS          ║");
//     console.log("╚════════════════════════════════════════════════════════════╝");

//     // Section 1: Operators
//     s1_easy_1();
//     s1_easy_2();
//     s1_easy_3();
//     s1_easy_4();
//     s1_easy_5();
//     s1_medium_6();
//     s1_medium_7();
//     s1_hard_8();
//     s1_hard_9();

//     // Section 2: Control Flow - Conditionals
//     s2_easy_1();
//     s2_easy_2();
//     s2_medium_3();
//     s2_medium_4();
//     s2_hard_5();
//     s2_hard_6();

//     // Section 3: Control Flow - Loops
//     s3_easy_1();
//     s3_easy_2();
//     s3_medium_3();
//     s3_medium_4();
//     s3_medium_5();
//     s3_hard_6();
//     s3_hard_7();
//     s3_hard_8();

//     // Section 4: Console Methods
//     s4_easy_1();
//     s4_easy_2();
//     s4_medium_3();
//     s4_medium_4();
//     s4_hard_5();
//     s4_hard_6();
//     s4_hard_7();

//     // Section 5: Arrays & Objects
//     s5_easy_1();
//     s5_easy_2();
//     s5_medium_3();
//     s5_medium_4();
//     s5_hard_5();
//     s5_hard_6();
//     s5_hard_7();

//     // Section 6: Functions - Basics
//     s6_easy_1();
//     s6_easy_2();
//     s6_medium_3();
//     s6_medium_4();
//     s6_hard_5();
//     s6_hard_6();

//     // Section 7: Scope & Pass by Value/Reference
//     s7_easy_1();
//     s7_easy_2();
//     s7_medium_3();
//     s7_medium_4();
//     s7_hard_5();
//     s7_hard_6();

//     // Section 8: Recursive Functions
//     s8_easy_1();
//     s8_easy_2();
//     s8_medium_3();
//     s8_medium_4();
//     s8_hard_5();

//     // Section 9: Function Declarations & Expressions
//     s9_easy_1();
//     s9_easy_2();
//     s9_medium_3();
//     s9_medium_4();
//     s9_hard_5();
//     s9_hard_6();

//     // Section 10: Lexical this
//     s10_easy_1();
//     s10_medium_2();
//     s10_hard_3();

//     // Section 11: Scoping
//     s11_easy_1();
//     s11_easy_2();
//     s11_medium_3();
//     s11_medium_4();
//     s11_hard_5();

//     // Section 12: Closures
//     s12_easy_1();
//     s12_easy_2();
//     s12_medium_3();
//     s12_medium_4();
//     s12_hard_5();
//     s12_hard_6();

//     // Section 13-14: Higher-Order Functions
//     s13_easy_1();
//     s13_easy_2();
//     s13_medium_3();
//     s13_medium_4();
//     s13_hard_5();
//     s13_hard_6();
//     s14_easy_1();
//     s14_easy_2();
//     s14_medium_3();
//     s14_medium_4();
//     s14_hard_5();
//     s14_hard_6();
//     s14_hard_7();

//     console.log("\n╔════════════════════════════════════════════════════════════╗");
//     console.log("║              ALL SECTIONS COMPLETED                       ║");
//     console.log("╚════════════════════════════════════════════════════════════╝");
// }

// // Uncomment the line below to run all sections when this file is executed
// // runAllSections();

// // Export functions for use in other modules (Node.js)
// if (typeof module !== 'undefined' && module.exports) {
//     module.exports = {
//         // Operators
//         s1_easy_1, s1_easy_2, s1_easy_3, s1_easy_4, s1_easy_5, s1_medium_6, s1_medium_7, s1_hard_8, s1_hard_9,
//         // Conditionals
//         s2_easy_1, s2_easy_2, s2_medium_3, s2_medium_4, s2_hard_5, s2_hard_6,
//         // Loops
//         s3_easy_1, s3_easy_2, s3_medium_3, s3_medium_4, s3_medium_5, s3_hard_6, s3_hard_7, s3_hard_8,
//         // Console
//         s4_easy_1, s4_easy_2, s4_medium_3, s4_medium_4, s4_hard_5, s4_hard_6, s4_hard_7,
//         // Arrays & Objects
//         s5_easy_1, s5_easy_2, s5_medium_3, s5_medium_4, s5_hard_5, s5_hard_6, s5_hard_7,
//         // Functions
//         s6_easy_1, s6_easy_2, s6_medium_3, s6_medium_4, s6_hard_5, s6_hard_6,
//         // Scope
//         s7_easy_1, s7_easy_2, s7_medium_3, s7_medium_4, s7_hard_5, s7_hard_6,
//         // Recursion
//         s8_easy_1, s8_easy_2, s8_medium_3, s8_medium_4, s8_hard_5,
//         // Declarations & Expressions
//         s9_easy_1, s9_easy_2, s9_medium_3, s9_medium_4, s9_hard_5, s9_hard_6,
//         // Lexical this
//         s10_easy_1, s10_medium_2, s10_hard_3,
//         // Scoping
//         s11_easy_1, s11_easy_2, s11_medium_3, s11_medium_4, s11_hard_5,
//         // Closures
//         s12_easy_1, s12_easy_2, s12_medium_3, s12_medium_4, s12_hard_5, s12_hard_6,
//         // Higher-Order Functions
//         s13_easy_1, s13_easy_2, s13_medium_3, s13_medium_4, s13_hard_5, s13_hard_6,
//         s14_easy_1, s14_easy_2, s14_medium_3, s14_medium_4, s14_hard_5, s14_hard_6, s14_hard_7,
//         // Main
//         runAllSections
//     };
// }
