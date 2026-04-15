// /*
// ================================================================================
//                     POINTERS IN C - 5-10 MARKS QUESTIONS WITH SOLUTIONS
// ================================================================================

// TOPICS COVERED:
// 1. Memory addresses, declaration, initialization of pointers
// 2. Pointer Operators - Address-of (&) and Dereference (*)
// 3. Pointer Arithmetic - Incrementing/Decrementing
// 4. Relationship between Arrays and Pointers
// 5. Pointer to Array and Array of Pointers
// 6. Passing Pointers to Functions & Returning Pointers
// 7. Function Pointers

// ================================================================================
// */

// #include <stdio.h>
// #include <stdlib.h>

// // ==============================================================================
// // QUESTION 1: Memory Addresses, Declaration & Initialization (5 marks)
// // ==============================================================================
// /*
// QUESTION 1:
// Write a C program to demonstrate:
// a) Declaration of pointers
// b) Initialization of pointers with address-of operator (&)
// c) Display memory addresses and values using pointers

// SOLUTION:
// */

// void question1_solution() {
//     printf("\n========== QUESTION 1: Pointer Basics ==========\n");
    
//     int x = 10;
//     float y = 3.14f;
//     char c = 'A';
    
//     // Declare and initialize pointers
//     int *ptr_x = &x;
//     float *ptr_y = &y;
//     char *ptr_c = &c;
    
//     printf("Variables and their addresses:\n");
//     printf("Variable x: value = %d, address = %p\n", x, (void*)&x);
//     printf("Variable y: value = %.2f, address = %p\n", y, (void*)&y);
//     printf("Variable c: value = %c, address = %p\n", c, (void*)&c);
    
//     printf("\nPointers and dereferenced values:\n");
//     printf("ptr_x: address = %p, dereferenced value = %d\n", (void*)ptr_x, *ptr_x);
//     printf("ptr_y: address = %p, dereferenced value = %.2f\n", (void*)ptr_y, *ptr_y);
//     printf("ptr_c: address = %p, dereferenced value = %c\n", (void*)ptr_c, *ptr_c);
    
//     // NULL pointer
//     int *ptr_null = NULL;
//     printf("\nNull pointer: %p\n", (void*)ptr_null);
// }

// // ==============================================================================
// // QUESTION 2: Address-of (&) and Dereference (*) Operators (5 marks)
// // ==============================================================================
// /*
// QUESTION 2:
// Explain with examples the difference between:
// a) Address-of operator (&)
// b) Dereference operator (*)
// c) Write a program to swap two variables using pointers.

// SOLUTION:
// */

// void swap_using_pointers(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void question2_solution() {
//     printf("\n========== QUESTION 2: & and * Operators ==========\n");
    
//     int num1 = 5, num2 = 10;
    
//     printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
//     printf("Address of num1: %p\n", (void*)&num1);
//     printf("Address of num2: %p\n", (void*)&num2);
    
//     swap_using_pointers(&num1, &num2);
    
//     printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
//     // Demonstrating operators
//     int x = 20;
//     int *ptr = &x;  // & gives address
    
//     printf("\n& operator (Address-of):\n");
//     printf("&x = %p\n", (void*)&x);
//     printf("ptr = &x = %p\n", (void*)ptr);
    
//     printf("\n* operator (Dereference):\n");
//     printf("*ptr = %d (value at address pointed by ptr)\n", *ptr);
// }

// // ==============================================================================
// // QUESTION 3: Pointer Arithmetic (7 marks)
// // ==============================================================================
// /*
// QUESTION 3:
// Write a program to demonstrate pointer arithmetic:
// a) Incrementing pointers
// b) Decrementing pointers
// c) Pointer difference
// d) Show how pointer increment depends on data type size

// SOLUTION:
// */

// void question3_solution() {
//     printf("\n========== QUESTION 3: Pointer Arithmetic ==========\n");
    
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;
    
//     printf("Original array: ");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n\n");
    
//     printf("Pointer pointing to arr[0]:\n");
//     printf("*ptr = %d, ptr = %p\n", *ptr, (void*)ptr);
    
//     ptr++;  // Move to next element
//     printf("\nAfter ptr++ (ptr++; increments by size of int):\n");
//     printf("*ptr = %d, ptr = %p\n", *ptr, (void*)ptr);
//     printf("Bytes moved: %ld\n", (long)(&arr[1] - &arr[0]) * sizeof(int));
    
//     ptr--;  // Move to previous element
//     printf("\nAfter ptr-- (back to original):\n");
//     printf("*ptr = %d, ptr = %p\n", *ptr, (void*)ptr);
    
//     ptr += 3;  // Move 3 elements forward
//     printf("\nAfter ptr += 3 (move 3 elements forward):\n");
//     printf("*ptr = %d, ptr = %p\n", *ptr, (void*)ptr);
    
//     // Pointer difference
//     int *ptr1 = &arr[0];
//     int *ptr2 = &arr[4];
//     printf("\nPointer difference:\n");
//     printf("ptr2 - ptr1 = %ld (difference in number of elements)\n", ptr2 - ptr1);
// }

// // ==============================================================================
// // QUESTION 4: Arrays and Pointers Relationship (7 marks)
// // ==============================================================================
// /*
// QUESTION 4:
// Explain the relationship between arrays and pointers with a program that:
// a) Shows that array name is a pointer to first element
// b) Access array elements using pointer notation
// c) Compare array[i] with *(array+i) notation
// d) Use pointers to traverse the array

// SOLUTION:
// */

// void question4_solution() {
//     printf("\n========== QUESTION 4: Arrays and Pointers ==========\n");
    
//     int arr[] = {100, 200, 300, 400, 500};
//     int n = 5;
    
//     printf("Array: ");
//     for(int i = 0; i < n; i++) printf("%d ", arr[i]);
//     printf("\n\n");
    
//     // Array name is pointer to first element
//     printf("arr (array name): %p\n", (void*)arr);
//     printf("&arr[0] (address of first element): %p\n", (void*)&arr[0]);
//     printf("They are same: %s\n", arr == &arr[0] ? "YES" : "NO");
    
//     printf("\nAccessing elements using different notations:\n");
//     printf("Using array[i]       Using *(arr+i)       Using pointer\n");
    
//     int *ptr = arr;
//     for(int i = 0; i < n; i++) {
//         printf("arr[%d] = %d    |    *(arr+%d) = %d    |    *ptr = %d\n", 
//                i, arr[i], i, *(arr+i), *ptr);
//         ptr++;
//     }
// }

// // ==============================================================================
// // QUESTION 5: Pointer to Array vs Array of Pointers (8 marks)
// // ==============================================================================
// /*
// QUESTION 5:
// Distinguish between pointer to array and array of pointers with examples:
// a) Declare and initialize both
// b) Show difference in memory layout
// c) Demonstrate access methods
// d) Show size difference

// SOLUTION:
// */

// void question5_solution() {
//     printf("\n========== QUESTION 5: Pointer to Array vs Array of Pointers ==========\n");
    
//     // ==================== POINTER TO ARRAY ====================
//     printf("-------- POINTER TO ARRAY --------\n");
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
    
//     int (*ptr_to_arr)[3] = arr;  // Pointer to array of 3 elements
    
//     printf("Declare: int (*ptr_to_arr)[3] = arr;\n");
//     printf("Size of ptr_to_arr: %zu bytes\n", sizeof(ptr_to_arr));
//     printf("Size of array arr: %zu bytes\n", sizeof(arr));
    
//     printf("\nAccessing elements using pointer to array:\n");
//     for(int i = 0; i < 3; i++) {
//         for(int j = 0; j < 3; j++) {
//             printf("%d ", ptr_to_arr[i][j]);
//         }
//         printf("\n");
//     }
    
//     // ==================== ARRAY OF POINTERS ====================
//     printf("\n-------- ARRAY OF POINTERS --------\n");
    
//     int a = 10, b = 20, c = 30;
//     int *arr_of_ptrs[3] = {&a, &b, &c};  // Array of 3 pointers
    
//     printf("Declare: int *arr_of_ptrs[3] = {&a, &b, &c};\n");
//     printf("Size of arr_of_ptrs: %zu bytes\n", sizeof(arr_of_ptrs));
//     printf("Size of one pointer: %zu bytes\n", sizeof(int*));
    
//     printf("\nAccessing elements using array of pointers:\n");
//     for(int i = 0; i < 3; i++) {
//         printf("*arr_of_ptrs[%d] = %d\n", i, *arr_of_ptrs[i]);
//     }
    
//     printf("\n-------- KEY DIFFERENCES --------\n");
//     printf("Pointer to Array:     Points to entire array as one unit\n");
//     printf("Array of Pointers:    Array where each element is a pointer\n");
//     printf("ptr_to_arr + 1:       Moves by size of entire array\n");
//     printf("arr_of_ptrs + 1:      Moves by size of one pointer\n");
// }

// // ==============================================================================
// // QUESTION 6: Passing Pointers to Functions (7 marks)
// // ==============================================================================
// /*
// QUESTION 6:
// Write functions that demonstrate:
// a) Pass by value vs Pass by reference using pointers
// b) Modify variables through pointers
// c) Return pointer from function (with proper memory management)

// SOLUTION:
// */

// // Function 1: Pass by value (changes in function don't affect original)
// void increment_by_value(int x) {
//     x++;
//     printf("Inside function (by value): x = %d\n", x);
// }

// // Function 2: Pass by reference (changes affect original variable)
// void increment_by_reference(int *x) {
//     (*x)++;
//     printf("Inside function (by reference): *x = %d\n", *x);
// }

// // Function 3: Swap using pass by reference
// void swap_values(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Function 4: Return dynamically allocated memory
// int* allocate_array(int size) {
//     int *arr = (int *)malloc(size * sizeof(int));
//     for(int i = 0; i < size; i++) {
//         arr[i] = (i + 1) * 10;
//     }
//     return arr;  // Returning pointer to dynamically allocated memory
// }

// void question6_solution() {
//     printf("\n========== QUESTION 6: Passing Pointers to Functions ==========\n");
    
//     int num = 5;
    
//     printf("Original value: num = %d\n\n");
    
//     printf("Pass by Value:\n");
//     increment_by_value(num);
//     printf("After function call: num = %d (unchanged)\n\n", num);
    
//     printf("Pass by Reference (using pointer):\n");
//     increment_by_reference(&num);
//     printf("After function call: num = %d (changed)\n\n", num);
    
//     printf("Swapping using pointers:\n");
//     int x = 10, y = 20;
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap_values(&x, &y);
//     printf("After swap: x = %d, y = %d\n\n", x, y);
    
//     printf("Return pointer from function (dynamic allocation):\n");
//     int *dynamic_arr = allocate_array(5);
//     printf("Dynamically allocated array: ");
//     for(int i = 0; i < 5; i++) {
//         printf("%d ", dynamic_arr[i]);
//     }
//     printf("\n");
//     free(dynamic_arr);  // Free allocated memory
//     printf("Memory freed after use\n");
// }

// // ==============================================================================
// // QUESTION 7: Function Pointers (8 marks)
// // ==============================================================================
// /*
// QUESTION 7:
// Write a program demonstrating function pointers:
// a) Declare and initialize function pointer
// b) Call function through pointer
// c) Array of function pointers
// d) Callback function using function pointers
// e) Pass function pointer to another function

// SOLUTION:
// */

// // Simple mathematical functions
// int add(int a, int b) {
//     return a + b;
// }

// int subtract(int a, int b) {
//     return a - b;
// }

// int multiply(int a, int b) {
//     return a * b;
// }

// int divide(int a, int b) {
//     if(b == 0) {
//         printf("Error: Division by zero!\n");
//         return 0;
//     }
//     return a / b;
// }

// // Function that takes function pointer as parameter
// int perform_operation(int a, int b, int (*operation)(int, int)) {
//     return operation(a, b);
// }

// // Callback function
// void execute_callback(int x, void (*callback)(int)) {
//     printf("Before callback\n");
//     callback(x);
//     printf("After callback\n");
// }

// void print_number(int n) {
//     printf("Number from callback: %d\n", n);
// }

// void question7_solution() {
//     printf("\n========== QUESTION 7: Function Pointers ==========\n");
    
//     // ==================== BASIC FUNCTION POINTER ====================
//     printf("-------- BASIC FUNCTION POINTER --------\n");
    
//     int (*operation_ptr)(int, int);  // Declare function pointer
    
//     operation_ptr = add;  // Point to add function
//     printf("10 + 5 = %d\n", operation_ptr(10, 5));
    
//     operation_ptr = subtract;  // Point to subtract function
//     printf("10 - 5 = %d\n", operation_ptr(10, 5));
    
//     // ==================== ARRAY OF FUNCTION POINTERS ====================
//     printf("\n-------- ARRAY OF FUNCTION POINTERS --------\n");
    
//     int (*operations[4])(int, int) = {add, subtract, multiply, divide};
//     char op_names[4][10] = {"Add", "Subtract", "Multiply", "Divide"};
    
//     a = 20, b = 5;
//     for(int i = 0; i < 4; i++) {
//         printf("%s(20, 5) = %d\n", op_names[i], operations[i](a, b));
//     }
    
//     // ==================== FUNCTION POINTER AS PARAMETER ====================
//     printf("\n-------- FUNCTION POINTER AS PARAMETER --------\n");
    
//     printf("perform_operation(100, 10, add) = %d\n", perform_operation(100, 10, add));
//     printf("perform_operation(100, 10, subtract) = %d\n", perform_operation(100, 10, subtract));
//     printf("perform_operation(100, 10, multiply) = %d\n", perform_operation(100, 10, multiply));
//     printf("perform_operation(100, 10, divide) = %d\n", perform_operation(100, 10, divide));
    
//     // ==================== CALLBACK FUNCTION ====================
//     printf("\n-------- CALLBACK FUNCTION --------\n");
    
//     execute_callback(42, print_number);
// }

// // ==============================================================================
// // QUESTION 8: Comprehensive Pointer Problem (10 marks)
// // ==============================================================================
// /*
// QUESTION 8:
// Write a program that:
// a) Creates a structure to store student data
// b) Uses pointers to dynamically allocate memory for array of structures
// c) Passes structure pointers to functions
// d) Demonstrates pointer arithmetic on structures
// e) Displays all student information using pointers

// SOLUTION:
// */

// typedef struct {
//     int roll_no;
//     char name[50];
//     float gpa;
// } Student;

// void display_student_info(Student *student) {
//     printf("Roll: %d, Name: %s, GPA: %.2f\n", 
//            student->roll_no, student->name, student->gpa);
// }

// void question8_solution() {
//     printf("\n========== QUESTION 8: Comprehensive Pointer Problem ==========\n");
    
//     int n = 3;
    
//     // Dynamically allocate memory for array of structures
//     Student *students = (Student *)malloc(n * sizeof(Student));
    
//     if(students == NULL) {
//         printf("Memory allocation failed!\n");
//         return;
//     }
    
//     // Input student data using pointers
//     printf("Enter %d students' information:\n", n);
//     for(int i = 0; i < n; i++) {
//         printf("\nStudent %d:\n", i+1);
//         printf("Roll No: ");
//         scanf("%d", &students[i].roll_no);
//         printf("Name: ");
//         scanf("%s", students[i].name);
//         printf("GPA: ");
//         scanf("%f", &students[i].gpa);
//     }
    
//     // Display using various methods
//     printf("\n------- Using Array Index Notation -------\n");
//     for(int i = 0; i < n; i++) {
//         printf("Student %d: ", i+1);
//         display_student_info(&students[i]);
//     }
    
//     printf("\n------- Using Pointer Arithmetic -------\n");
//     Student *ptr = students;
//     for(int i = 0; i < n; i++) {
//         printf("Student %d: ", i+1);
//         display_student_info(ptr);
//         ptr++;  // Move to next student
//     }
    
//     // Find student with highest GPA
//     printf("\n------- Student with Highest GPA -------\n");
//     Student *max_student = students;
//     for(int i = 1; i < n; i++) {
//         if((students + i)->gpa > max_student->gpa) {
//             max_student = students + i;
//         }
//     }
//     printf("Student with highest GPA: ");
//     display_student_info(max_student);
    
//     free(students);
//     printf("\nMemory freed successfully\n");
// }

// // ==============================================================================
// // QUESTION 9: Complex Pointer Scenarios (10 marks)
// // ==============================================================================
// /*
// QUESTION 9:
// Write a program that demonstrates:
// a) Double pointers (pointer to pointer)
// b) Pointers to pointers for 2D array access
// c) Swap using double pointers
// d) Dynamic 2D array creation using double pointers

// SOLUTION:
// */

// void swap_using_double_pointers(int **ptr1, int **ptr2) {
//     int *temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
// }

// void question9_solution() {
//     printf("\n========== QUESTION 9: Double Pointers (Pointer to Pointer) ==========\n");
    
//     // ==================== BASIC DOUBLE POINTER ====================
//     printf("-------- BASIC DOUBLE POINTER --------\n");
    
//     int x = 100;
//     int *ptr = &x;           // Pointer to x
//     int **ptr_ptr = &ptr;    // Pointer to pointer
    
//     printf("x = %d\n", x);
//     printf("ptr = %p (address of x)\n", (void*)ptr);
//     printf("ptr_ptr = %p (address of ptr)\n", (void*)ptr_ptr);
    
//     printf("\nAccessing x through double pointer:\n");
//     printf("**ptr_ptr = %d\n", **ptr_ptr);
    
//     // ==================== 2D ARRAY WITH POINTERS ====================
//     printf("\n-------- 2D ARRAY USING DOUBLE POINTERS (Manual Allocation) --------\n");
    
//     int rows = 3, cols = 3;
    
//     // Dynamically allocate 2D array
//     int **matrix = (int **)malloc(rows * sizeof(int *));
//     for(int i = 0; i < rows; i++) {
//         matrix[i] = (int *)malloc(cols * sizeof(int));
//     }
    
//     // Fill matrix
//     printf("Matrix:\n");
//     int value = 1;
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             matrix[i][j] = value++;
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
    
//     // Free memory
//     for(int i = 0; i < rows; i++) {
//         free(matrix[i]);
//     }
//     free(matrix);
//     printf("2D array memory freed\n");
    
//     // ==================== SWAP USING DOUBLE POINTERS ====================
//     printf("\n-------- SWAP USING DOUBLE POINTERS --------\n");
    
//     int a = 50, b = 75;
//     int *ptr_a = &a, *ptr_b = &b;
    
//     printf("Before swap: a = %d, b = %d\n", a, b);
//     swap_using_double_pointers(&ptr_a, &ptr_b);
//     printf("After swap: a = %d, b = %d\n", a, b);
//     printf("ptr_a now points to: %d\n", *ptr_a);
//     printf("ptr_b now points to: %d\n", *ptr_b);
// }

// // ==============================================================================
// // QUESTION 10: Advanced Array of Structures with Function Pointers (10 marks)
// // ==============================================================================
// /*
// QUESTION 10:
// Write a complete student management system using:
// a) Array of structures (Student)
// b) Function pointers for different operations
// c) Dynamic memory allocation
// d) Complex pointer operations
// e) Demonstrate all pointer concepts together

// SOLUTION:
// */

// void add_student_record(Student *students, int index) {
//     printf("Enter Roll Number: ");
//     scanf("%d", &students[index].roll_no);
//     printf("Enter Name: ");
//     scanf("%s", students[index].name);
//     printf("Enter GPA: ");
//     scanf("%f", &students[index].gpa);
// }

// void display_single_student(Student *student) {
//     printf("| %5d | %-20s | %.2f |\n", 
//            student->roll_no, student->name, student->gpa);
// }

// void sort_students_by_gpa(Student *students, int n) {
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - i - 1; j++) {
//             if(students[j].gpa < students[j+1].gpa) {
//                 Student temp = students[j];
//                 students[j] = students[j+1];
//                 students[j+1] = temp;
//             }
//         }
//     }
// }

// void display_all_students(Student *students, int n, void (*display_func)(Student *)) {
//     printf("\n=== STUDENT RECORDS ===\n");
//     printf("| Roll# |       Name               | GPA  |\n");
//     printf("+-------+------------------------+------+\n");
//     for(int i = 0; i < n; i++) {
//         display_func(students + i);  // Using pointer arithmetic
//     }
// }

// void question10_solution() {
//     printf("\n========== QUESTION 10: Student Management System (Advanced) ==========\n");
    
//     int num_students = 3;
//     Student *student_db = (Student *)malloc(num_students * sizeof(Student));
    
//     if(student_db == NULL) {
//         printf("Memory allocation failed!\n");
//         return;
//     }
    
//     printf("Enter student records:\n");
//     for(int i = 0; i < num_students; i++) {
//         printf("\nStudent %d:\n", i+1);
//         add_student_record(student_db, i);
//     }
    
//     // Display original records
//     void (*display_ptr)(Student *, int) = display_all_students;
//     display_ptr(student_db, num_students, display_single_student);
    
//     // Sort by GPA and display
//     sort_students_by_gpa(student_db, num_students);
//     printf("\n=== AFTER SORTING BY GPA (Highest to Lowest) ===\n");
//     display_ptr(student_db, num_students, display_single_student);
    
//     // Find top student using pointer
//     printf("\n=== TOP STUDENT ===\n");
//     Student *top_student = student_db;
//     for(int i = 1; i < num_students; i++) {
//         if((student_db + i)->gpa > top_student->gpa) {
//             top_student = student_db + i;
//         }
//     }
//     printf("Top performer: ");
//     display_single_student(top_student);
    
//     free(student_db);
//     printf("\nDatabase memory freed\n");
// }

// // ==============================================================================
// // MAIN FUNCTION
// // ==============================================================================

// int main() {
//     printf("╔════════════════════════════════════════════════════════════╗\n");
//     printf("║       POINTERS IN C - 5-10 MARKS QUESTIONS & SOLUTIONS    ║\n");
//     printf("╚════════════════════════════════════════════════════════════╝\n");
    
//     int choice;
    
//     while(1) {
//         printf("\n\nSelect a Question (1-10) or 0 to Exit:\n");
//         printf("1. Pointer Basics (Memory, Declaration, Initialization)\n");
//         printf("2. Address-of (&) and Dereference (*) Operators + Swap\n");
//         printf("3. Pointer Arithmetic (Increment, Decrement, Difference)\n");
//         printf("4. Arrays and Pointers Relationship\n");
//         printf("5. Pointer to Array vs Array of Pointers\n");
//         printf("6. Passing Pointers to Functions & Returning Pointers\n");
//         printf("7. Function Pointers (Array of function pointers, Callbacks)\n");
//         printf("8. Comprehensive Pointer Problem (Structures & Dynamic Memory)\n");
//         printf("9. Double Pointers (Pointer to Pointer, 2D Arrays)\n");
//         printf("10. Advanced - Student Management System\n");
//         printf("0. Exit\n");
//         printf("\nEnter choice: ");
//         scanf("%d", &choice);
        
//         getchar();  // Consume newline
        
//         switch(choice) {
//             case 1:
//                 question1_solution();
//                 break;
//             case 2:
//                 question2_solution();
//                 break;
//             case 3:
//                 question3_solution();
//                 break;
//             case 4:
//                 question4_solution();
//                 break;
//             case 5:
//                 question5_solution();
//                 break;
//             case 6:
//                 question6_solution();
//                 break;
//             case 7:
//                 question7_solution();
//                 break;
//             case 8:
//                 question8_solution();
//                 break;
//             case 9:
//                 question9_solution();
//                 break;
//             case 10:
//                 question10_solution();
//                 break;
//             case 0:
//                 printf("\nThank you for learning Pointers in C!\n");
//                 return 0;
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
        
//         printf("\nPress Enter to continue...");
//         getchar();
//     }
    
//     return 0;
// }

// /*
// ================================================================================
//                               SUMMARY OF CONCEPTS
// ================================================================================

// 1. POINTER BASICS:
//    - Declaration: type *ptr;
//    - Initialization: ptr = &variable;
//    - Address-of operator (&): Gets address of variable
//    - Dereference operator (*): Gets value at address

// 2. POINTER ARITHMETIC:
//    - Increment (ptr++): Moves by size of data type
//    - Decrement (ptr--): Moves backward
//    - Addition (ptr + n): Move n elements forward
//    - Difference: Find distance between two pointers

// 3. ARRAYS AND POINTERS:
//    - Array name is pointer to first element
//    - arr[i] equivalent to *(arr+i)
//    - Pointers simplify array traversal

// 4. POINTER TO ARRAY vs ARRAY OF POINTERS:
//    - Pointer to Array: int (*ptr)[3]
//    - Array of Pointers: int *arr[3]

// 5. FUNCTION POINTERS:
//    - Declaration: type (*ptr_name)(parameters);
//    - Can create array of function pointers
//    - Useful for callbacks and function selection

// 6. DOUBLE POINTERS:
//    - Pointer to another pointer
//    - Useful for 2D arrays and dynamic memory
//    - Declaration: type **ptr;

// 7. DYNAMIC MEMORY:
//    - malloc(): Allocate memory
//    - free(): Deallocate memory
//    - Essential for dynamic data structures

// ================================================================================
//                          IMPORTANT NOTES & BEST PRACTICES
// ================================================================================

// ✓ Always initialize pointers to NULL or valid address
// ✓ Check NULL before dereferencing (array->element access)
// ✓ Free memory explicitly after malloc (prevent memory leaks)
// ✓ NULL pointer dereference causes crash
// ✓ Understand difference between pointer and value
// ✓ Use const for pointers that shouldn't change
// ✓ Pointer arithmetic depends on data type size
// ✓ Always match malloc with free
// ✓ Functions can modify original data through pointers
// ✓ Function pointers enable polymorphic behavior

// ================================================================================
// */





    // swap 2 no 
    // sum of 2 no
    // count vowels and consonants
    // traverse a array
    // largest and smallest in array
    // 2nd largest and smallest in array
    // reverse a aray
    // sum of array
    // return multiple value
    // create a array
    // function - sum ,multiply, divide
    // fxn - max ,min

// // swaping 2 no using pointer
// #include <stdio.h>
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=5,b=10;
//     swap(&a,&b);
//     printf("%d %d",a,b);
// }


// // sum of 2 numbers 
// #include <stdio.h>
// void sum(int *a,int *b,int *c){
// *c=*a+*b;
// }
// int main(){
//     int a=5,b=10,c=0;
//     sum(&a,&b,&c);
//     printf("%d %d %d ",a,b,c);
// }


// // 
