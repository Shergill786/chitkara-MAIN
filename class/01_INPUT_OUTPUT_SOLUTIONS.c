/*
╔═══════════════════════════════════════════════════════════════╗
║          SECTION 1: INPUT / OUTPUT FUNDAMENTALS              ║
║              Complete Solutions & Practice Problems           ║
╚═══════════════════════════════════════════════════════════════╝

Topics Covered:
  • printf() and scanf() basics
  • Data input and formatting
  • Buffer management
  • String input handling
*/

#include <stdio.h>
#include <string.h>

// ═══════════════════════════════════════════════════════════════
// EASY LEVEL
// ═══════════════════════════════════════════════════════════════

/* 1. Hello World Program */
void easy_1_hello_world() {
    printf("\n--- Easy 1: Hello World ---\n");
    printf("Hello World\n");
}

/* 2. Take integer input and display */
void easy_2_integer_input() {
    printf("\n--- Easy 2: Integer Input ---\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}

/* ADDITIONAL EASY PRACTICE PROBLEMS */

/* 3. Take two integers and display them */
void easy_3_two_integers() {
    printf("\n--- Easy 3: Two Integers ---\n");
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("First: %d, Second: %d\n", a, b);
}

/* 4. Take float input and display */
void easy_4_float_input() {
    printf("\n--- Easy 4: Float Input ---\n");
    float price;
    printf("Enter price: ");
    scanf("%f", &price);
    printf("Price = %.2f\n", price);
}

/* 5. Take character input and display */
void easy_5_char_input() {
    printf("\n--- Easy 5: Character Input ---\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c clears whitespace
    printf("You entered: %c\n", ch);
}

// ═══════════════════════════════════════════════════════════════
// MEDIUM LEVEL
// ═══════════════════════════════════════════════════════════════

/* 3. Input two numbers and print sum, difference, product */
void medium_3_arithmetic_operations() {
    printf("\n--- Medium 3: Arithmetic Operations ---\n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
}

/* 4. Take character and print ASCII value */
void medium_4_ascii_value() {
    printf("\n--- Medium 4: ASCII Value ---\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Character: %c\n", ch);
    printf("ASCII Value: %d\n", (int)ch);
    printf("Hex Value: %X\n", (int)ch);
}

/* ADDITIONAL MEDIUM PRACTICE PROBLEMS */

/* 5. Input three numbers and display their average */
void medium_5_average() {
    printf("\n--- Medium 5: Average of Three Numbers ---\n");
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    float avg = (a + b + c) / 3.0;
    printf("Average: %.2f\n", avg);
}

/* 6. Input distance in km and convert to miles */
void medium_6_km_to_miles() {
    printf("\n--- Medium 6: Distance Conversion ---\n");
    float km;
    printf("Enter distance in km: ");
    scanf("%f", &km);
    float miles = km * 0.621371;
    printf("%.2f km = %.2f miles\n", km, miles);
}

/* 7. Input radius and display area of circle */
void medium_7_circle_area() {
    printf("\n--- Medium 7: Circle Area ---\n");
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    float area = 3.14159 * radius * radius;
    printf("Area = %.2f\n", area);
}

// ═══════════════════════════════════════════════════════════════
// HARD LEVEL
// ═══════════════════════════════════════════════════════════════

/* 5. Input name, age, percentage - formatted output */
void hard_5_formatted_output() {
    printf("\n--- Hard 5: Formatted Output ---\n");
    char name[50];
    int age;
    float percentage;
    
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    
    printf("\n--- STUDENT INFORMATION ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Percentage: %.2f%%\n", percentage);
}

/* 6. Print formatted table with aligned columns */
void hard_6_formatted_table() {
    printf("\n--- Hard 6: Formatted Table ---\n");
    
    // Header
    printf("╔═══════════╦═══════════╦═══════════╗\n");
    printf("║   Item    ║   Price   ║  Quantity ║\n");
    printf("╠═══════════╬═══════════╬═══════════╣\n");
    
    // Data rows
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Apple", 1.50, 12);
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Banana", 0.75, 25);
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Orange", 2.00, 18);
    printf("║ %-9s ║ $%8.2f ║ %9d ║\n", "Mango", 3.50, 8);
    
    printf("╚═══════════╩═══════════╩═══════════╝\n");
}

/* ADDITIONAL HARD PRACTICE PROBLEMS */

/* 7. Input student marks and display report */
void hard_7_student_report() {
    printf("\n--- Hard 7: Student Report ---\n");
    char name[50];
    int roll;
    float hindi, english, math, science;
    
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks (Hindi English Math Science): ");
    scanf("%f %f %f %f", &hindi, &english, &math, &science);
    
    float total = hindi + english + math + science;
    float avg = total / 4.0;
    
    printf("\n╔════════════════════════════════════╗\n");
    printf("║       ACADEMIC REPORT CARD         ║\n");
    printf("╠════════════════════════════════════╣\n");
    printf("║ Name: %-28s ║\n", name);
    printf("║ Roll: %-28d ║\n", roll);
    printf("║ Hindi: %29.1f ║\n", hindi);
    printf("║ English: %27.1f ║\n", english);
    printf("║ Math: %30.1f ║\n", math);
    printf("║ Science: %27.1f ║\n", science);
    printf("╠════════════════════════════════════╣\n");
    printf("║ Total: %29.1f ║\n", total);
    printf("║ Average: %27.1f ║\n", avg);
    printf("╚════════════════════════════════════╝\n");
}

/* 8. Input employee details and display salary slip */
void hard_8_salary_slip() {
    printf("\n--- Hard 8: Salary Slip ---\n");
    char name[50];
    int empId, basicSalary;
    
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee ID: ");
    scanf("%d", &empId);
    printf("Enter basic salary: ");
    scanf("%d", &basicSalary);
    
    float hra = basicSalary * 0.10;  // 10% HRA
    float da = basicSalary * 0.05;   // 5% DA
    float tax = basicSalary * 0.05;  // 5% Tax
    float gross = basicSalary + hra + da;
    float net = gross - tax;
    
    printf("\n╔════════════════════════════════════════╗\n");
    printf("║             SALARY SLIP                ║\n");
    printf("╠════════════════════════════════════════╣\n");
    printf("║ Employee: %-30s ║\n", name);
    printf("║ ID: %-35d ║\n", empId);
    printf("╠════════════════════════════════════════╣\n");
    printf("║ Basic Salary:        $%14.2f   ║\n", (float)basicSalary);
    printf("║ HRA (10%%):           $%14.2f   ║\n", hra);
    printf("║ DA (5%%):            $%14.2f   ║\n", da);
    printf("║ Gross Salary:        $%14.2f   ║\n", gross);
    printf("║ Tax (5%%):           $%14.2f   ║\n", tax);
    printf("╠════════════════════════════════════════╣\n");
    printf("║ Net Salary:          $%14.2f   ║\n", net);
    printf("╚════════════════════════════════════════╝\n");
}

/* 9. Print multi-row formatted table with totals */
void hard_9_inventory_table() {
    printf("\n--- Hard 9: Inventory Table ---\n");
    
    printf("╔════════════════╦══════════╦═══════════╦═══════════════╗\n");
    printf("║ Product        ║   Qty    ║   Price   ║     Total     ║\n");
    printf("╠════════════════╬══════════╬═══════════╬═══════════════╣\n");
    
    int qty[] = {10, 15, 8, 12};
    float prices[] = {25.50, 15.00, 45.75, 32.25};
    const char *products[] = {"Notebook", "Pen", "Pencil", "Eraser"};
    float total_sum = 0;
    
    for (int i = 0; i < 4; i++) {
        float line_total = qty[i] * prices[i];
        total_sum += line_total;
        printf("║ %-14s ║ %8d ║ $%8.2f ║ $%11.2f ║\n", 
               products[i], qty[i], prices[i], line_total);
    }
    
    printf("╠════════════════╬══════════╬═══════════╬═══════════════╣\n");
    printf("║ TOTAL          ║          ║           ║ $%11.2f ║\n", total_sum);
    printf("╚════════════════╩══════════╩═══════════╩═══════════════╝\n");
}

// ═══════════════════════════════════════════════════════════════
// MAIN FUNCTION
// ═══════════════════════════════════════════════════════════════

int main() {
    int choice;
    
    while (1) {
        printf("\n╔═══════════════════════════════════════╗\n");
        printf("║   INPUT/OUTPUT - PRACTICE PROGRAMS   ║\n");
        printf("╠═══════════════════════════════════════╣\n");
        printf("║  EASY LEVEL:                          ║\n");
        printf("║  1. Hello World                       ║\n");
        printf("║  2. Integer Input                     ║\n");
        printf("║  3. Two Integers                      ║\n");
        printf("║  4. Float Input                       ║\n");
        printf("║  5. Character Input                   ║\n");
        printf("║                                       ║\n");
        printf("║  MEDIUM LEVEL:                        ║\n");
        printf("║  6. Arithmetic Operations             ║\n");
        printf("║  7. ASCII Value                       ║\n");
        printf("║  8. Average of Three Numbers          ║\n");
        printf("║  9. Distance Conversion               ║\n");
        printf("║  10. Circle Area                      ║\n");
        printf("║                                       ║\n");
        printf("║  HARD LEVEL:                          ║\n");
        printf("║  11. Student Information              ║\n");
        printf("║  12. Formatted Table                  ║\n");
        printf("║  13. Student Report                   ║\n");
        printf("║  14. Salary Slip                      ║\n");
        printf("║  15. Inventory Table                  ║\n");
        printf("║  0. EXIT                              ║\n");
        printf("╚═══════════════════════════════════════╝\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: easy_1_hello_world(); break;
            case 2: easy_2_integer_input(); break;
            case 3: easy_3_two_integers(); break;
            case 4: easy_4_float_input(); break;
            case 5: easy_5_char_input(); break;
            case 6: medium_3_arithmetic_operations(); break;
            case 7: medium_4_ascii_value(); break;
            case 8: medium_5_average(); break;
            case 9: medium_6_km_to_miles(); break;
            case 10: medium_7_circle_area(); break;
            case 11: hard_5_formatted_output(); break;
            case 12: hard_6_formatted_table(); break;
            case 13: hard_7_student_report(); break;
            case 14: hard_8_salary_slip(); break;
            case 15: hard_9_inventory_table(); break;
            case 0:
                printf("\nExiting program. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
