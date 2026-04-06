/*
╔════════════════════════════════════════════════════════════════════════════╗
║                    C PROGRAMMING - COMPLETE SOLUTIONS                    ║
║                  Sections 1-14 with Enhanced Practice Set                 ║
║                                                                            ║
║  Topics: Input/Output, Variables, Data Types, Operators, Ternary,        ║
║          Conditionals, Loops, Arrays, Strings, Functions, Recursion,     ║
║          Storage Classes, Pointers, Pointer Arithmetic, Advanced Pointers║
╚════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>

// ═══════════════════════════════════════════════════════════════════════════
// SECTION 1: INPUT / OUTPUT FUNDAMENTALS
// ═══════════════════════════════════════════════════════════════════════════

/*
EASY PROBLEM 1: Write a program to print "Hello World".
*/
void section1_easy_1_hello_world() {
    printf("\n--- S1 Easy 1: Hello World ---\n");
    printf("Hello World\n");
}

/*
EASY PROBLEM 2: Take an integer input and display it.
*/
void section1_easy_2_integer_input() {
    printf("\n--- S1 Easy 2: Integer Input ---\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}

/*
EASY PROBLEM 3: Take two integers as input and display them.
*/
void section1_easy_3_two_integers() {
    printf("\n--- S1 Easy 3: Two Integers ---\n");
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("First: %d, Second: %d\n", a, b);
}

/*
EASY PROBLEM 4: Take float input and display it with proper formatting.
*/
void section1_easy_4_float_input() {
    printf("\n--- S1 Easy 4: Float Input ---\n");
    float price;
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Price = %.2f\n", price);
}

/*
EASY PROBLEM 5: Take a character as input and display it.
*/
void section1_easy_5_char_input() {
    printf("\n--- S1 Easy 5: Character Input ---\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("You entered: %c\n", ch);
}

/*
MEDIUM PROBLEM 3: Input two numbers and print their sum, difference, and product.
*/
void section1_medium_3_arithmetic() {
    printf("\n--- S1 Medium 3: Arithmetic Operations ---\n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
}

/*
MEDIUM PROBLEM 4: Take a character and print its ASCII value.
*/
void section1_medium_4_ascii() {
    printf("\n--- S1 Medium 4: ASCII Value ---\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Character: %c, ASCII: %d\n", ch, (int)ch);
}

/*
ADDITIONAL MEDIUM PROBLEM: Calculate average of three numbers.
*/
void section1_medium_5_average() {
    printf("\n--- S1 Medium 5: Average ---\n");
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average: %.2f\n", (a + b + c) / 3.0);
}

/*
ADDITIONAL MEDIUM PROBLEM: Convert distance from kilometers to miles.
*/
void section1_medium_6_conversion() {
    printf("\n--- S1 Medium 6: KM to Miles ---\n");
    float km;
    printf("Enter distance (km): ");
    scanf("%f", &km);
    printf("%.2f km = %.2f miles\n", km, km * 0.621371);
}

/*
ADDITIONAL MEDIUM PROBLEM: Calculate area of circle given radius.
*/
void section1_medium_7_circle() {
    printf("\n--- S1 Medium 7: Circle Area ---\n");
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\n", 3.14159 * radius * radius);
}

/*
HARD PROBLEM 5: Input name, age, and percentage → display formatted output.
*/
void section1_hard_5_formatted() {
    printf("\n--- S1 Hard 5: Formatted Output ---\n");
    char name[50];
    int age;
    float percentage;
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    printf("\n--- STUDENT INFO ---\n");
    printf("Name: %s | Age: %d | Percentage: %.2f%%\n", name, age, percentage);
}

/*
HARD PROBLEM 6: Print a table using formatted printf() with aligned columns.
*/
void section1_hard_6_table() {
    printf("\n--- S1 Hard 6: Formatted Table ---\n");
    printf("╔═══════════╦═══════════╦═══════════╗\n");
    printf("║   Item    ║   Price   ║  Quantity ║\n");
    printf("╠═══════════╬═══════════╬═══════════╣\n");
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Apple", 1.50, 12);
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Banana", 0.75, 25);
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Orange", 2.00, 18);
    printf("╚═══════════╩═══════════╩═══════════╝\n");
}

/*
ADDITIONAL HARD PROBLEM: Input student marks for 4 subjects and display report.
*/
void section1_hard_7_report() {
    printf("\n--- S1 Hard 7: Student Report ---\n");
    char name[50];
    int roll;
    float hindi, english, math, science;
    printf("Enter name & roll: ");
    scanf("%s %d", name, &roll);
    printf("Enter marks (Hindi English Math Science): ");
    scanf("%f %f %f %f", &hindi, &english, &math, &science);
    float total = hindi + english + math + science;
    printf("Total: %.1f | Average: %.1f\n", total, total / 4.0);
}

/*
ADDITIONAL HARD PROBLEM: Generate employee salary slip with deductions and allowances.
*/
void section1_hard_8_salary() {
    printf("\n--- S1 Hard 8: Salary Slip ---\n");
    char name[50];
    int empId, basicSalary;
    printf("Enter name, ID, salary: ");
    scanf("%s %d %d", name, &empId, &basicSalary);
    float hra = basicSalary * 0.10;
    float da = basicSalary * 0.05;
    float tax = basicSalary * 0.05;
    float gross = basicSalary + hra + da;
    float net = gross - tax;
    printf("Gross: $%.2f | Tax: $%.2f | Net: $%.2f\n", gross, tax, net);
}

/*
ADDITIONAL HARD PROBLEM: Create and display an inventory table with totals.
*/
void section1_hard_9_inventory() {
    printf("\n--- S1 Hard 9: Inventory ---\n");
    printf("╔════════════════╦══════════╦═══════════╦═══════════════╗\n");
    printf("║ Product        ║   Qty    ║   Price   ║     Total     ║\n");
    printf("╠════════════════╬══════════╬═══════════╬═══════════════╣\n");
    int qty[] = {10, 15, 8};
    float prices[] = {25.50, 15.00, 45.75};
    const char *products[] = {"Notebook", "Pen", "Pencil"};
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        float total = qty[i] * prices[i];
        sum += total;
        printf("║ %-14s ║ %8d ║ $%8.2f ║ $%11.2f ║\n", products[i], qty[i], prices[i], total);
    }
    printf("╠════════════════╬══════════╬═══════════╬═══════════════╣\n");
    printf("║ TOTAL          ║          ║           ║ $%11.2f ║\n", sum);
    printf("╚════════════════╩══════════╩═══════════╩═══════════════╝\n");
}

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 2: VARIABLES & CONSTANTS
// // ═══════════════════════════════════════════════════════════════════════════

// void section2_easy_1_variables() {
//     printf("\n--- S2 Easy 1: Variables ---\n");
//     int intVar = 42;
//     float floatVar = 3.14;
//     char charVar = 'A';
//     printf("Integer: %d\n", intVar);
//     printf("Float: %.2f\n", floatVar);
//     printf("Char: %c\n", charVar);
// }

// void section2_easy_2_const() {
//     printf("\n--- S2 Easy 2: Constants ---\n");
//     const int MAX = 100;
//     const float PI = 3.14159;
//     printf("MAX = %d\n", MAX);
//     printf("PI = %.5f\n", PI);
// }

// void section2_easy_3_temp() {
//     printf("\n--- S2 Easy 3: Temp Variables ---\n");
//     int a = 10, b = 20;
//     printf("Before: a=%d, b=%d\n", a, b);
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("After: a=%d, b=%d\n", a, b);
// }

// void section2_medium_3_swap_third() {
//     printf("\n--- S2 Medium 3: Swap With Third Variable ---\n");
//     int x = 5, y = 15;
//     printf("Before: x=%d, y=%d\n", x, y);
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("After: x=%d, y=%d\n", x, y);
// }

// void section2_medium_4_swap_no_third() {
//     printf("\n--- S2 Medium 4: Swap Without Third Variable ---\n");
//     int a = 7, b = 12;
//     printf("Before: a=%d, b=%d\n", a, b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After: a=%d, b=%d\n", a, b);
// }

// void section2_medium_5_largest() {
//     printf("\n--- S2 Medium 5: Largest of 3 ---\n");
//     int a = 10, b = 25, c = 15;
//     int largest = a;
//     if (b > largest) largest = b;
//     if (c > largest) largest = c;
//     printf("Largest: %d\n", largest);
// }

// void section2_medium_6_macros() {
//     printf("\n--- S2 Medium 6: Macros for Circle Area ---\n");
//     #define PI 3.14159
//     #define AREA(r) (PI * r * r)
    
//     float radius = 5.0;
//     printf("Radius: %.2f\n", radius);
//     printf("Area: %.2f\n", AREA(radius));
// }

// void section2_medium_7_type_sizes() {
//     printf("\n--- S2 Medium 7: Type Sizes ---\n");
//     printf("Size of int: %lu bytes\n", sizeof(int));
//     printf("Size of float: %lu bytes\n", sizeof(float));
//     printf("Size of char: %lu bytes\n", sizeof(char));
// }

// void section2_hard_5_largest_advanced() {
//     printf("\n--- S2 Hard 5: Largest of 3 (Advanced) ---\n");
//     int x = 45, y = 23, z = 67;
//     int max = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
//     printf("x=%d, y=%d, z=%d | Largest: %d\n", x, y, z, max);
// }

// void section2_hard_6_macros_advanced() {
//     printf("\n--- S2 Hard 6: Advanced Macros ---\n");
//     #define MAX(a, b) ((a > b) ? a : b)
//     #define MIN(a, b) ((a < b) ? a : b)
//     #define ABS(x) ((x < 0) ? -x : x)
    
//     printf("MAX(10, 20) = %d\n", MAX(10, 20));
//     printf("MIN(10, 20) = %d\n", MIN(10, 20));
//     printf("ABS(-15) = %d\n", ABS(-15));
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 3: DATA TYPES
// // ═══════════════════════════════════════════════════════════════════════════

// void section3_easy_1_sizes() {
//     printf("\n--- S3 Easy 1: Type Sizes ---\n");
//     printf("int: %lu | char: %lu | float: %lu | double: %lu\n",
//            sizeof(int), sizeof(char), sizeof(float), sizeof(double));
// }

// void section3_easy_2_values() {
//     printf("\n--- S3 Easy 2: Type Values ---\n");
//     int i = 42;
//     char c = 'X';
//     float f = 3.14;
//     double d = 2.71828;
//     printf("Int: %d | Char: %c | Float: %.2f | Double: %.5f\n", i, c, f, d);
// }

// void section3_medium_3_overflow() {
//     printf("\n--- S3 Medium 3: Unsigned Char Overflow ---\n");
//     unsigned char ch = 255;
//     printf("Value: %u\n", ch);
//     ch++;
//     printf("After increment: %u (overflow occurred)\n", ch);
// }

// void section3_medium_4_conversion() {
//     printf("\n--- S3 Medium 4: Float to Int Conversion ---\n");
//     float f = 3.99;
//     int i = (int)f;
//     printf("Float: %.2f | Int: %d (decimals lost)\n", f, i);
// }

// void section3_medium_5_promotion() {
//     printf("\n--- S3 Medium 5: Type Promotion ---\n");
//     int a = 5;
//     double b = 2.5;
//     double result = a + b;
//     printf("%d + %.1f = %.1f (int promoted to double)\n", a, b, result);
// }

// void section3_medium_6_precision() {
//     printf("\n--- S3 Medium 6: Float vs Double Precision ---\n");
//     float f = 1.0/3.0;
//     double d = 1.0/3.0;
//     printf("Float:  %.20f\n", (double)f);
//     printf("Double: %.20f\n", d);
// }

// void section3_hard_7_ranges() {
//     printf("\n--- S3 Hard 7: Integer Ranges ---\n");
//     printf("Signed char: %d to %d\n", -128, 127);
//     printf("Unsigned char: 0 to 255\n");
//     printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
// }

// void section3_hard_8_casting() {
//     printf("\n--- S3 Hard 8: Explicit Casting ---\n");
//     int a = 10, b = 3;
//     printf("%d / %d = %d (int division)\n", a, b, a/b);
//     printf("%d / %d = %.2f (float division)\n", a, b, (float)a/b);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 4: OPERATORS
// // ═══════════════════════════════════════════════════════════════════════════

// void section4_easy_1_arithmetic() {
//     printf("\n--- S4 Easy 1: Arithmetic Operators ---\n");
//     int a = 10, b = 3;
//     printf("Addition: %d + %d = %d\n", a, b, a + b);
//     printf("Subtraction: %d - %d = %d\n", a, b, a - b);
//     printf("Multiplication: %d * %d = %d\n", a, b, a * b);
//     printf("Division: %d / %d = %d\n", a, b, a / b);
//     printf("Modulus: %d %% %d = %d\n", a, b, a % b);
// }

// void section4_easy_2_even_odd() {
//     printf("\n--- S4 Easy 2: Even or Odd ---\n");
//     int num = 25;
//     printf("Number: %d\n", num);
//     if (num % 2 == 0)
//         printf("%d is EVEN\n", num);
//     else
//         printf("%d is ODD\n", num);
// }

// void section4_medium_3_relational() {
//     printf("\n--- S4 Medium 3: Relational Operators ---\n");
//     int a = 5, b = 10;
//     printf("a=%d, b=%d\n", a, b);
//     printf("a < b: %d\n", a < b);
//     printf("a > b: %d\n", a > b);
//     printf("a == b: %d\n", a == b);
//     printf("a != b: %d\n", a != b);
// }

// void section4_medium_4_logical() {
//     printf("\n--- S4 Medium 4: Logical Operators ---\n");
//     int x = 1, y = 0;
//     printf("x=%d, y=%d\n", x, y);
//     printf("x && y (AND): %d\n", x && y);
//     printf("x || y (OR): %d\n", x || y);
//     printf("!x (NOT): %d\n", !x);
// }

// void section4_hard_5_bitwise_swap() {
//     printf("\n--- S4 Hard 5: Bitwise XOR Swap ---\n");
//     int a = 7, b = 12;
//     printf("Before: a=%d, b=%d\n", a, b);
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     printf("After: a=%d, b=%d\n", a, b);
// }

// void section4_hard_6_count_ones() {
//     printf("\n--- S4 Hard 6: Count 1s in Binary ---\n");
//     int num = 13;  // Binary: 1101
//     int count = 0;
//     printf("Number: %d (Binary: ", num);
//     for (int i = 7; i >= 0; i--) {
//         printf("%d", (num >> i) & 1);
//     }
//     printf(")\n");
    
//     int temp = num;
//     while (temp) {
//         count += temp & 1;
//         temp >>= 1;
//     }
//     printf("Count of 1s: %d\n", count);
// }

// void section4_hard_7_bitwise_ops() {
//     printf("\n--- S4 Hard 7: Bitwise Operations ---\n");
//     int a = 5, b = 3;
//     printf("a=%d, b=%d\n", a, b);
//     printf("AND: %d\n", a & b);
//     printf("OR: %d\n", a | b);
//     printf("XOR: %d\n", a ^ b);
//     printf("NOT: %d\n", ~a);
//     printf("LEFT SHIFT: %d << 1 = %d\n", a, a << 1);
//     printf("RIGHT SHIFT: %d >> 1 = %d\n", a, a >> 1);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 5: TERNARY & TYPE CONVERSION
// // ═══════════════════════════════════════════════════════════════════════════

// void section5_easy_1_ternary_max() {
//     printf("\n--- S5 Easy 1: Ternary Max ---\n");
//     int a = 15, b = 10;
//     int max = (a > b) ? a : b;
//     printf("Max of %d and %d is %d\n", a, b, max);
// }

// void section5_easy_2_conversion() {
//     printf("\n--- S5 Easy 2: Int to Float ---\n");
//     int i = 10;
//     float f = (float)i;
//     printf("Int: %d | Float: %.1f\n", i, f);
// }

// void section5_medium_3_even_odd_ternary() {
//     printf("\n--- S5 Medium 3: Even/Odd with Ternary ---\n");
//     int num = 17;
//     printf("%d is %s\n", num, (num % 2 == 0) ? "EVEN" : "ODD");
// }

// void section5_medium_4_temp_conversion() {
//     printf("\n--- S5 Medium 4: Celsius to Fahrenheit ---\n");
//     float celsius = 25.0;
//     float fahrenheit = (celsius * 9.0/5.0) + 32;
//     printf("%.1f°C = %.1f°F\n", celsius, fahrenheit);
// }

// void section5_medium_5_char_conversion() {
//     printf("\n--- S5 Medium 5: Char to Int and Vice Versa ---\n");
//     char ch = 'A';
//     int ascii = (int)ch;
//     printf("Char: %c | ASCII: %d\n", ch, ascii);
//     printf("ASCII 66 = Char: %c\n", (char)66);
// }

// void section5_hard_5_nested_ternary() {
//     printf("\n--- S5 Hard 5: Nested Ternary (Largest of 3) ---\n");
//     int p = 20, q = 55, r = 30;
//     int largest = (p > q) ? ((p > r) ? p : r) : ((q > r) ? q : r);
//     printf("Largest of %d, %d, %d is %d\n", p, q, r, largest);
// }

// void section5_hard_6_implicit_explicit() {
//     printf("\n--- S5 Hard 6: Implicit vs Explicit Conversion ---\n");
//     int a = 10;
//     float b = 3.0;
//     printf("Implicit: %d + %.1f = %.1f\n", a, b, a + b);
//     printf("Explicit: (float)%d + %.1f = %.1f\n", a, a, (float)a + b);
//     printf("int to char: %d -> %c\n", 65, (char)65);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 6: CONDITIONAL STATEMENTS
// // ═══════════════════════════════════════════════════════════════════════════

// void section6_easy_1_pos_neg() {
//     printf("\n--- S6 Easy 1: Positive/Negative ---\n");
//     int num = -15;
//     if (num > 0)
//         printf("%d is POSITIVE\n", num);
//     else if (num < 0)
//         printf("%d is NEGATIVE\n", num);
//     else
//         printf("%d is ZERO\n", num);
// }

// void section6_easy_2_voting() {
//     printf("\n--- S6 Easy 2: Voting Eligibility ---\n");
//     int age = 22;
//     if (age >= 18)
//         printf("Age %d: ELIGIBLE to vote\n", age);
//     else
//         printf("Age %d: NOT eligible to vote\n", age);
// }

// void section6_medium_3_largest_three() {
//     printf("\n--- S6 Medium 3: Largest of 3 Numbers ---\n");
//     int x = 45, y = 23, z = 67;
//     if (x >= y && x >= z)
//         printf("Largest: %d\n", x);
//     else if (y >= x && y >= z)
//         printf("Largest: %d\n", y);
//     else
//         printf("Largest: %d\n", z);
// }

// void section6_medium_4_calculator() {
//     printf("\n--- S6 Medium 4: Simple Calculator ---\n");
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

// void section6_hard_5_grades() {
//     printf("\n--- S6 Hard 5: Grade System ---\n");
//     int marks = 78;
//     char grade;
//     if (marks >= 90) grade = 'A';
//     else if (marks >= 80) grade = 'B';
//     else if (marks >= 70) grade = 'C';
//     else if (marks >= 60) grade = 'D';
//     else grade = 'F';
//     printf("Marks: %d | Grade: %c\n", marks, grade);
// }

// void section6_hard_6_menu() {
//     printf("\n--- S6 Hard 6: Menu-Driven Program ---\n");
//     int choice = 2;
//     switch (choice) {
//         case 1: printf("Option 1: Add\n"); break;
//         case 2: printf("Option 2: Subtract\n"); break;
//         case 3: printf("Option 3: Multiply\n"); break;
//         case 4: printf("Option 4: Divide\n"); break;
//         default: printf("Invalid choice\n");
//     }
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 7: LOOPS & JUMP STATEMENTS
// // ═══════════════════════════════════════════════════════════════════════════

// void section7_easy_1_numbers() {
//     printf("\n--- S7 Easy 1: Print 1-10 ---\n");
//     for (int i = 1; i <= 10; i++)
//         printf("%d ", i);
//     printf("\n");
// }

// void section7_easy_2_table() {
//     printf("\n--- S7 Easy 2: Multiplication Table (5) ---\n");
//     for (int i = 1; i <= 10; i++)
//         printf("5 × %d = %d\n", i, 5 * i);
// }

// void section7_medium_3_factorial() {
//     printf("\n--- S7 Medium 3: Factorial of 5 ---\n");
//     int n = 5, fact = 1;
//     for (int i = 1; i <= n; i++)
//         fact *= i;
//     printf("5! = %d\n", fact);
// }

// void section7_medium_4_reverse() {
//     printf("\n--- S7 Medium 4: Reverse Number ---\n");
//     int num = 12345, rev = 0;
//     while (num > 0) {
//         rev = rev * 10 + (num % 10);
//         num /= 10;
//     }
//     printf("Reversed: %d\n", rev);
// }

// void section7_hard_5_triangle() {
//     printf("\n--- S7 Hard 5: Triangle Pattern ---\n");
//     for (int i = 1; i <= 5; i++) {
//         for (int j = 1; j <= i; j++)
//             printf("* ");
//         printf("\n");
//     }
// }

// void section7_hard_6_fibonacci() {
//     printf("\n--- S7 Hard 6: Fibonacci Series (10 terms) ---\n");
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

// void section7_hard_7_break_continue() {
//     printf("\n--- S7 Hard 7: Break & Continue ---\n");
//     for (int i = 1; i <= 10; i++) {
//         if (i == 5) continue;
//         if (i == 8) break;
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// void section7_hard_8_infinite() {
//     printf("\n--- S7 Hard 8: Infinite Loop Example ---\n");
//     int count = 0;
//     while (1) {
//         printf("%d ", count);
//         count++;
//         if (count >= 5) break;
//     }
//     printf("\n");
// }

// void section7_extra_prime() {
//     printf("\n--- S7 Extra: Check Prime Number ---\n");
//     int num = 17, isPrime = 1;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime)
//         printf("%d is PRIME\n", num);
//     else
//         printf("%d is NOT PRIME\n", num);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 8: ARRAYS
// // ═══════════════════════════════════════════════════════════════════════════

// void section8_easy_1_array_input() {
//     printf("\n--- S8 Easy 1: Array Input/Output ---\n");
//     int arr[5];
//     printf("Enter 5 numbers: ");
//     for (int i = 0; i < 5; i++)
//         scanf("%d", &arr[i]);
//     printf("Array: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// void section8_easy_2_array_sum() {
//     printf("\n--- S8 Easy 2: Array Sum ---\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int sum = 0;
//     for (int i = 0; i < 5; i++)
//         sum += arr[i];
//     printf("Sum: %d\n", sum);
// }

// void section8_medium_3_max_min() {
//     printf("\n--- S8 Medium 3: Max & Min ---\n");
//     int arr[] = {15, 42, 8, 56, 23};
//     int max = arr[0], min = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > max) max = arr[i];
//         if (arr[i] < min) min = arr[i];
//     }
//     printf("Max: %d | Min: %d\n", max, min);
// }

// void section8_medium_4_reverse() {
//     printf("\n--- S8 Medium 4: Reverse Array ---\n");
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

// void section8_hard_5_bubble_sort() {
//     printf("\n--- S8 Hard 5: Bubble Sort ---\n");
//     int arr[] = {64, 34, 25, 12, 22};
//     printf("Original: ");
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("\nSorted: ");
//     for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//     printf("\n");
// }

// void section8_hard_6_search() {
//     printf("\n--- S8 Hard 6: Linear Search ---\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int search = 30;
//     int found = -1;
//     for (int i = 0; i < 5; i++) {
//         if (arr[i] == search) {
//             found = i;
//             break;
//         }
//     }
//     if (found != -1)
//         printf("%d found at index %d\n", search, found);
//     else
//         printf("%d not found\n", search);
// }

// void section8_hard_7_matrix() {
//     printf("\n--- S8 Hard 7: Matrix Addition ---\n");
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

// void section9_easy_1_string() {
//     printf("\n--- S9 Easy 1: String Input/Output ---\n");
//     char str[50];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("String: %s\n", str);
// }

// void section9_easy_2_length() {
//     printf("\n--- S9 Easy 2: String Length ---\n");
//     char str[] = "Hello";
//     printf("String: %s | Length: %lu\n", str, strlen(str));
// }

// void section9_medium_3_copy() {
//     printf("\n--- S9 Medium 3: Copy String ---\n");
//     char src[] = "Hello World";
//     char dest[50];
//     for (int i = 0; src[i] != '\0'; i++)
//         dest[i] = src[i];
//     dest[strlen(src)] = '\0';
//     printf("Original: %s\nCopy: %s\n", src, dest);
// }

// void section9_medium_4_compare() {
//     printf("\n--- S9 Medium 4: Compare Strings ---\n");
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

// void section9_hard_5_palindrome() {
//     printf("\n--- S9 Hard 5: Check Palindrome ---\n");
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

// void section9_hard_6_reverse() {
//     printf("\n--- S9 Hard 6: Reverse String ---\n");
//     char str[] = "Programming";
//     int len = strlen(str);
//     printf("Original: %s\n", str);
//     printf("Reversed: ");
//     for (int i = len - 1; i >= 0; i--)
//         printf("%c", str[i]);
//     printf("\n");
// }

// void section9_hard_7_vowels() {
//     printf("\n--- S9 Hard 7: Count Vowels & Consonants ---\n");
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

// void arraySum(int arr[], int size, int *result) {
//     *result = 0;
//     for (int i = 0; i < size; i++)
//         *result += arr[i];
// }

// int funcPointerAdd(int x, int y) { return x + y; }
// int funcPointerMul(int x, int y) { return x * y; }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 11: STORAGE CLASSES
// // ═══════════════════════════════════════════════════════════════════════════

// void section11_easy_1_auto() {
//     printf("\n--- S11 Easy 1: Auto Storage Class ---\n");
//     auto int x = 10;  // auto is default for local variables
//     printf("Auto variable x = %d\n", x);
// }

// void section11_easy_2_static() {
//     printf("\n--- S11 Easy 2: Static Storage Class ---\n");
//     static int count = 0;
//     count++;
//     printf("Static count = %d\n", count);
// }

// int global_var = 100;  // Global variable

// void section11_medium_3_local_global() {
//     printf("\n--- S11 Medium 3: Local vs Global ---\n");
//     int x = 5;  // Local variable
//     printf("Local x = %d\n", x);
//     printf("Global var = %d\n", global_var);
// }

// void section11_medium_4_extern() {
//     printf("\n--- S11 Medium 4: Extern Usage ---\n");
//     printf("Accessing global_var (extern): %d\n", global_var);
// }

// void section11_hard_5_static_lifetime() {
//     printf("\n--- S11 Hard 5: Static Variable Lifetime ---\n");
//     static int counter = 0;
//     counter++;
//     printf("Call count: %d\n", counter);
//     printf("Run this multiple times to see counter increment\n");
// }

// void section11_hard_6_storage_classes() {
//     printf("\n--- S11 Hard 6: All Storage Classes ---\n");
//     register int reg = 50;  // Suggestion to store in register
//     static int stat = 60;
//     auto int au = 70;
//     int x = 80;
//     printf("Register: %d | Static: %d | Auto: %d | Default: %d\n", reg, stat, au, x);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 12: POINTERS
// // ═══════════════════════════════════════════════════════════════════════════

// void section12_easy_1_pointer_value() {
//     printf("\n--- S12 Easy 1: Print Value Using Pointer ---\n");
//     int num = 42;
//     int *ptr = &num;
//     printf("Variable num = %d\n", num);
//     printf("Value via pointer = %d\n", *ptr);
// }

// void section12_easy_2_address() {
//     printf("\n--- S12 Easy 2: Print Address of Variable ---\n");
//     int x = 100;
//     printf("Variable x = %d\n", x);
//     printf("Address of x = %p\n", (void*)&x);
// }

// void section12_easy_3_pointer_basics() {
//     printf("\n--- S12 Easy 3: Pointer Basics ---\n");
//     int a = 25;
//     int *p = &a;
//     printf("a = %d\n", a);
//     printf("&a = %p\n", (void*)&a);
//     printf("p = %p\n", (void*)p);
//     printf("*p = %d\n", *p);
// }

// void section12_medium_3_swap_pointers() {
//     printf("\n--- S12 Medium 3: Swap Using Pointers ---\n");
//     int x = 10, y = 20;
//     int *px = &x, *py = &y;
//     printf("Before: x=%d, y=%d\n", x, y);
//     int temp = *px;
//     *px = *py;
//     *py = temp;
//     printf("After: x=%d, y=%d\n", x, y);
// }

// void section12_medium_4_pointer_array() {
//     printf("\n--- S12 Medium 4: Pointer with Arrays ---\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     printf("Array elements via pointer:\n");
//     for (int i = 0; i < 5; i++)
//         printf("arr[%d] = %d (via *(ptr+%d) = %d)\n", i, arr[i], i, *(ptr + i));
// }

// void section12_medium_5_char_pointer() {
//     printf("\n--- S12 Medium 5: Pointer to Char ---\n");
//     char ch = 'A';
//     char *pch = &ch;
//     printf("Character = %c\n", ch);
//     printf("Character via pointer = %c\n", *pch);
//     printf("ASCII value = %d\n", (int)*pch);
// }

// void section12_hard_5_double_pointer() {
//     printf("\n--- S12 Hard 5: Double Pointer Example ---\n");
//     int x = 100;
//     int *ptr = &x;
//     int **pptr = &ptr;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);
//     printf("**pptr = %d\n", **pptr);
//     printf("Address of x = %p\n", (void*)&x);
//     printf("ptr = %p\n", (void*)ptr);
//     printf("pptr = %p\n", (void*)pptr);
// }

// void section12_hard_6_pointer_operations() {
//     printf("\n--- S12 Hard 6: Pointer to Pointer Operations ---\n");
//     int a = 50, b = 75;
//     int *pa = &a, *pb = &b;
//     int **ppa = &pa, **ppb = &pb;
//     printf("a=%d, b=%d\n", a, b);
//     printf("**ppa = %d | **ppb = %d\n", **ppa, **ppb);
//     // Swap pointers
//     int *temp = *ppa;
//     *ppa = *ppb;
//     *ppb = temp;
//     printf("After swap: a=%d, b=%d\n", a, b);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // SECTION 13: POINTER ARITHMETIC & ARRAYS
// // ═══════════════════════════════════════════════════════════════════════════

// void section13_easy_1_traverse_array() {
//     printf("\n--- S13 Easy 1: Traverse Array Using Pointer ---\n");
//     int arr[] = {5, 10, 15, 20, 25};
//     int *ptr = arr;
//     printf("Array elements: ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", *(ptr + i));
//     printf("\n");
// }

// void section13_easy_2_increment_pointer() {
//     printf("\n--- S13 Easy 2: Increment Pointer ---\n");
//     int arr[] = {100, 200, 300};
//     int *ptr = arr;
//     printf("First element: %d\n", *ptr);
//     ptr++;
//     printf("Second element: %d\n", *ptr);
//     ptr++;
//     printf("Third element: %d\n", *ptr);
// }

// void section13_easy_3_pointer_arithmetic() {
//     printf("\n--- S13 Easy 3: Pointer Arithmetic ---\n");
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
//     printf("ptr: %p (points to arr[0])\n", (void*)ptr);
//     printf("ptr+1: %p (points to arr[1])\n", (void*)(ptr + 1));
//     printf("ptr+2: %p (points to arr[2])\n", (void*)(ptr + 2));
//     printf("*(ptr+2) = %d\n", *(ptr + 2));
// }

// void section13_medium_3_pointer_vs_array() {
//     printf("\n--- S13 Medium 3: Pointer vs Array Difference ---\n");
//     int arr[] = {1, 2, 3, 4, 5};
//     int *ptr = arr;
//     printf("sizeof(arr) = %lu (array size)\n", sizeof(arr));
//     printf("sizeof(ptr) = %lu (pointer size)\n", sizeof(ptr));
//     printf("arr[2] = %d | ptr[2] = %d\n", arr[2], ptr[2]);
// }

// void section13_medium_4_2d_array_pointer() {
//     printf("\n--- S13 Medium 4: Access 2D Array Using Pointer ---\n");
//     int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//     int *ptr = (int*)arr;
//     printf("2D Array elements via pointer:\n");
//     for (int i = 0; i < 6; i++)
//         printf("%d ", *(ptr + i));
//     printf("\n");
// }

// void section13_hard_5_array_of_pointers() {
//     printf("\n--- S13 Hard 5: Array of Pointers ---\n");
//     int a = 10, b = 20, c = 30;
//     int *arr[] = {&a, &b, &c};
//     printf("Array of pointers:\n");
//     for (int i = 0; i < 3; i++)
//         printf("arr[%d] -> %d\n", i, *arr[i]);
// }

// void section13_hard_6_pointer_to_array() {
//     printf("\n--- S13 Hard 6: Pointer to Array Operations ---\n");
//     int arr[] = {100, 200, 300, 400, 500};
//     int *ptr = arr;
//     printf("Array access via pointer:\n");
//     for (int i = 0; i < 5; i++, ptr++)
//         printf("Value: %d\n", *ptr);
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
// int divide(int x, int y) { return y != 0 ? x / y : 0; }

// void printOperation(int (*func)(int, int), int a, int b) {
//     printf("Result: %d\n", func(a, b));
// }

// void section14_easy_1_pass_pointer() {
//     printf("\n--- S14 Easy 1: Pass Pointer to Function ---\n");
//     int x = 50;
//     printf("Before: x = %d\n", x);
//     modifyValue(&x);
//     printf("After: x = %d\n", x);
// }

// void section14_easy_2_pointer_param() {
//     printf("\n--- S14 Easy 2: Pointer Function Parameter ---\n");
//     int arr[] = {10, 20, 30};
//     for (int i = 0; i < 3; i++) {
//         modifyValue(&arr[i]);
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
// }

// void section14_medium_2_return_pointer() {
//     printf("\n--- S14 Medium 2: Return Pointer from Function ---\n");
//     int a = 100;
//     int *ptr = retPtr(&a);
//     printf("Returned pointer value: %d\n", *ptr);
// }

// void section14_medium_3_malloc() {
//     printf("\n--- S14 Medium 3: Dynamic Memory (malloc) ---\n");
//     int n = 5;
//     int *arr = (int*)malloc(n * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return;
//     }
//     printf("Enter 5 integers: ");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);
//     printf("Array: ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     free(arr);
// }

// void section14_medium_4_malloc_array() {
//     printf("\n--- S14 Medium 4: Dynamic 2D Array ---\n");
//     int rows = 2, cols = 3;
//     int **matrix = (int**)malloc(rows * sizeof(int*));
//     for (int i = 0; i < rows; i++)
//         matrix[i] = (int*)malloc(cols * sizeof(int));
    
//     printf("Enter elements:\n");
//     for (int i = 0; i < rows; i++)
//         for (int j = 0; j < cols; j++)
//             scanf("%d", &matrix[i][j]);
    
//     printf("Matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++)
//             printf("%d ", matrix[i][j]);
//         printf("\n");
//     }
    
//     for (int i = 0; i < rows; i++)
//         free(matrix[i]);
//     free(matrix);
// }

// void section14_hard_4_function_pointer() {
//     printf("\n--- S14 Hard 4: Function Pointer Example ---\n");
//     int (*funcPtr)(int, int);
//     funcPtr = multiply;
//     printf("10 * 5 = %d\n", funcPtr(10, 5));
//     funcPtr = divide;
//     printf("20 / 4 = %d\n", funcPtr(20, 4));
// }

// void section14_hard_5_callback() {
//     printf("\n--- S14 Hard 5: Callback Using Function Pointer ---\n");
//     printf("Addition: ");
//     printOperation(multiply, 8, 3);
//     printf("Division: ");
//     printOperation(divide, 20, 4);
// }

// void section10_easy_1_add() {
//     printf("\n--- S10 Easy 1: Add Two Numbers ---\n");
//     printf("add(10, 20) = %d\n", add(10, 20));
// }

// void section10_easy_2_prime() {
//     printf("\n--- S10 Easy 2: Check Prime ---\n");
//     int num = 17;
//     printf("%d is %s\n", num, isPrime(num) ? "PRIME" : "NOT PRIME");
// }

// void section10_medium_3_factorial() {
//     printf("\n--- S10 Medium 3: Factorial ---\n");
//     printf("5! = %d\n", factorial(5));
// }

// void section10_medium_4_fibonacci() {
//     printf("\n--- S10 Medium 4: Fibonacci ---\n");
//     printf("fib(7) = %d\n", fibonacci(7));
// }

// void section10_hard_5_sum_digits() {
//     printf("\n--- S10 Hard 5: Sum of Digits ---\n");
//     int n = 12345;
//     printf("Sum of digits of %d = %d\n", n, sumDigits(n));
// }

// void section10_hard_6_hanoi() {
//     printf("\n--- S10 Hard 6: Tower of Hanoi (3 disks) ---\n");
//     hanoi(3, 'A', 'C', 'B');
// }

// void section10_hard_7_array() {
//     printf("\n--- S10 Hard 7: Array to Function ---\n");
//     int arr[] = {1, 2, 3, 4, 5};
//     int sum;
//     arraySum(arr, 5, &sum);
//     printf("Sum: %d\n", sum);
// }

// // ═══════════════════════════════════════════════════════════════════════════
// // MAIN MENU
// // ═══════════════════════════════════════════════════════════════════════════

// int main() {
//     int section, choice;
    
//     while (1) {
//         printf("\n╔════════════════════════════════════════════════════════════╗\n");
//         printf("║         C PROGRAMMING SOLUTIONS - MAIN MENU              ║\n");
//         printf("╠════════════════════════════════════════════════════════════╣\n");
//         printf("║  1. Input/Output (9 programs)                            ║\n");
//         printf("║  2. Variables & Constants (8 programs)                   ║\n");
//         printf("║  3. Data Types (8 programs)                              ║\n");
//         printf("║  4. Operators (7 programs)                               ║\n");
//         printf("║  5. Ternary & Type Conversion (6 programs)               ║\n");
//         printf("║  6. Conditional Statements (6 programs)                  ║\n");
//         printf("║  7. Loops & Jump Statements (8 programs)                 ║\n");
//         printf("║  8. Arrays (7 programs)                                  ║\n");
//         printf("║  9. Strings (7 programs)                                 ║\n");
//         printf("║  10. Functions & Recursion (7 programs)                  ║\n");
//         printf("║  11. Storage Classes (6 programs)                        ║\n");
//         printf("║  12. Pointers (6 programs)                               ║\n");
//         printf("║  13. Pointer Arithmetic & Arrays (6 programs)            ║\n");
//         printf("║  14. Advanced Pointers (5 programs)                      ║\n");
//         printf("║  0. EXIT                                                 ║\n");
//         printf("╚════════════════════════════════════════════════════════════╝\n");
        
//         printf("Select Section (0-14): ");
//         scanf("%d", &section);
        
//         if (section == 0) {
//             printf("\nThank you for practicing C! Goodbye!\n");
//             break;
//         }
        
//         switch (section) {
//             // SECTION 1
//             case 1:
//                 printf("\n--- SECTION 1: INPUT/OUTPUT ---\n");
//                 printf("1. Hello World  2. Integer  3. Two Integers  4. Float\n");
//                 printf("5. Character  6. Arithmetic  7. ASCII  8. Average\n");
//                 printf("9. Conversion  10. Circle Area  11. Formatted  12. Table\n");
//                 printf("13. Report  14. Salary  15. Inventory (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section1_easy_1_hello_world(); break;
//                     case 2: section1_easy_2_integer_input(); break;
//                     case 3: section1_easy_3_two_integers(); break;
//                     case 4: section1_easy_4_float_input(); break;
//                     case 5: section1_easy_5_char_input(); break;
//                     case 6: section1_medium_3_arithmetic(); break;
//                     case 7: section1_medium_4_ascii(); break;
//                     case 8: section1_medium_5_average(); break;
//                     case 9: section1_medium_6_conversion(); break;
//                     case 10: section1_medium_7_circle(); break;
//                     case 11: section1_hard_5_formatted(); break;
//                     case 12: section1_hard_6_table(); break;
//                     case 13: section1_hard_7_report(); break;
//                     case 14: section1_hard_8_salary(); break;
//                     case 15: section1_hard_9_inventory(); break;
//                 }
//                 break;
            
//             // SECTION 2
//             case 2:
//                 printf("\n--- SECTION 2: VARIABLES & CONSTANTS ---\n");
//                 printf("1. Variables  2. Constants  3. Temp  4. Swap 3rd\n");
//                 printf("5. Swap No-3rd  6. Largest  7. Macros  8. Type Sizes\n");
//                 printf("9. Largest Adv  10. Macros Adv (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section2_easy_1_variables(); break;
//                     case 2: section2_easy_2_const(); break;
//                     case 3: section2_easy_3_temp(); break;
//                     case 4: section2_medium_3_swap_third(); break;
//                     case 5: section2_medium_4_swap_no_third(); break;
//                     case 6: section2_medium_5_largest(); break;
//                     case 7: section2_medium_6_macros(); break;
//                     case 8: section2_medium_7_type_sizes(); break;
//                     case 9: section2_hard_5_largest_advanced(); break;
//                     case 10: section2_hard_6_macros_advanced(); break;
//                 }
//                 break;
            
//             // SECTION 3
//             case 3:
//                 printf("\n--- SECTION 3: DATA TYPES ---\n");
//                 printf("1. Sizes  2. Values  3. Overflow  4. Conversion\n");
//                 printf("5. Promotion  6. Precision  7. Ranges  8. Casting (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section3_easy_1_sizes(); break;
//                     case 2: section3_easy_2_values(); break;
//                     case 3: section3_medium_3_overflow(); break;
//                     case 4: section3_medium_4_conversion(); break;
//                     case 5: section3_medium_5_promotion(); break;
//                     case 6: section3_medium_6_precision(); break;
//                     case 7: section3_hard_7_ranges(); break;
//                     case 8: section3_hard_8_casting(); break;
//                 }
//                 break;
            
//             // SECTION 4
//             case 4:
//                 printf("\n--- SECTION 4: OPERATORS ---\n");
//                 printf("1. Arithmetic  2. Even/Odd  3. Relational  4. Logical\n");
//                 printf("5. Bitwise XOR  6. Count 1s  7. Bitwise Ops (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section4_easy_1_arithmetic(); break;
//                     case 2: section4_easy_2_even_odd(); break;
//                     case 3: section4_medium_3_relational(); break;
//                     case 4: section4_medium_4_logical(); break;
//                     case 5: section4_hard_5_bitwise_swap(); break;
//                     case 6: section4_hard_6_count_ones(); break;
//                     case 7: section4_hard_7_bitwise_ops(); break;
//                 }
//                 break;
            
//             // SECTION 5
//             case 5:
//                 printf("\n--- SECTION 5: TERNARY & TYPE CONVERSION ---\n");
//                 printf("1. Ternary Max  2. Conversion  3. Even/Odd  4. Temp Conv\n");
//                 printf("5. Char Conv  6. Nested Ternary  7. Implicit/Explicit (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section5_easy_1_ternary_max(); break;
//                     case 2: section5_easy_2_conversion(); break;
//                     case 3: section5_medium_3_even_odd_ternary(); break;
//                     case 4: section5_medium_4_temp_conversion(); break;
//                     case 5: section5_medium_5_char_conversion(); break;
//                     case 6: section5_hard_5_nested_ternary(); break;
//                     case 7: section5_hard_6_implicit_explicit(); break;
//                 }
//                 break;
            
//             // SECTION 6
//             case 6:
//                 printf("\n--- SECTION 6: CONDITIONAL STATEMENTS ---\n");
//                 printf("1. Pos/Neg  2. Voting  3. Largest  4. Calculator\n");
//                 printf("5. Grades  6. Menu (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section6_easy_1_pos_neg(); break;
//                     case 2: section6_easy_2_voting(); break;
//                     case 3: section6_medium_3_largest_three(); break;
//                     case 4: section6_medium_4_calculator(); break;
//                     case 5: section6_hard_5_grades(); break;
//                     case 6: section6_hard_6_menu(); break;
//                 }
//                 break;
            
//             // SECTION 7
//             case 7:
//                 printf("\n--- SECTION 7: LOOPS & JUMP STATEMENTS ---\n");
//                 printf("1. 1-10  2. Table  3. Factorial  4. Reverse\n");
//                 printf("5. Triangle  6. Fibonacci  7. Break/Continue  8. Infinite\n");
//                 printf("9. Prime (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section7_easy_1_numbers(); break;
//                     case 2: section7_easy_2_table(); break;
//                     case 3: section7_medium_3_factorial(); break;
//                     case 4: section7_medium_4_reverse(); break;
//                     case 5: section7_hard_5_triangle(); break;
//                     case 6: section7_hard_6_fibonacci(); break;
//                     case 7: section7_hard_7_break_continue(); break;
//                     case 8: section7_hard_8_infinite(); break;
//                     case 9: section7_extra_prime(); break;
//                 }
//                 break;
            
//             // SECTION 8
//             case 8:
//                 printf("\n--- SECTION 8: ARRAYS ---\n");
//                 printf("1. Input/Output  2. Sum  3. Max/Min  4. Reverse\n");
//                 printf("5. Bubble Sort  6. Search  7. Matrix (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section8_easy_1_array_input(); break;
//                     case 2: section8_easy_2_array_sum(); break;
//                     case 3: section8_medium_3_max_min(); break;
//                     case 4: section8_medium_4_reverse(); break;
//                     case 5: section8_hard_5_bubble_sort(); break;
//                     case 6: section8_hard_6_search(); break;
//                     case 7: section8_hard_7_matrix(); break;
//                 }
//                 break;
            
//             // SECTION 9
//             case 9:
//                 printf("\n--- SECTION 9: STRINGS ---\n");
//                 printf("1. Input/Output  2. Length  3. Copy  4. Compare\n");
//                 printf("5. Palindrome  6. Reverse  7. Vowels/Consonants (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section9_easy_1_string(); break;
//                     case 2: section9_easy_2_length(); break;
//                     case 3: section9_medium_3_copy(); break;
//                     case 4: section9_medium_4_compare(); break;
//                     case 5: section9_hard_5_palindrome(); break;
//                     case 6: section9_hard_6_reverse(); break;
//                     case 7: section9_hard_7_vowels(); break;
//                 }
//                 break;
            
//             // SECTION 10
//             case 10:
//                 printf("\n--- SECTION 10: FUNCTIONS & RECURSION ---\n");
//                 printf("1. Add  2. Prime  3. Factorial  4. Fibonacci\n");
//                 printf("5. Sum Digits  6. Tower of Hanoi  7. Array to Function (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section10_easy_1_add(); break;
//                     case 2: section10_easy_2_prime(); break;
//                     case 3: section10_medium_3_factorial(); break;
//                     case 4: section10_medium_4_fibonacci(); break;
//                     case 5: section10_hard_5_sum_digits(); break;
//                     case 6: section10_hard_6_hanoi(); break;
//                     case 7: section10_hard_7_array(); break;
//                 }
//                 break;
            
//             // SECTION 11
//             case 11:
//                 printf("\n--- SECTION 11: STORAGE CLASSES ---\n");
//                 printf("1. Auto  2. Static  3. Local/Global  4. Extern\n");
//                 printf("5. Static Lifetime  6. All Storage Classes (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section11_easy_1_auto(); break;
//                     case 2: section11_easy_2_static(); break;
//                     case 3: section11_medium_3_local_global(); break;
//                     case 4: section11_medium_4_extern(); break;
//                     case 5: section11_hard_5_static_lifetime(); break;
//                     case 6: section11_hard_6_storage_classes(); break;
//                 }
//                 break;
            
//             // SECTION 12
//             case 12:
//                 printf("\n--- SECTION 12: POINTERS ---\n");
//                 printf("1. Pointer Value  2. Address  3. Basics  4. Swap Pointers\n");
//                 printf("5. Pointer Array  6. Char Pointer  7. Double Pointer\n");
//                 printf("8. Pointer Operations (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section12_easy_1_pointer_value(); break;
//                     case 2: section12_easy_2_address(); break;
//                     case 3: section12_easy_3_pointer_basics(); break;
//                     case 4: section12_medium_3_swap_pointers(); break;
//                     case 5: section12_medium_4_pointer_array(); break;
//                     case 6: section12_medium_5_char_pointer(); break;
//                     case 7: section12_hard_5_double_pointer(); break;
//                     case 8: section12_hard_6_pointer_operations(); break;
//                 }
//                 break;
            
//             // SECTION 13
//             case 13:
//                 printf("\n--- SECTION 13: POINTER ARITHMETIC & ARRAYS ---\n");
//                 printf("1. Traverse Array  2. Increment Pointer  3. Arithmetic\n");
//                 printf("4. Pointer vs Array  5. 2D Array Pointer  6. Array of Pointers\n");
//                 printf("7. Pointer to Array (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section13_easy_1_traverse_array(); break;
//                     case 2: section13_easy_2_increment_pointer(); break;
//                     case 3: section13_easy_3_pointer_arithmetic(); break;
//                     case 4: section13_medium_3_pointer_vs_array(); break;
//                     case 5: section13_medium_4_2d_array_pointer(); break;
//                     case 6: section13_hard_5_array_of_pointers(); break;
//                     case 7: section13_hard_6_pointer_to_array(); break;
//                 }
//                 break;
            
//             // SECTION 14
//             case 14:
//                 printf("\n--- SECTION 14: ADVANCED POINTERS ---\n");
//                 printf("1. Pass Pointer  2. Pointer Parameter  3. Return Pointer\n");
//                 printf("4. Dynamic Memory  5. Dynamic 2D Array  6. Function Pointer\n");
//                 printf("7. Callback (0-exit): ");
//                 scanf("%d", &choice);
//                 switch (choice) {
//                     case 1: section14_easy_1_pass_pointer(); break;
//                     case 2: section14_easy_2_pointer_param(); break;
//                     case 3: section14_medium_2_return_pointer(); break;
//                     case 4: section14_medium_3_malloc(); break;
//                     case 5: section14_medium_4_malloc_array(); break;
//                     case 6: section14_hard_4_function_pointer(); break;
//                     case 7: section14_hard_5_callback(); break;
//                 }
//                 break;
            
//             default:
//                 printf("Invalid option!\n");
//         }
//     }
    
//     return 0;
// }
