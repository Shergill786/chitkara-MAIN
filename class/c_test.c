// // // // // // // // // // // // // // // Arrays / Functions / Strings
// // // // // // // // // // // // // // // Fibonacci Series
// // // // // // // // // // // // // // // Second Largest Number
// // // // // // // // // // // // // // // Reverse Array
// // // // // // // // // // // // // // // Student Topper using Structure
// // // // // // // // // // // // // // // Count Vowels
// // // // // // // // // // // // // // // Sum & Average of Array
// // // // // // // // // // // // // // // Count Odd and Even Numbers
// // // // // // // // // // // // // // // Row-wise Sum
// // // // // // // // // // // // // // // Column-wise Sum
// // // // // // // // // // // // // // // Matrix Programs
// // // // // // // // // // // // // // // Check Matrix is Sparse or Not
// // // // // // // // // // // // // // // Sum of Each Row
// // // // // // // // // // // // // // // Check Matrix is Identity Matrix
// // // // // // // // // // // // // // // N × N Matrix Multiplication
// // // // // // // // // // // // // // // Sum of 2D Array
// // // // // // // // // // // // // // // Left Diagonal Sum
// // // // // // // // // // // // // // // Right Diagonal Sum
// // // // // // // // // // // // // // // Pattern Programs
// // // // // // // // // // // // // // // Right-Angled Triangle
// // // // // // // // // // // // // // // Square Pattern
// // // // // // // // // // // // // // // Inverted Triangle
// // // // // // // // // // // // // // // Inverted Right Triangle
// // // // // // // // // // // // // // // Hollow Square
// // // // // // // // // // // // // // // Pyramid Pattern
// // // // // // // // // // // // // // // Hollow Right Triangle
// // // // // // // // // // // // // // // Character Square Pattern
// // // // // // // // // // // // // // // Square with Row Repetition
// // // // // // // // // // // // // // // Snake Pattern
// // // // // // // // // // // // // // // Continuous Number Square
// // // // // // // // // // // // // // // Column-wise Increasing Square
// // // // // // // // // // // // // // // Right-Aligned Triangle
// // // // // // // // // // // // // // // Border-Only Square
// // // // // // // // // // // // // // // Left-Aligned Triangle
// // // // // // // // // // // // // // // Structure Programs
// // // // // // // // // // // // // // // Student Topper using Structure
// // // // // // // // // // // // // // // Employee Structure
// // // // // // // // // // // // // // // Store Structure Data
// // // // // // // // // // // // // // // Display Structure Data
// // // // // // // // // // // // // // // Miscellaneous
// // // // // // // // // // // // // // // Armstrong Number
// // // // // // // // // // // // // // // Swap Two Numbers









// // // // // // // // // // // // // // // // 1 2nd Largest and 2nd Smallest Element in an Array
// // // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // // void find_second_largest_smallest(int *arr, int size, int *second_largest)
// // // // // // // // // // // // // // // {
// // // // // // // // // // // // // // //     if (size < 2) {
// // // // // // // // // // // // // // //         printf("Array must have at least two elements!\n");
// // // // // // // // // // // // // // //         return; // Exit the function if the array has less than two elements
// // // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // //     int largest = arr[0]; // Initialize largest to the first element
// // // // // // // // // // // // // // //     int smallest = arr[0]; // Initialize smallest to the first element
// // // // // // // // // // // // // // //     *second_largest = arr[0]; // Initialize second largest to the first element
// // // // // // // // // // // // // // //     int second_smallest = arr[0]; // Initialize second smallest to the first element
// // // // // // // // // // // // // // //     for (int i = 1; i < size; i++) {
// // // // // // // // // // // // // // //         if (arr[i] > largest) {
// // // // // // // // // // // // // // //             *second_largest = largest; // Update second largest before updating largest
// // // // // // // // // // // // // // //             largest = arr[i]; // Update largest
// // // // // // // // // // // // // // //         } else if (arr[i] > *second_largest && arr[i] != largest) {
// // // // // // // // // // // // // // //             *second_largest = arr[i]; // Update second largest if it's greater than current second largest and not equal to largest
// // // // // // // // // // // // // // //         }
// // // // // // // // // // // // // // //         if (arr[i] < smallest) {
// // // // // // // // // // // // // // //             second_smallest = smallest; // Update second smallest before updating smallest
// // // // // // // // // // // // // // //             smallest = arr[i]; // Update smallest
// // // // // // // // // // // // // // //         } else if (arr[i] < second_smallest && arr[i] != smallest) {
// // // // // // // // // // // // // // //             second_smallest = arr[i]; // Update second smallest if it's less than current second smallest and not equal to smallest
// // // // // // // // // // // // // // //         }
// // // // // // // // // // // // // // //     }   
// // // // // // // // // // // // // // //     if (*second_largest == largest) {
// // // // // // // // // // // // // // //         printf("There is no second largest element in the array.\n");
// // // // // // // // // // // // // // //     } else {
// // // // // // // // // // // // // // //         printf("Second Largest Element: %d\n", *second_largest);
// // // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // //     if (second_smallest == smallest) {
// // // // // // // // // // // // // // //         printf("There is no second smallest element in the array.\n");
// // // // // // // // // // // // // // //     } else {
// // // // // // // // // // // // // // //         printf("Second Smallest Element: %d\n", second_smallest);
// // // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // // }
// // // // // // // // // // // // // // // int main() {
// // // // // // // // // // // // // // //     int arr[] = {5, 2, 9, 1, 5, 6};
// // // // // // // // // // // // // // //     int size = sizeof(arr) / sizeof(arr[0]);
// // // // // // // // // // // // // // //     int second_largest;
// // // // // // // // // // // // // // //     find_second_largest_smallest(arr, size, &second_largest);
// // // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // // }

// // // // // // // // // // // // // // // 2 Reverse an Array
// // // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // // void reverse_array(int *arr, int size) {
// // // // // // // // // // // // // //     for (int i = 0; i < size / 2; i++) {
// // // // // // // // // // // // // //         int temp = arr[i]; // Store the current element in a temporary variable
// // // // // // // // // // // // // //         arr[i] = arr[size - 1 - i]; // Replace the current element with the corresponding element from the end
// // // // // // // // // // // // // //         arr[size - 1 - i] = temp; // Replace the corresponding element from the end with the temporary variable
// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // }
// // // // // // // // // // // // // // int main() {
// // // // // // // // // // // // // //     int arr[] = {1, 2, 3, 4, 5};
// // // // // // // // // // // // // //     int size = sizeof(arr) / sizeof(arr[0]);
// // // // // // // // // // // // // //     printf("Original Array: ");
// // // // // // // // // // // // // //     for (int i = 0; i < size; i++) {
// // // // // // // // // // // // // //         printf("%d ", arr[i]);
// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // //     printf("\n");
// // // // // // // // // // // // // //     reverse_array(arr, size);
// // // // // // // // // // // // // //     printf("Reversed Array: ");
// // // // // // // // // // // // // //     for (int i = 0; i < size; i++) {
// // // // // // // // // // // // // //         printf("%d ", arr[i]);
// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // //     printf("\n");
// // // // // // // // // // // // // //     return 0;
// // // // // // // // // // // // // // }

// // // // // // // // // // // // // // 3 Count Vowels in a String
// // // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // // #include <string.h>
// // // // // // // // // // // // // int count_vowels(const char *str) {
// // // // // // // // // // // // //     int count = 0; // Initialize vowel count to 0
// // // // // // // // // // // // //     for (int i = 0; str[i] != '\0'; i++) { // Loop through each character in the string until the null terminator is reached
// // // // // // // // // // // // //         char ch = str[i]; // Get the current character
// // // // // // // // // // // // //         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || // Check if the character is a vowel (both lowercase and uppercase)
// // // // // // // // // // // // //             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
// // // // // // // // // // // // //             count++; // Increment the vowel count if a vowel is found
// // // // // // // // // // // // //         }
// // // // // // // // // // // // //     }
// // // // // // // // // // // // //     return count; // Return the total count of vowels
// // // // // // // // // // // // // }
// // // // // // // // // // // // // int main() {
// // // // // // // // // // // // //     char str[100]; // Declare a character array to hold the input string
// // // // // // // // // // // // //     printf("Enter a string: ");
// // // // // // // // // // // // //     fgets(str, sizeof(str), stdin); // Read a line of input from the user
// // // // // // // // // // // // //     str[strcspn(str, "\n")] = '\0'; // Remove the newline character added by fgets
// // // // // // // // // // // // //     int vowel_count = count_vowels(str); // Call the function to count vowels in the input string
// // // // // // // // // // // // //     printf("Number of vowels in the string: %d\n", vowel_count); // Print the total count of vowels
// // // // // // // // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // // // // // // // }

// // // // // // // // // // // // // 4 Student Topper using Structure
// // // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // // #include <string.h>
// // // // // // // // // // // // struct Student {
// // // // // // // // // // // //     char name[50]; // Declare a character array to hold the student's name
// // // // // // // // // // // //     int marks; // Declare an integer to hold the student's marks
// // // // // // // // // // // // };
// // // // // // // // // // // // void find_topper(struct Student *students, int size, struct Student *topper) {
// // // // // // // // // // // //     if (size <= 0) {
// // // // // // // // // // // //         printf("No students in the array!\n");
// // // // // // // // // // // //         return; // Exit the function if there are no students
// // // // // // // // // // // //     }
// // // // // // // // // // // //     *topper = students[0]; // Initialize the topper to the first student
// // // // // // // // // // // //     for (int i = 1; i < size; i++) { // Loop through the array of students starting from the second student
// // // // // // // // // // // //         if (students[i].marks > topper->marks) { // Check if the current student's marks are greater than the current topper's marks
// // // // // // // // // // // //             *topper = students[i]; // Update the topper if a student with higher marks is found
// // // // // // // // // // // //         }
// // // // // // // // // // // //     }
// // // // // // // // // // // // }
// // // // // // // // // // // // int main() {
// // // // // // // // // // // //     struct Student students[] = { // Declare and initialize an array of Student structures
// // // // // // // // // // // //         {"Alice", 85},
// // // // // // // // // // // //         {"Bob", 92},
// // // // // // // // // // // //         {"Charlie", 78},
// // // // // // // // // // // //         {"David", 90}
// // // // // // // // // // // //     };
// // // // // // // // // // // //     int size = sizeof(students) / sizeof(students[0]); // Calculate the number of students in the array
// // // // // // // // // // // //     struct Student topper; // Declare a Student structure to hold the topper's information
// // // // // // // // // // // //     find_topper(students, size, &topper); // Call the function to find the topper among the students
// // // // // // // // // // // //     printf("Topper: %s with marks %d\n", topper.name, topper.marks); // Print the name and marks of the topper
// // // // // // // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // // // // // // }

// // // // // // // // // // // // 5 sum and average of an array
// // // // // // // // // // // #include <stdio.h>
// // // // // // // // // // // void calculate_sum_average(int *arr, int size, int *sum, float *average) {
// // // // // // // // // // //     *sum = 0; // Initialize sum to 0
// // // // // // // // // // //     for (int i = 0; i < size; i++) { // Loop through each element in the array
// // // // // // // // // // //         *sum += arr[i]; // Add the current element to the sum
// // // // // // // // // // //     }
// // // // // // // // // // //     *average = (float)(*sum) / size; // Calculate the average by dividing the sum by the number of elements
// // // // // // // // // // // }
// // // // // // // // // // // int main() {
// // // // // // // // // // //     int arr[] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
// // // // // // // // // // //     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
// // // // // // // // // // //     int sum; // Declare an integer to hold the sum of the array elements
// // // // // // // // // // //     float average; // Declare a float to hold the average of the array elements
// // // // // // // // // // //     calculate_sum_average(arr, size, &sum, &average); // Call the function to calculate the sum and average of the array
// // // // // // // // // // //     printf("Sum: %d\n", sum); // Print the calculated sum
// // // // // // // // // // //     printf("Average: %.2f\n", average); // Print the calculated average with 2 decimal places
// // // // // // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // // // // // }

// // // // // // // // // // // 6 Count Odd and Even Numbers in an Array
// // // // // // // // // // #include <stdio.h>
// // // // // // // // // // void count_odd_even(int *arr, int size, int *odd_count, int *even_count) {
// // // // // // // // // //     *odd_count = 0; // Initialize odd count to 0
// // // // // // // // // //     *even_count = 0; // Initialize even count to 0
// // // // // // // // // //     for (int i = 0; i < size; i++) { // Loop through each element in the array
// // // // // // // // // //         if (arr[i] % 2 == 0) { // Check if the current element is even
// // // // // // // // // //             (*even_count)++; // Increment the even count if the element is even
// // // // // // // // // //         } else { // If the element is not even, it must be odd
// // // // // // // // // //             (*odd_count)++; // Increment the odd count if the element is odd
// // // // // // // // // //         }
// // // // // // // // // //     }
// // // // // // // // // // }
// // // // // // // // // // int main() {
// // // // // // // // // //     int arr[] = {1, 2, 3, 4, 5, 6}; // Declare and initialize an array of integers
// // // // // // // // // //     int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
// // // // // // // // // //     int odd_count; // Declare an integer to hold the count of odd numbers
// // // // // // // // // //     int even_count; // Declare an integer to hold the count of even numbers
// // // // // // // // // //     count_odd_even(arr, size, &odd_count, &even_count); // Call the function to count odd and even numbers in the array
// // // // // // // // // //     printf("Number of Odd Numbers: %d\n", odd_count); // Print the count of odd numbers
// // // // // // // // // //     printf("Number of Even Numbers: %d\n", even_count); // Print the count of even numbers
// // // // // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // // // // }


// // // // // // // // // // 7 Row-wise Sum of a 2d array
// // // // // // // // // #include <stdio.h>
// // // // // // // // // void row_wise_sum(int arr[3][3], int rows, int cols, int *row_sums) {
// // // // // // // // //     for (int i = 0; i < rows; i++) { // Loop through each row of the 2D array
// // // // // // // // //         row_sums[i] = 0; // Initialize the sum for the current row to 0
// // // // // // // // //         for (int j = 0; j < cols; j++) { // Loop through each column of the current row
// // // // // // // // //             row_sums[i] += arr[i][j]; // Add the current element to the sum for the current row
// // // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // // }
// // // // // // // // // int main() {
// // // // // // // // //     int arr[3][3] = { // Declare and initialize a 2D array of integers
// // // // // // // // //         {1, 2, 3},
// // // // // // // // //         {4, 5, 6},
// // // // // // // // //         {7, 8, 9}
// // // // // // // // //     };
// // // // // // // // //     int rows = sizeof(arr) / sizeof(arr[0]); // Calculate the number of rows in the 2D array
// // // // // // // // //     int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Calculate the number of columns in the 2D array
// // // // // // // // //     int row_sums[3]; // Declare an array to hold the sum of each row
// // // // // // // // //     row_wise_sum(arr, rows, cols, row_sums); // Call the function to calculate the row-wise sums of the 2D array
// // // // // // // // //     printf("Row-wise Sums:\n"); // Print a header for the row-wise sums
// // // // // // // // //     for (int i = 0; i < rows; i++) { // Loop through each row to print the corresponding sum
// // // // // // // // //         printf("Row %d: %d\n", i + 1, row_sums[i]); // Print the sum for the current row
// // // // // // // // //     }
// // // // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // // // }
    


// // // // // // // // // 8 Column-wise Sum of a 2D Array` 
// // // // // // // // #include <stdio.h>
// // // // // // // // void column_wise_sum(int arr[3][3], int rows, int cols, int *col_sums) {
// // // // // // // //     for (int j = 0; j < cols; j++) { // Loop through each column of the 2D array
// // // // // // // //         col_sums[j] = 0; // Initialize the sum for the current column to 0
// // // // // // // //         for (int i = 0; i < rows; i++) { // Loop through each row of the current column
// // // // // // // //             col_sums[j] += arr[i][j]; // Add the current element to the sum for the current column
// // // // // // // //         }
// // // // // // // //     }
// // // // // // // // }
// // // // // // // // int main() {
// // // // // // // //     int arr[3][3] = { // Declare and initialize a 2D array of integers
// // // // // // // //         {1, 2, 3},
// // // // // // // //         {4, 5, 6},
// // // // // // // //         {7, 8, 9}
// // // // // // // //     };
// // // // // // // //     int rows = sizeof(arr) / sizeof(arr[0]); // Calculate the number of rows in the 2D array
// // // // // // // //     int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Calculate the number of columns in the 2D array
// // // // // // // //     int col_sums[3]; // Declare an array to hold the sum of each column
// // // // // // // //     column_wise_sum(arr, rows, cols, col_sums); // Call the function to calculate the column-wise sums of the 2D array
// // // // // // // //     printf("Column-wise Sums:\n"); // Print a header for the column-wise sums
// // // // // // // //     for (int j = 0; j < cols; j++) { // Loop through each column to print the corresponding sum
// // // // // // // //         printf("Column %d: %d\n", j + 1, col_sums[j]); // Print the sum for the current column
// // // // // // // //     }
// // // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // // }

// // // // // // // // 9 Check if a Matrix is Sparse or Not
// // // // // // // #include <stdio.h>
// // // // // // // #define MAX_SIZE 100
// // // // // // // int is_sparse_matrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
// // // // // // //     int zero_count = 0; // Initialize a counter for zero elements
// // // // // // //     int total_elements = rows * cols; // Calculate the total number of elements in the matrix
// // // // // // //     for (int i = 0; i < rows; i++) { // Loop through each row of the matrix
// // // // // // //         for (int j = 0; j < cols; j++) { // Loop through each column of the current row
// // // // // // //             if (matrix[i][j] == 0) { // Check if the current element is zero
// // // // // // //                 zero_count++; // Increment the zero count if a zero element is found
// // // // // // //             }
// // // // // // //         }
// // // // // // //     }
// // // // // // //     return (zero_count > total_elements / 2); // Return true if more than half of the elements are zero, indicating a sparse matrix
// // // // // // // }
// // // // // // // int main() {
// // // // // // //     int matrix[MAX_SIZE][MAX_SIZE]; // Declare a 2D array to hold the matrix
// // // // // // //     int rows, cols; // Declare variables to hold the number of rows and columns in the matrix
// // // // // // //     printf("Enter the number of rows and columns: ");
// // // // // // //     scanf("%d %d", &rows, &cols); // Read the number of rows and columns from the user
// // // // // // //     printf("Enter the elements of the matrix:\n");
// // // // // // //     for (int i = 0; i < rows; i++) { // Loop through each row to read the elements of the matrix
// // // // // // //         for (int j = 0; j < cols; j++) {
// // // // // // //             scanf("%d", &matrix[i][j]); // Read each element of the matrix from the user
// // // // // // //         }
// // // // // // //     }
// // // // // // //     if (is_sparse_matrix(matrix, rows, cols)) { // Call the function to check if the matrix is sparse
// // // // // // //         printf("The matrix is a sparse matrix.\n"); // Print a message if the matrix is sparse
// // // // // // //     } else {
// // // // // // //         printf("The matrix is not a sparse matrix.\n"); // Print a message if the matrix is not sparse
// // // // // // //     }
// // // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // // }

// // // // // // // 10 Check if a Matrix is an Identity Matrix
// // // // // // #include <stdio.h>
// // // // // // #define MAX_SIZE 100
// // // // // // int is_identity_matrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
// // // // // //     for (int i = 0; i < size; i++) { // Loop through each row of the matrix
// // // // // //         for (int j = 0; j < size; j++) { // Loop through each column of the current row
// // // // // //             if (i == j && matrix[i][j] != 1) { // Check if the current element is on the main diagonal and not equal to 1
// // // // // //                 return 0; // Return false if an element on the main diagonal is not equal to 1
// // // // // //             } else if (i != j && matrix[i][j] != 0) { // Check if the current element is off the main diagonal and not equal to 0
// // // // // //                 return 0; // Return false if an element off the main diagonal is not equal to 0
// // // // // //             }
// // // // // //         }
// // // // // //     }
// // // // // //     return 1; // Return true if all elements satisfy the conditions for an identity matrix
// // // // // // }
// // // // // // int main() {
// // // // // //     int matrix[MAX_SIZE][MAX_SIZE]; // Declare a 2D array to hold the matrix
// // // // // //     int size; // Declare a variable to hold the size of the matrix (number of rows and columns)
// // // // // //     printf("Enter the size of the square matrix: ");
// // // // // //     scanf("%d", &size); // Read the size of the matrix from the user
// // // // // //     printf("Enter the elements of the matrix:\n");
// // // // // //     for (int i = 0; i < size; i++) { // Loop through each row to read the elements of the matrix
// // // // // //         for (int j = 0; j < size; j++) {
// // // // // //             scanf("%d", &matrix[i][j]); // Read each element of the matrix from the user
// // // // // //         }
// // // // // //     }
// // // // // //     if (is_identity_matrix(matrix, size)) { // Call the function to check if the matrix is an identity matrix
// // // // // //         printf("The matrix is an identity matrix.\n"); // Print a message if the matrix is an identity matrix
// // // // // //     } else {
// // // // // //         printf("The matrix is not an identity matrix.\n"); // Print a message if the matrix is not an identity matrix
// // // // // //     }
// // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // }

// // // // // // 11 N × N Matrix Multiplication
// // // // // // #include <stdio.h>
// // // // // // #define MAX_SIZE 100
// // // // // // void matrix_multiply(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE], int size) {
// // // // // //     for (int i = 0; i < size; i++) { // Loop through each row of the resulting matrix C
// // // // // //         for (int j = 0; j < size; j++) { // Loop through each column of the resulting matrix C
// // // // // //             C[i][j] = 0; // Initialize the current element of matrix C to 0
// // // // // //             for (int k = 0; k < size; k++) { // Loop through each element in the current row of A and current column of B
// // // // // //                 C[i][j] += A[i][k] * B[k][j]; // Multiply the corresponding elements and add to the current element of matrix C
// // // // // //             }
// // // // // //         }
// // // // // //     }
// // // // // // }
// // // // // // int main() {
// // // // // //     int A[MAX_SIZE][MAX_SIZE]; // Declare a 2D array to hold the first matrix
// // // // // //     int B[MAX_SIZE][MAX_SIZE]; // Declare a 2D array to hold the second matrix
// // // // // //     int C[MAX_SIZE][MAX_SIZE]; // Declare a 2D array to hold
// // // // // //     int size; // Declare a variable to hold the size of the matrices (number of rows and columns)
// // // // // //     printf("Enter the size of the square matrices: ");
// // // // // //     scanf("%d", &size); // Read the size of the matrices from the user
// // // // // //     printf("Enter the elements of the first matrix (A):\n");
// // // // // //     for (int i = 0; i < size; i++) { // Loop through each row to read the elements of the first matrix
// // // // // //         for (int j = 0; j < size; j++) {
// // // // // //             scanf("%d", &A[i][j]); // Read each element of the first matrix from the user
// // // // // //         }
// // // // // //     }
// // // // // //     printf("Enter the elements of the second matrix (B):\n");
// // // // // //     for (int i = 0; i < size; i++) { // Loop through each row to read the elements of the second matrix
// // // // // //         for (int j = 0; j < size; j++) {
// // // // // //             scanf("%d", &B[i][j]); // Read each element of the second matrix from the user
// // // // // //         }
// // // // // //     }
// // // // // //     matrix_multiply(A, B, C, size); // Call the function to perform matrix multiplication
// // // // // //     printf("Result of A × B (Matrix C):\n"); // Print a header for the resulting matrix
// // // // // //     for (int i = 0; i < size; i++) { // Loop through each row to print the resulting matrix
// // // // // //         for (int j = 0; j < size; j++) {
// // // // // //             printf("%d ", C[i][j]); // Print each element of the resulting matrix followed by a space
// // // // // //         }
// // // // // //         printf("\n"); // Print a newline after each row of the resulting matrix
// // // // // //     }
// // // // // //     return 0; // Return 0 to indicate successful execution
// // // // // // }

// // // // // // right aligned triangle pattern
// // // // // #include <stdio.h>
// // // // // void right_aligned_triangle(int n) {
// // // // //     for (int i = 1; i <= n; i++) { // Loop through each row of the triangle
// // // // //         for (int j = 1; j <= n - i; j++) { // Print spaces to align the triangle to the right
// // // // //             printf(" "); // Print a space
// // // // //         }
// // // // //         for (int k = 1; k <= i; k++) { // Print asterisks for the current row
// // // // //             printf("*"); // Print an asterisk
// // // // //         }
// // // // //         printf("\n"); // Print a newline after each row of the triangle
// // // // //     }
// // // // // }
// // // // // int main() {
// // // // //     int n; // Declare a variable to hold the number of rows for the triangle
// // // // //     printf("Enter the number of rows for the right-aligned triangle: ");
// // // // //     scanf("%d", &n); // Read the number of rows from the user
// // // // //     right_aligned_triangle(n); // Call the function to print the right-aligned triangle pattern
// // // // //     return 0; // Return 0 to indicate successful execution
// // // // // }

// // // // #include <stdio.h>
// // // // void square(int n) {
// // // //     for (int i = 1; i <= n; i++) { // Loop through each row of the square
// // // //         for (int j = 1; j <= n; j++) { // Loop through each column of the current row
// // // //             printf("* "); // Print an asterisk followed by a space
// // // //         if (j<n) { // Check if the current column is not the last column
// // // //             printf(" "); // Print an additional space to separate the asterisks
// // // //         }
// // // //     }
// // // //     printf("\n"); // Print a newline after each row of the square
 
// // // // }}
// // // // int main() {
// // // //     int n; // Declare a variable to hold the size of the square
// // // //     printf("Enter the size of the square: ");
// // // //     scanf("%d", &n); // Read the size of the square from the user
// // // //     square(n); // Call the function to print the square pattern
// // // //     return 0; // Return 0 to indicate successful execution
// // // // }

// // // #include <stdio.h>
// // // void floyd(int n) {
// // //     int num = 1; // Initialize the starting number for Floyd's triangle
// // //     for (int i = 1; i <= n; i++) { // Loop through each row of Floyd's triangle
// // //         for (int j = 1; j <= i; j++) { // Loop through each column of the current row
// // //             printf("%d ", num); // Print the current number followed by a space
// // //             num++; // Increment the number for the next element in Floyd's triangle
// // //             if (j<n) { // Check if the current row is not the last row
// // //                 printf(" "); // Print an additional space to separate the rows of Floyd's triangle
            
// // //         }
// // //         }
// // //         printf("\n"); // Print a newline after each row of Floyd's triangle
// // //     }
// // // }
// // // int main() {
// // //     int n; // Declare a variable to hold the number of rows for Floyd's triangle
// // //     printf("Enter the number of rows for Floyd's triangle: ");
// // //     scanf("%d", &n); // Read the number of rows from the user
// // //     floyd(n); // Call the function to print Floyd's triangle
// // //     return 0; // Return 0 to indicate successful execution
// // // }

// // #include <stdio.h>
// // void invrt_triangle(int n) {
// //     for (int i = n; i >= 1; i--) { // Loop through each row of the inverted triangle starting from the last row
// //         for (int j = 1; j <= n - i; j++) { // Print spaces to align the triangle to the right
// //             printf(" "); // Print a space
// //         }
// //         for (int k = 1; k <= i; k++) { // Print asterisks for the current row
// //             printf("*"); // Print an asterisk
// //         }
// //         printf("\n"); // Print a newline after each row of the inverted triangle
// //     }
// // }
// // int main() {
// //     int n; // Declare a variable to hold the number of rows for the inverted triangle
// //     printf("Enter the number of rows for the inverted triangle: ");
// //     scanf("%d", &n); // Read the number of rows from the user
// //     invrt_triangle(n); // Call the function to print the inverted triangle pattern
// //     return 0; // Return 0 to indicate successful execution
// // }

// #include <stdio.h>
// void centred_pry(int n) {
//     for (int i = 1; i <= n; i++) { // Loop through each row of the centered pyramid
//         for (int j = 1; j <= n - i; j++) { // Print spaces to center the pyramid
//             printf(" "); // Print a space
//         }
//         for (int k = 1; k <= i ; k++) { // Print asterisks for the current row, increasing by 2 for each subsequent row
//             printf("%d", k); // Print the current number followed by a space
//         }
//         for (int k = i - 1; k >= 1; k--) { // Print the numbers in reverse order for the current row, decreasing by 2 for each subsequent row
//             printf("%d", k); // Print the current number followed by a space
//         // }
//         printf("\n"); // Print a newline after each row of the centered pyramid
//     }
// }
// int main() {
//     int n; // Declare a variable to hold the number of rows for the centered pyramid
//     printf("Enter the number of rows for the centered pyramid: ");
//     scanf("%d", &n); // Read the number of rows from the user
//     centred_pry(n); // Call the function to print the centered pyramid pattern
//     return 0; // Return 0 to indicate successful execution
// }


// transpose of a matrix
// #include <stdio.h>
// #define MAX_SIZE 100
// void transpose(int matrix[MAX_SIZE][MAX_SIZE], int n) {
//     int transposed[MAX_SIZE][MAX_SIZE];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             transposed[j][i] = matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", transposed[i][j]);
//         }
//         printf("\n");
//     }
// }

// sum of lower triangular matrix
// #include <stdio.h>
// void sum_lower_triangular(int matrix[100][100], int n) {
//     int sum = 0; // Initialize sum to 0
//     for (int i = 0; i < n; i++) { // Loop through each row of the matrix
//         for (int j = 0; j <= i; j++) { // Loop through each column up to the current row index
//             sum += matrix[i][j]; // Add the current element to the sum if it is in the lower triangular part of the matrix
//         }
//     }
//     printf("Sum of lower triangular matrix: %d\n", sum); // Print the calculated sum of the lower triangular matrix
// }

// check matrix is upper triangular or not
// #include <stdio.h>
// void upper_triangular(int matrix[100][100], int n) {
//     int is_upper = 1; // Initialize a flag to indicate if the matrix is upper triangular
//     for (int i = 1; i < n; i++) { // Loop through each row of the matrix starting from the second row
//         for (int j = 0; j < i; j++) { // Loop through each column up to the current row index
//             if (matrix[i][j] != 0) { // Check if the current element is not zero, which would indicate that the matrix is not upper triangular
//                 is_upper = 0; // Set the flag to false if a non-zero element is found in the lower triangular part of the matrix
//                 break; // Break out of the inner loop since we have determined that the matrix is not upper triangular
//             }
//         }
//         if (!is_upper) { // Check if the flag has been set to false
//             break; // Break out of the outer loop since we have determined that the matrix is not upper triangular
//         }
//     }
//     if (is_upper) { // Check if the flag is still true, indicating that the matrix is upper triangular
//         printf("The matrix is an upper triangular matrix.\n"); // Print a message indicating that the matrix is upper triangular
//     } else {
//         printf("The matrix is not an upper triangular matrix.\n"); // Print a message indicating that the matrix is not upper triangular
//     }
// }

