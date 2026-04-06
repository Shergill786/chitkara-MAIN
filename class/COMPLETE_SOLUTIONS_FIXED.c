// /*
// ╔════════════════════════════════════════════════════════════════════════════╗
// ║                   C PROGRAMMING - COMPLETE SOLUTIONS                     ║
// ║           With Problem Statements & Solutions (Sections 1-14)            ║
// ║                                                                            ║
// ║  Topics: Input/Output, Variables, Data Types, Operators, Ternary,        ║
// ║          Conditionals, Loops, Arrays, Strings, Functions, Recursion,     ║
// ║          Storage Classes, Pointers, Pointer Arithmetic, Advanced Pointers║
// ╚════════════════════════════════════════════════════════════════════════════╝
// */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #include <math.h>
// #include <limits.h>

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 1: INPUT / OUTPUT FUNDAMENTALS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q1.1: Write a program to print "Hello World". */
// void s1_easy_1() {
//     printf("\n=== Q1.1: Print Hello World ===\n");
//     printf("Hello World\n");
// }

// /* Q1.2: Take an integer input and display it. */
// void s1_easy_2() {
//     printf("\n=== Q1.2: Integer Input/Output ===\n");
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     printf("You entered: %d\n", num);
// }

// /* Q1.3: Take two integers and display both. */
// void s1_easy_3() {
//     printf("\n=== Q1.3: Two Integers ===\n");
//     int a, b;
//     printf("Enter first integer: ");
//     scanf("%d", &a);
//     printf("Enter second integer: ");
//     scanf("%d", &b);
//     printf("First: %d, Second: %d\n", a, b);
// }

// /* Q1.4: Take float input and display with formatting. */
// void s1_easy_4() {
//     printf("\n=== Q1.4: Float Input ===\n");
//     float price;
//     printf("Enter price: ");
//     scanf("%f", &price);
//     printf("Price = $%.2f\n", price);
// }

// /* Q1.5: Take character input and display it. */
// void s1_easy_5() {
//     printf("\n=== Q1.5: Character Input ===\n");
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);
//     printf("You entered: %c\n", ch);
// }

// /* Q1.6: Input two numbers and print SUM, DIFFERENCE, PRODUCT. */
// void s1_medium_3() {
//     printf("\n=== Q1.6: Arithmetic Operations ===\n");
//     int num1, num2;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     printf("Sum: %d\n", num1 + num2);
//     printf("Difference: %d\n", num1 - num2);
//     printf("Product: %d\n", num1 * num2);
// }

// /* Q1.7: Take a character and print its ASCII value. */
// void s1_medium_4() {
//     printf("\n=== Q1.7: ASCII Value ===\n");
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);
//     printf("Character: %c | ASCII: %d\n", ch, (int)ch);
// }

// /* BONUS Q1.8: Calculate average of three numbers. */
// void s1_medium_5() {
//     printf("\n=== BONUS Q1.8: Average of 3 Numbers ===\n");
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("Average: %.2f\n", (a + b + c) / 3.0);
// }

// /* BONUS Q1.9: Convert kilometers to miles. */
// void s1_medium_6() {
//     printf("\n=== BONUS Q1.9: KM to Miles Conversion ===\n");
//     float km;
//     printf("Enter distance in km: ");
//     scanf("%f", &km);
//     printf("%.2f km = %.2f miles\n", km, km * 0.621371);
// }

// /* BONUS Q1.10: Calculate area of circle. */
// void s1_medium_7() {
//     printf("\n=== BONUS Q1.10: Circle Area ===\n");
//     float radius;
//     printf("Enter radius: ");
//     scanf("%f", &radius);
//     printf("Area = %.2f square units\n", 3.14159 * radius * radius);
// }

// /* Q1.11: Input name, age, percentage → display formatted output. */
// void s1_hard_5() {
//     printf("\n=== Q1.11: Formatted Student Info ===\n");
//     char name[50];
//     int age;
//     float percentage;
//     printf("Enter name: ");
//     scanf("%s", name);
//     printf("Enter age: ");
//     scanf("%d", &age);
//     printf("Enter percentage: ");
//     scanf("%f", &percentage);
//     printf("\n--- STUDENT INFORMATION ---\n");
//     printf("Name: %s | Age: %d years | Percentage: %.2f%%\n", name, age, percentage);
// }

// /* Q1.12: Print a table using formatted printf() with aligned columns. */
// void s1_hard_6() {
//     printf("\n=== Q1.12: Formatted Table ===\n");
//     printf("╔═══════════╦═══════════╦═══════════╗\n");
//     printf("║   Item    ║   Price   ║  Quantity ║\n");
//     printf("╠═══════════╬═══════════╬═══════════╣\n");
//     printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Apple", 1.50, 12);
//     printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Banana", 0.75, 25);
//     printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Orange", 2.00, 18);
//     printf("╚═══════════╩═══════════╩═══════════╝\n");
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 2: VARIABLES & CONSTANTS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q2.1: Declare and initialize variables of different types. */
// void s2_easy_1() {
//     printf("\n=== Q2.1: Variable Declaration & Initialization ===\n");
//     int intVar = 42;
//     float floatVar = 3.14;
//     char charVar = 'A';
//     printf("Integer: %d\n", intVar);
//     printf("Float: %.2f\n", floatVar);
//     printf("Char: %c\n", charVar);
// }

// /* Q2.2: Define a constant using const. */
// void s2_easy_2() {
//     printf("\n=== Q2.2: Constants ===\n");
//     const int MAX = 100;
//     const float PI = 3.14159;
//     printf("MAX constant = %d\n", MAX);
//     printf("PI constant = %.5f\n", PI);
// }

// /* Q2.3: Swap two variables using third variable. */
// void s2_medium_3() {
//     printf("\n=== Q2.3: Swap Using Third Variable ===\n");
//     int x = 5, y = 15;
//     printf("Before: x=%d, y=%d\n", x, y);
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("After: x=%d, y=%d\n", x, y);
// }

// /* Q2.4: Swap two variables WITHOUT using third variable. */
// void s2_medium_4() {
//     printf("\n=== Q2.4: Swap Without Third Variable ===\n");
//     int a = 7, b = 12;
//     printf("Before: a=%d, b=%d\n", a, b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After: a=%d, b=%d\n", a, b);
// }

// /* Q2.5: Find largest of 3 numbers using variables only. */
// void s2_hard_5() {
//     printf("\n=== Q2.5: Largest of 3 Numbers ===\n");
//     int a = 10, b = 25, c = 15;
//     int largest = a;
//     if (b > largest) largest = b;
//     if (c > largest) largest = c;
//     printf("Numbers: %d, %d, %d | Largest: %d\n", a, b, c, largest);
// }

// /* Q2.6: Use macros (#define) to calculate area of circle. */
// void s2_hard_6() {
//     printf("\n=== Q2.6: Macros for Circle Area ===\n");
//     #define PI 3.14159
//     #define AREA(r) (PI * r * r)
//     float radius = 7.0;
//     printf("Radius: %.2f\n", radius);
//     printf("Area using macro: %.2f\n", AREA(radius));
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 3: DATA TYPES
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q3.1: Print size of int, char, float, double. */
// void s3_easy_1() {
//     printf("\n=== Q3.1: Data Type Sizes ===\n");
//     printf("Size of int: %lu bytes\n", sizeof(int));
//     printf("Size of char: %lu bytes\n", sizeof(char));
//     printf("Size of float: %lu bytes\n", sizeof(float));
//     printf("Size of double: %lu bytes\n", sizeof(double));
// }

// /* Q3.2: Store and print values of each type. */
// void s3_easy_2() {
//     printf("\n=== Q3.2: Data Type Values ===\n");
//     int i = 42;
//     char c = 'X';
//     float f = 3.14;
//     double d = 2.71828;
//     printf("Int: %d | Char: %c | Float: %.2f | Double: %.5f\n", i, c, f, d);
// }

// /* Q3.3: Demonstrate overflow of unsigned char. */
// void s3_medium_3() {
//     printf("\n=== Q3.3: Unsigned Char Overflow ===\n");
//     unsigned char ch = 255;
//     printf("Initial value: %u\n", ch);
//     ch++;
//     printf("After increment (overflow): %u\n", ch);
// }

// /* Q3.4: Convert float to int and observe result. */
// void s3_medium_4() {
//     printf("\n=== Q3.4: Float to Int Conversion ===\n");
//     float f = 3.99;
//     int i = (int)f;
//     printf("Float: %.2f | Int: %d (decimals lost)\n", f, i);
// }

// /* Q3.5: Write program showing type promotion. */
// void s3_medium_5() {
//     printf("\n=== Q3.5: Type Promotion ===\n");
//     int a = 5;
//     double b = 2.5;
//     double result = a + b;
//     printf("%d + %.1f = %.1f (int promoted to double)\n", a, b, result);
// }

// /* Q3.6: Compare precision of float vs double. */
// void s3_medium_6() {
//     printf("\n=== Q3.6: Float vs Double Precision ===\n");
//     float f = 1.0/3.0;
//     double d = 1.0/3.0;
//     printf("Float:   %.20f\n", (double)f);
//     printf("Double:  %.20f\n", d);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 4: OPERATORS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q4.1: Perform all arithmetic operations. */
// void s4_easy_1() {
//     printf("\n=== Q4.1: Arithmetic Operators ===\n");
//     int a = 10, b = 3;
//     printf("a=%d, b=%d\n", a, b);
//     printf("Addition: %d + %d = %d\n", a, b, a + b);
//     printf("Subtraction: %d - %d = %d\n", a, b, a - b);
//     printf("Multiplication: %d * %d = %d\n", a, b, a * b);
//     printf("Division: %d / %d = %d\n", a, b, a / b);
//     printf("Modulus: %d %% %d = %d\n", a, b, a % b);
// }

// /* Q4.2: Check if number is even or odd. */
// void s4_easy_2() {
//     printf("\n=== Q4.2: Even or Odd Check ===\n");
//     int num = 25;
//     printf("Number: %d\n", num);
//     if (num % 2 == 0)
//         printf("%d is EVEN\n", num);
//     else
//         printf("%d is ODD\n", num);
// }

// /* Q4.3: Find largest using relational operators. */
// void s4_medium_3() {
//     printf("\n=== Q4.3: Relational Operators ===\n");
//     int a = 5, b = 10;
//     printf("a=%d, b=%d\n", a, b);
//     printf("a < b: %d\n", a < b);
//     printf("a > b: %d\n", a > b);
//     printf("a == b: %d\n", a == b);
//     printf("a != b: %d\n", a != b);
// }

// /* Q4.4: Demonstrate logical operators with conditions. */
// void s4_medium_4() {
//     printf("\n=== Q4.4: Logical Operators ===\n");
//     int x = 1, y = 0;
//     printf("x=%d, y=%d\n", x, y);
//     printf("x && y (AND): %d\n", x && y);
//     printf("x || y (OR): %d\n", x || y);
//     printf("!x (NOT): %d\n", !x);
// }

// /* Q4.5: Use bitwise operators to swap two numbers. */
// void s4_hard_5() {
//     printf("\n=== Q4.5: Bitwise XOR Swap ===\n");
//     int a = 7, b = 12;
//     printf("Before: a=%d, b=%d\n", a, b);
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     printf("After: a=%d, b=%d\n", a, b);
// }

// /* Q4.6: Count number of 1s in binary using bitwise. */
// void s4_hard_6() {
//     printf("\n=== Q4.6: Count 1s in Binary ===\n");
//     int num = 13;  // Binary: 1101
//     int count = 0;
//     printf("Number: %d | Binary: ", num);
//     for (int i = 7; i >= 0; i--)
//         printf("%d", (num >> i) & 1);
//     printf("\n");
//     int temp = num;
//     while (temp) {
//         count += temp & 1;
//         temp >>= 1;
//     }
//     printf("Count of 1s: %d\n", count);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 5: TERNARY & TYPE CONVERSION
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q5.1: Find maximum using ternary operator. */
// void s5_easy_1() {
//     printf("\n=== Q5.1: Ternary Operator (Max) ===\n");
//     int a = 15, b = 10;
//     int max = (a > b) ? a : b;
//     printf("Max of %d and %d is %d\n", a, b, max);
// }

// /* Q5.2: Convert int to float. */
// void s5_easy_2() {
//     printf("\n=== Q5.2: Int to Float Conversion ===\n");
//     int i = 10;
//     float f = (float)i;
//     printf("Int: %d | Float: %.1f\n", i, f);
// }

// /* Q5.3: Check even/odd using ternary. */
// void s5_medium_3() {
//     printf("\n=== Q5.3: Even/Odd with Ternary ===\n");
//     int num = 17;
//     printf("%d is %s\n", num, (num % 2 == 0) ? "EVEN" : "ODD");
// }

// /* Q5.4: Convert temperature (C → F). */
// void s5_medium_4() {
//     printf("\n=== Q5.4: Temperature Conversion ===\n");
//     float celsius = 25.0;
//     float fahrenheit = (celsius * 9.0/5.0) + 32;
//     printf("%.1f°C = %.1f°F\n", celsius, fahrenheit);
// }

// /* Q5.5: Nested ternary for largest of 3 numbers. */
// void s5_hard_5() {
//     printf("\n=== Q5.5: Nested Ternary (Largest of 3) ===\n");
//     int p = 20, q = 55, r = 30;
//     int largest = (p > q) ? ((p > r) ? p : r) : ((q > r) ? q : r);
//     printf("Largest of %d, %d, %d is %d\n", p, q, r, largest);
// }

// /* Q5.6: Demonstrate implicit vs explicit conversion with examples. */
// void s5_hard_6() {
//     printf("\n=== Q5.6: Implicit vs Explicit Conversion ===\n");
//     int a = 10;
//     float b = 3.0;
//     printf("Implicit: %d + %.1f = %.1f\n", a, b, a + b);
//     printf("Explicit: (float)%d + %.1f = %.1f\n", a, a, (float)a + b);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 6: CONDITIONAL STATEMENTS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q6.1: Check positive/negative number. */
// void s6_easy_1() {
//     printf("\n=== Q6.1: Positive/Negative Check ===\n");
//     int num = -15;
//     if (num > 0)
//         printf("%d is POSITIVE\n", num);
//     else if (num < 0)
//         printf("%d is NEGATIVE\n", num);
//     else
//         printf("%d is ZERO\n", num);
// }

// /* Q6.2: Check voting eligibility. */
// void s6_easy_2() {
//     printf("\n=== Q6.2: Voting Eligibility ===\n");
//     int age = 22;
//     if (age >= 18)
//         printf("Age %d: ELIGIBLE to vote\n", age);
//     else
//         printf("Age %d: NOT eligible to vote\n", age);
// }

// /* Q6.3: Find largest of 3 numbers using if-else. */
// void s6_medium_3() {
//     printf("\n=== Q6.3: Largest of 3 Numbers ===\n");
//     int x = 45, y = 23, z = 67;
//     if (x >= y && x >= z)
//         printf("Largest: %d\n", x);
//     else if (y >= x && y >= z)
//         printf("Largest: %d\n", y);
//     else
//         printf("Largest: %d\n", z);
// }

// /* Q6.4: Simple calculator using switch. */
// void s6_medium_4() {
//     printf("\n=== Q6.4: Simple Calculator ===\n");
//     float a = 10, b = 5;
//     char op = '+';
//     switch (op) {
//         case '+': printf("%.1f + %.1f = %.1f\n", a, b, a + b); break;
//         case '-': printf("%.1f - %.1f = %.1f\n", a, b, a - b); break;
//         case '*': printf("%.1f * %.1f = %.1f\n", a, b, a * b); break;
//         case '/': printf("%.1f / %.1f = %.1f\n", a, b, a / b); break;
//         default: printf("Invalid operator\n");
//     }
// }

// /* Q6.5: Grade system using else-if ladder. */
// void s6_hard_5() {
//     printf("\n=== Q6.5: Grade System ===\n");
//     int marks = 78;
//     char grade;
//     if (marks >= 90) grade = 'A';
//     else if (marks >= 80) grade = 'B';
//     else if (marks >= 70) grade = 'C';
//     else if (marks >= 60) grade = 'D';
//     else grade = 'F';
//     printf("Marks: %d | Grade: %c\n", marks, grade);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 7: LOOPS & JUMP STATEMENTS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q7.1: Print numbers 1–10. */
// void s7_easy_1() {
//     printf("\n=== Q7.1: Print Numbers 1-10 ===\n");
//     for (int i = 1; i <= 10; i++)
//         printf("%d ", i);
//     printf("\n");
// }

// /* Q7.2: Print multiplication table. */
// void s7_easy_2() {
//     printf("\n=== Q7.2: Multiplication Table (5) ===\n");
//     for (int i = 1; i <= 10; i++)
//         printf("5 × %d = %d\n", i, 5 * i);
// }

// /* Q7.3: Factorial using loop. */
// void s7_medium_3() {
//     printf("\n=== Q7.3: Factorial of 5 ===\n");
//     int n = 5, fact = 1;
//     for (int i = 1; i <= n; i++)
//         fact *= i;
//     printf("5! = %d\n", fact);
// }

// /* Q7.4: Reverse a number. */
// void s7_medium_4() {
//     printf("\n=== Q7.4: Reverse Number ===\n");
//     int num = 12345, rev = 0;
//     while (num > 0) {
//         rev = rev * 10 + (num % 10);
//         num /= 10;
//     }
//     printf("Reversed: %d\n", rev);
// }

// /* Q7.5: Print patterns (triangle, pyramid). */
// void s7_hard_5() {
//     printf("\n=== Q7.5: Triangle Pattern ===\n");
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++)
//             printf("* ");
//         printf("\n");
//     }
// }

// /* Q7.6: Fibonacci series using loops. */
// void s7_hard_6() {
//     printf("\n=== Q7.6: Fibonacci Series (10 terms) ===\n");
//     int a = 0, b = 1;
//     printf("%d %d ", a, b);
//     for (int i = 2; i < 10; i++) {
//         int c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }
//     printf("\n");
// }

// /* Q7.7: Use break & continue in example. */
// void s7_hard_7() {
//     printf("\n=== Q7.7: Break & Continue ===\n");
//     for (int i = 1; i <= 10; i++) {
//         if (i == 5) continue;
//         if (i == 8) break;
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 8: ARRAYS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q8.1: Input and print array elements. */
// void s8_easy_1() {
//     printf("\n=== Q8.1: Array Input/Output ===\n");
//     int arr[5];
//     printf("Enter 5 numbers: ");
//     for (int i = 0; i < 5; i++)
//         scanf("%d", &arr[i]);
//     printf("Array: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// /* Q8.2: Find sum of array. */
// void s8_easy_2() {
//     printf("\n=== Q8.2: Array Sum ===\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int sum = 0;
//     for (int i = 0; i < 5; i++)
//         sum += arr[i];
//     printf("Sum: %d\n", sum);
// }

// /* Q8.3: Find maximum and minimum. */
// void s8_medium_3() {
//     printf("\n=== Q8.3: Max & Min ===\n");
//     int arr[] = {15, 42, 8, 56, 23};
//     int max = arr[0], min = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > max) max = arr[i];
//         if (arr[i] < min) min = arr[i];
//     }
//     printf("Max: %d | Min: %d\n", max, min);
// }

// /* Q8.4: Reverse array. */
// void s8_medium_4() {
//     printf("\n=== Q8.4: Reverse Array ===\n");
//     int arr[] = {1, 2, 3, 4, 5};
//     printf("Original: ");
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//     for (int i = 0, j = 4; i < j; i++, j--) {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     printf("\nReversed: ");
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//     printf("\n");
// }

// /* Q8.5: Sort array (bubble sort). */
// void s8_hard_5() {
//     printf("\n=== Q8.5: Bubble Sort ===\n");
//     int arr[] = {64, 34, 25, 12, 22};
//     printf("Original: ");
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//     for (int i = 0; i < 4; i++)
//         for (int j = 0; j < 4 - i; j++)
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//     printf("\nSorted: ");
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//     printf("\n");
// }

// /* Q8.6: Search element (linear search). */
// void s8_hard_6() {
//     printf("\n=== Q8.6: Linear Search ===\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int search = 30;
//     int found = -1;
//     for (int i = 0; i < 5; i++)
//         if (arr[i] == search) {
//             found = i;
//             break;
//         }
//     if (found != -1)
//         printf("%d found at index %d\n", search, found);
//     else
//         printf("%d not found\n", search);
// }

// /* Q8.7: Matrix addition (2D array). */
// void s8_hard_7() {
//     printf("\n=== Q8.7: Matrix Addition ===\n");
//     int a[2][2] = {{1, 2}, {3, 4}};
//     int b[2][2] = {{5, 6}, {7, 8}};
//     int c[2][2];
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             c[i][j] = a[i][j] + b[i][j];
//     printf("Sum:\n");
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++)
//             printf("%d ", c[i][j]);
//         printf("\n");
//     }
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 9: STRINGS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q9.1: Input and print string. */
// void s9_easy_1() {
//     printf("\n=== Q9.1: String Input/Output ===\n");
//     char str[50];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("String: %s\n", str);
// }

// /* Q9.2: Find length using strlen(). */
// void s9_easy_2() {
//     printf("\n=== Q9.2: String Length ===\n");
//     char str[] = "Hello";
//     printf("String: %s | Length: %lu\n", str, strlen(str));
// }

// /* Q9.3: Copy string without strcpy. */
// void s9_medium_3() {
//     printf("\n=== Q9.3: Copy String ===\n");
//     char src[] = "Hello World";
//     char dest[50];
//     for (int i = 0; src[i] != '\0'; i++)
//         dest[i] = src[i];
//     dest[strlen(src)] = '\0';
//     printf("Original: %s\nCopy: %s\n", src, dest);
// }

// /* Q9.4: Compare two strings. */
// void s9_medium_4() {
//     printf("\n=== Q9.4: Compare Strings ===\n");
//     char str1[] = "Apple";
//     char str2[] = "Apple";
//     int same = 1;
//     for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
//         if (str1[i] != str2[i]) {
//             same = 0;
//             break;
//         }
//     }
//     printf("%s == %s ? %s\n", str1, str2, same ? "YES" : "NO");
// }

// /* Q9.5: Check palindrome string. */
// void s9_hard_5() {
//     printf("\n=== Q9.5: Check Palindrome ===\n");
//     char str[] = "racecar";
//     int len = strlen(str);
//     int isPalin = 1;
//     for (int i = 0, j = len - 1; i < j; i++, j--) {
//         if (str[i] != str[j]) {
//             isPalin = 0;
//             break;
//         }
//     }
//     printf("%s is %s PALINDROME\n", str, isPalin ? "a" : "not a");
// }

// /* Q9.6: Reverse string without library. */
// void s9_hard_6() {
//     printf("\n=== Q9.6: Reverse String ===\n");
//     char str[] = "Programming";
//     int len = strlen(str);
//     printf("Original: %s\nReversed: ", str);
//     for (int i = len - 1; i >= 0; i--)
//         printf("%c", str[i]);
//     printf("\n");
// }

// /* Q9.7: Count vowels, consonants. */
// void s9_hard_7() {
//     printf("\n=== Q9.7: Count Vowels & Consonants ===\n");
//     char str[] = "programming";
//     int vowels = 0, consonants = 0;
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
//             str[i] == 'o' || str[i] == 'u')
//             vowels++;
//         else if (isalpha(str[i]))
//             consonants++;
//     }
//     printf("String: %s | Vowels: %d | Consonants: %d\n", str, vowels, consonants);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 10: FUNCTIONS & RECURSION
// // ═══════════════════════════════════════════════════════════════════════════

// int add(int x, int y) { return x + y; }
// int isPrime(int n) {
//     if (n <= 1) return 0;
//     for (int i = 2; i * i <= n; i++)
//         if (n % i == 0) return 0;
//     return 1;
// }
// int factorial(int n) {
//     if (n <= 1) return 1;
//     return n * factorial(n - 1);
// }
// int fibonacci(int n) {
//     if (n <= 1) return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int sumDigits(int n) {
//     if (n == 0) return 0;
//     return (n % 10) + sumDigits(n / 10);
// }
// void hanoi(int n, char src, char dest, char aux) {
//     if (n == 1) {
//         printf("Move disk 1 from %c to %c\n", src, dest);
//         return;
//     }
//     hanoi(n - 1, src, aux, dest);
//     printf("Move disk %d from %c to %c\n", n, src, dest);
//     hanoi(n - 1, aux, dest, src);
// }

// /* Q10.1: Function to add two numbers. */
// void s10_easy_1() {
//     printf("\n=== Q10.1: Add Two Numbers ===\n");
//     printf("add(10, 20) = %d\n", add(10, 20));
// }

// /* Q10.2: Function to check prime. */
// void s10_easy_2() {
//     printf("\n=== Q10.2: Check Prime ===\n");
//     int num = 17;
//     printf("%d is %s\n", num, isPrime(num) ? "PRIME" : "NOT PRIME");
// }

// /* Q10.3: Factorial using function. */
// void s10_medium_3() {
//     printf("\n=== Q10.3: Factorial ===\n");
//     printf("5! = %d\n", factorial(5));
// }

// /* Q10.4: Fibonacci using recursion. */
// void s10_medium_4() {
//     printf("\n=== Q10.4: Fibonacci ===\n");
//     printf("fib(7) = %d\n", fibonacci(7));
// }

// /* Q10.5: Recursive sum of digits. */
// void s10_hard_5() {
//     printf("\n=== Q10.5: Sum of Digits (Recursive) ===\n");
//     int n = 12345;
//     printf("Sum of digits of %d = %d\n", n, sumDigits(n));
// }

// /* Q10.6: Tower of Hanoi logic. */
// void s10_hard_6() {
//     printf("\n=== Q10.6: Tower of Hanoi (3 disks) ===\n");
//     hanoi(3, 'A', 'C', 'B');
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 11: STORAGE CLASSES
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q11.1: Demonstrate auto storage class. */
// void s11_easy_1() {
//     printf("\n=== Q11.1: Auto Storage Class ===\n");
//     auto int x = 10;
//     printf("Auto variable x = %d\n", x);
// }

// /* Q11.2: Demonstrate static. */
// void s11_easy_2() {
//     printf("\n=== Q11.2: Static Storage Class ===\n");
//     static int count = 0;
//     count++;
//     printf("Static count = %d\n", count);
// }

// int global_storage = 100;

// /* Q11.3: Show difference between local & global. */
// void s11_medium_3() {
//     printf("\n=== Q11.3: Local vs Global ===\n");
//     int x = 5;
//     printf("Local x = %d\n", x);
//     printf("Global var = %d\n", global_storage);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 12: POINTERS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q12.1: Print value using pointer. */
// void s12_easy_1() {
//     printf("\n=== Q12.1: Print Value Using Pointer ===\n");
//     int num = 42;
//     int *ptr = &num;
//     printf("Variable num = %d\n", num);
//     printf("Value via pointer = %d\n", *ptr);
// }

// /* Q12.2: Print address of variable. */
// void s12_easy_2() {
//     printf("\n=== Q12.2: Print Address ===\n");
//     int x = 100;
//     printf("Variable x = %d\n", x);
//     printf("Address of x = %p\n", (void*)&x);
// }

// /* Q12.3: Swap using pointers. */
// void s12_medium_3() {
//     printf("\n=== Q12.3: Swap Using Pointers ===\n");
//     int x = 10, y = 20;
//     int *px = &x, *py = &y;
//     printf("Before: x=%d, y=%d\n", x, y);
//     int temp = *px;
//     *px = *py;
//     *py = temp;
//     printf("After: x=%d, y=%d\n", x, y);
// }

// /* Q12.4: Pointer with arrays. */
// void s12_medium_4() {
//     printf("\n=== Q12.4: Pointer with Arrays ===\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     for (int i = 0; i < 5; i++)
//         printf("arr[%d] = %d\n", i, *(ptr + i));
// }

// /* Q12.5: Double pointer example. */
// void s12_hard_5() {
//     printf("\n=== Q12.5: Double Pointer ===\n");
//     int x = 100;
//     int *ptr = &x;
//     int **pptr = &ptr;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
//     printf("**pptr = %d\n", **pptr);
// }

// /* Q12.6: Pointer to pointer operations. */
// void s12_hard_6() {
//     printf("\n=== Q12.6: Pointer to Pointer Operations ===\n");
//     int a = 50;
//     int *pa = &a;
//     int **ppa = &pa;
//     printf("a = %d | **ppa = %d\n", a, **ppa);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 13: POINTER ARITHMETIC & ARRAYS
// // ═══════════════════════════════════════════════════════════════════════════

// /* Q13.1: Traverse array using pointer. */
// void s13_easy_1() {
//     printf("\n=== Q13.1: Traverse Array Using Pointer ===\n");
//     int arr[] = {5, 10, 15, 20, 25};
//     int *ptr = arr;
//     printf("Array elements: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", *(ptr + i));
//     printf("\n");
// }

// /* Q13.2: Increment pointer. */
// void s13_easy_2() {
//     printf("\n=== Q13.2: Increment Pointer ===\n");
//     int arr[] = {100, 200, 300};
//     int *ptr = arr;
//     printf("First: %d\n", *ptr);
//     ptr++;
//     printf("Second: %d\n", *ptr);
// }

// /* Q13.3: Pointer vs array difference. */
// void s13_medium_3() {
//     printf("\n=== Q13.3: Pointer vs Array ===\n");
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     printf("sizeof(arr) = %lu | sizeof(ptr) = %lu\n", sizeof(arr), sizeof(ptr));
// }

// /* Q13.4: Access 2D array using pointer. */
// void s13_medium_4() {
//     printf("\n=== Q13.4: 2D Array via Pointer ===\n");
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int *ptr = (int*)arr;
//     printf("Elements: ");
//     for (int i = 0; i < 6; i++)
//         printf("%d ", *(ptr + i));
//     printf("\n");
// }

// /* Q13.5: Array of pointers. */
// void s13_hard_5() {
//     printf("\n=== Q13.5: Array of Pointers ===\n");
//     int a = 10, b = 20, c = 30;
//     int *arr[] = {&a, &b, &c};
//     for (int i = 0; i < 3; i++)
//         printf("arr[%d] -> %d\n", i, *arr[i]);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 14: ADVANCED POINTERS
// // ═══════════════════════════════════════════════════════════════════════════

// void modifyValue(int *ptr) {
//     *ptr = 999;
// }

// int* retPtr(int *a) {
//     return a;
// }

// int multiply(int x, int y) { return x * y; }
// void printOp(int (*func)(int, int), int a, int b) {
//     printf("Result: %d\n", func(a, b));
// }

// /* Q14.1: Pass pointer to function. */
// void s14_easy_1() {
//     printf("\n=== Q14.1: Pass Pointer to Function ===\n");
//     int x = 50;
//     printf("Before: x = %d\n", x);
//     modifyValue(&x);
//     printf("After: x = %d\n", x);
// }

// /* Q14.2: Return pointer from function. */
// void s14_medium_2() {
//     printf("\n=== Q14.2: Return Pointer ===\n");
//     int a = 100;
//     int *ptr = retPtr(&a);
//     printf("Returned value: %d\n", *ptr);
// }

// /* Q14.3: Dynamic memory basics (malloc). */
// void s14_medium_3() {
//     printf("\n=== Q14.3: Dynamic Memory (malloc) ===\n");
//     int n = 3;
//     int *arr = (int*)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++) {
//         arr[i] = (i + 1) * 10;
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
//     free(arr);
//     printf("Memory freed!\n");
// }

// /* Q14.4: Function pointer example. */
// void s14_hard_4() {
//     printf("\n=== Q14.4: Function Pointer ===\n");
//     int (*fptr)(int, int);
//     fptr = multiply;
//     printf("10 * 5 = %d\n", fptr(10, 5));
// }

// /* Q14.5: Implement callback using function pointer. */
// void s14_hard_5() {
//     printf("\n=== Q14.5: Callback with Function Pointer ===\n");
//     printf("Multiply: ");
//     printOp(multiply, 8, 3);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // MAIN MENU
// // ═══════════════════════════════════════════════════════════════════════════

// int main() {
//     int section, choice;
    
//     while (1) {
//         printf("\n╔════════════════════════════════════════════════════════════╗\n");
//         printf("║    C PROGRAMMING SOLUTIONS - ALL 14 SECTIONS             ║\n");
//         printf("╠════════════════════════════════════════════════════════════╣\n");
//         printf("║  1. Input/Output Fundamentals (7 programs)               ║\n");
//         printf("║  2. Variables & Constants (6 programs)                   ║\n");
//         printf("║  3. Data Types (6 programs)                              ║\n");
//         printf("║  4. Operators (6 programs)                               ║\n");
//         printf("║  5. Ternary & Type Conversion (6 programs)               ║\n");
//         printf("║  6. Conditional Statements (5 programs)                  ║\n");
//         printf("║  7. Loops & Jump Statements (7 programs)                 ║\n");
//         printf("║  8. Arrays (7 programs)                                  ║\n");
//         printf("║  9. Strings (7 programs)                                 ║\n");
//         printf("║  10. Functions & Recursion (6 programs)                  ║\n");
//         printf("║  11. Storage Classes (3 programs)                        ║\n");
//         printf("║  12. Pointers (6 programs)                               ║\n");
//         printf("║  13. Pointer Arithmetic & Arrays (5 programs)            ║\n");
//         printf("║  14. Advanced Pointers (5 programs)                      ║\n");
//         printf("║  0. EXIT                                                 ║\n");
//         printf("╚════════════════════════════════════════════════════════════╝\n");
        
//         printf("Select Section (0-14): ");
//         scanf("%d", &section);
        
//         if (section == 0) break;
        
//         switch (section) {
//             case 1:
//                 printf("\n1. Hello  2. Integer  3. Two Integers  4. Float  5. Char\n");
//                 printf("6. Arithmetic  7. ASCII  8. Average  9. KM-Miles  10. Circle\n");
//                 printf("11. Formatted  12. Table: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s1_easy_1(); break;
//                     case 2: s1_easy_2(); break;
//                     case 3: s1_easy_3(); break;
//                     case 4: s1_easy_4(); break;
//                     case 5: s1_easy_5(); break;
//                     case 6: s1_medium_3(); break;
//                     case 7: s1_medium_4(); break;
//                     case 8: s1_medium_5(); break;
//                     case 9: s1_medium_6(); break;
//                     case 10: s1_medium_7(); break;
//                     case 11: s1_hard_5(); break;
//                     case 12: s1_hard_6(); break;
//                 }
//                 break;
//             case 2:
//                 printf("\n1. Variables  2. Constants  3. Swap(3rd)  4. Swap(no-3rd)  5. Largest\n");
//                 printf("6. Macros: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s2_easy_1(); break;
//                     case 2: s2_easy_2(); break;
//                     case 3: s2_medium_3(); break;
//                     case 4: s2_medium_4(); break;
//                     case 5: s2_hard_5(); break;
//                     case 6: s2_hard_6(); break;
//                 }
//                 break;
//             case 3:
//                 printf("\n1. Sizes  2. Values  3. Overflow  4. Conversion  5. Promotion\n");
//                 printf("6. Precision: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s3_easy_1(); break;
//                     case 2: s3_easy_2(); break;
//                     case 3: s3_medium_3(); break;
//                     case 4: s3_medium_4(); break;
//                     case 5: s3_medium_5(); break;
//                     case 6: s3_medium_6(); break;
//                 }
//                 break;
//             case 4:
//                 printf("\n1. Arithmetic  2. Even/Odd  3. Relational  4. Logical\n");
//                 printf("5. XOR Swap  6. Count 1s: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s4_easy_1(); break;
//                     case 2: s4_easy_2(); break;
//                     case 3: s4_medium_3(); break;
//                     case 4: s4_medium_4(); break;
//                     case 5: s4_hard_5(); break;
//                     case 6: s4_hard_6(); break;
//                 }
//                 break;
//             case 5:
//                 printf("\n1. Ternary Max  2. Conversion  3. Even/Odd  4. Temp Conv\n");
//                 printf("5. Nested Ternary  6. Implicit/Explicit: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s5_easy_1(); break;
//                     case 2: s5_easy_2(); break;
//                     case 3: s5_medium_3(); break;
//                     case 4: s5_medium_4(); break;
//                     case 5: s5_hard_5(); break;
//                     case 6: s5_hard_6(); break;
//                 }
//                 break;
//             case 6:
//                 printf("\n1. Pos/Neg  2. Voting  3. Largest  4. Calculator  5. Grades: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s6_easy_1(); break;
//                     case 2: s6_easy_2(); break;
//                     case 3: s6_medium_3(); break;
//                     case 4: s6_medium_4(); break;
//                     case 5: s6_hard_5(); break;
//                 }
//                 break;
//             case 7:
//                 printf("\n1. 1-10  2. Table  3. Factorial  4. Reverse  5. Triangle\n");
//                 printf("6. Fibonacci  7. Break/Continue: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s7_easy_1(); break;
//                     case 2: s7_easy_2(); break;
//                     case 3: s7_medium_3(); break;
//                     case 4: s7_medium_4(); break;
//                     case 5: s7_hard_5(); break;
//                     case 6: s7_hard_6(); break;
//                     case 7: s7_hard_7(); break;
//                 }
//                 break;
//             case 8:
//                 printf("\n1. Input/Output  2. Sum  3. Max/Min  4. Reverse  5. Bubble Sort\n");
//                 printf("6. Search  7. Matrix: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s8_easy_1(); break;
//                     case 2: s8_easy_2(); break;
//                     case 3: s8_medium_3(); break;
//                     case 4: s8_medium_4(); break;
//                     case 5: s8_hard_5(); break;
//                     case 6: s8_hard_6(); break;
//                     case 7: s8_hard_7(); break;
//                 }
//                 break;
//             case 9:
//                 printf("\n1. Input/Output  2. Length  3. Copy  4. Compare  5. Palindrome\n");
//                 printf("6. Reverse  7. Vowels/Consonants: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s9_easy_1(); break;
//                     case 2: s9_easy_2(); break;
//                     case 3: s9_medium_3(); break;
//                     case 4: s9_medium_4(); break;
//                     case 5: s9_hard_5(); break;
//                     case 6: s9_hard_6(); break;
//                     case 7: s9_hard_7(); break;
//                 }
//                 break;
//             case 10:
//                 printf("\n1. Add  2. Prime  3. Factorial  4. Fibonacci  5. Sum Digits\n");
//                 printf("6. Tower of Hanoi: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s10_easy_1(); break;
//                     case 2: s10_easy_2(); break;
//                     case 3: s10_medium_3(); break;
//                     case 4: s10_medium_4(); break;
//                     case 5: s10_hard_5(); break;
//                     case 6: s10_hard_6(); break;
//                 }
//                 break;
//             case 11:
//                 printf("\n1. Auto  2. Static  3. Local/Global: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s11_easy_1(); break;
//                     case 2: s11_easy_2(); break;
//                     case 3: s11_medium_3(); break;
//                 }
//                 break;
//             case 12:
//                 printf("\n1. Value  2. Address  3. Swap  4. Array  5. Double Pointer\n");
//                 printf("6. Pointer Ops: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s12_easy_1(); break;
//                     case 2: s12_easy_2(); break;
//                     case 3: s12_medium_3(); break;
//                     case 4: s12_medium_4(); break;
//                     case 5: s12_hard_5(); break;
//                     case 6: s12_hard_6(); break;
//                 }
//                 break;
//             case 13:
//                 printf("\n1. Traverse  2. Increment  3. Pointer vs Array  4. 2D Array\n");
//                 printf("5. Array of Pointers: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s13_easy_1(); break;
//                     case 2: s13_easy_2(); break;
//                     case 3: s13_medium_3(); break;
//                     case 4: s13_medium_4(); break;
//                     case 5: s13_hard_5(); break;
//                 }
//                 break;
//             case 14:
//                 printf("\n1. Pass Pointer  2. Return Pointer  3. Dynamic Memory\n");
//                 printf("4. Function Pointer  5. Callback: ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: s14_easy_1(); break;
//                     case 2: s14_medium_2(); break;
//                     case 3: s14_medium_3(); break;
//                     case 4: s14_hard_4(); break;
//                     case 5: s14_hard_5(); break;
//                 }
//                 break;
//         }
//     }
    
//     printf("\nThank you for practicing C! Goodbye!\n");
//     return 0;
// }
