// // RECURSION // //

// factorial 
// fibonacci
// sum of digits
// power function
// palindrome check
// tower of hanoi
// form new number from digits
// gcd
// lcm
// reverse string and number


// #include <stdio.h>
// int main() {
//     int n = 5;
//     printf("Factorial of %d is: ", n);
//     factorial(n);
//     return 0;
// }
// void factorial(int n) {
//     if (n == 0 || n == 1) {
//         printf("1\n");
//         return;
//     }
//     printf("%d ", n);
//     factorial(n - 1);
// }


// fibonacci 

// #include <stdio.h>
// void fibonacci(int n, int a, int b);
// int main() {
//     int n = 5;
//     printf("Fibonacci series up to %d terms: ", n);
//     fibonacci(n, 0, 1);
//     return 0;
// }
// void fibonacci(int n, int a, int b) {
//     if(n <= 0)
//         return;
//     printf("%d ", a);
//     fibonacci(n - 1, b, a + b);
// }

// sum of digits 
// #include <stdio.h>
// int sum_of_digits(int n);
// int main() {
//     int n = 12345;
//     printf("Sum of digits of %d is: %d\n", n, sum_of_digits(n));
//     return 0;
// }
// int sum_of_digits(int n) {
//     if (n == 0)
//         return 0;
//     return (n % 10) + sum_of_digits(n / 10);
// }


// power function
// #include <stdio.h>
// int power(int base, int exp);
// int main() {
//     int base = 2, exp = 3;
//     printf("%d raised to the power of %d is: %d\n", base, exp, power(base, exp));
//     return 0;
// }
// int power(int base, int exp) {
//     if (exp == 0)
//         return 1;
//     return base * power(base, exp - 1);
// }


// palindrome check
// #include <stdio.h>
// int is_palindrome(char str[], int start, int end);
// int main() {
//     char str[] = "madam";
//     int length = sizeof(str) / sizeof(str[0]) - 1; // Exclude null terminator
//     if (is_palindrome(str, 0, length - 1)) {
//         printf("%s is a palindrome.\n", str);
//     } else {
//         printf("%s is not a palindrome.\n", str);
//     }
//     return 0;
// }
// int is_palindrome(char str[], int start, int end) {
//     if (start >= end)
//         return 1; // Base case: If the string is empty or has one character, it's a palindrome
//     if (str[start] != str[end])
//         return 0; // If characters at start and end are different, it's not a palindrome
//     return is_palindrome(str, start + 1, end - 1); // Recursive call for the next pair of characters
// }

// tower of hanoi
// #include <stdio.h>
// void tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod);
// int main() {
//     int n = 3; // Number of disks
//     printf("Tower of Hanoi solution for %d disks:\n", n);
//     tower_of_hanoi(n, 'A', 'C', 'B'); // A is the source rod, C is the destination rod, B is the auxiliary rod
//     return 0;
// }
// void tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod) {
//     if (n == 1) {
//         printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
//         return;
//     }
//     tower_of_hanoi(n - 1, from_rod, aux_rod, to_rod); // Move n-1 disks from source to auxiliary
//     printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod); // Move the nth disk from source to destination
//     tower_of_hanoi(n - 1, aux_rod, to_rod, from_rod); // Move n-1 disks from auxiliary to destination
// }


// form new number from digits
// #include <stdio.h>
// void form_new_number(int n, int new_num);
// int main() {
//     int n = 123;
//     printf("Forming new numbers from digits of %d:\n", n);
//     form_new_number(n, 0);
//     return 0;
// }
// void form_new_number(int n, int new_num) {
//     if (n == 0) {
//         printf("%d\n", new_num);
//         return;
//     }
//     int digit = n % 10; // Get the last digit
//     form_new_number(n / 10, new_num * 10 + digit); // Recursive call with the remaining digits and the new number formed
// }


// // gcd
// #include <stdio.h>
// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
// int main() {
//     int a = 12, b = 18;
//     printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
//     return 0;
// }   

// // lcm
// #include <stdio.h>
// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }   
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

// reverse string and number
// #include <stdio.h>
// void reverse_string(char str[], int start, int end);

// int main() {
//     char str[] = "Hello, World!";

//     int length = sizeof(str) / sizeof(str[0]) - 1; // Exclude null terminator
//     printf("Original string: %s\n", str);
//     reverse_string(str, 0, length - 1);
//     printf("Reversed string: %s\n", str);
//     return 0;
// }
// void reverse_string(char str[], int start, int end) {
//     if (start >= end)
//         return; // Base case: If the string is empty or has one character, it's already reversed
//     // Swap characters at start and end
//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;
//     // Recursive call for the next pair of characters
//     reverse_string(str, start + 1, end - 1);
// }


// // ARRAYS use functions and pointers // //

// sum of array elements
// insert an element in an array
// count occurrences of an element in an array
// find the largest and smallest element in an array
// reverse an array
// sort an array
// delete an element from an array
// count even and odd numbers in an array
// copy an element array
// rotate an array
// search for an element in an array
// compare elements of a array
// max and min in an array
// second largest and second smallest element in an array
// remve duplicates from an array

// sum using pointers and functions
// #include <stdio.h>
// int sum_of_array(int *arr, int size);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Sum of array elements is: %d\n", sum_of_array(arr, size));
//     return 0;
// }
// int sum_of_array(int *arr, int size) {
//     if (size == 0)
//         return 0; // Base case: If the array is empty, return 0
//     return *arr + sum_of_array(arr + 1, size - 1); // Recursive call with the next element and reduced size
// }

//  without recursion
// #include <stdio.h>
// int sum_of_array(int *arr, int size);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Sum of array elements is: %d\n", sum_of_array(arr, size));
//     return 0;
// }
// int sum_of_array(int *arr, int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i]; // Add each element to the sum
//     }
//     return sum; // Return the total sum
// }


// insert an element in an array
// #include <stdio.h>
// void insert_element(int *arr, int size, int element, int position);
// int main() {
//     int arr[10] = {1, 2, 3, 4, 5}; // Initial array with some elements
//     int size = 5; // Current size of the array
//     int element = 10; // Element to be inserted
//     int position = 2; // Position where the element should be inserted (0-based index)

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     insert_element(arr, size, element, position);
//     size++; // Increase the size after insertion

//     printf("Array after insertion: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }
// void insert_element(int *arr, int size, int element, int position) {
//     if (position < 0 || position > size) {
//         printf("Invalid position! Please enter a position between 0 and %d.\n", size);
//         return; // Exit the function if the position is invalid
//     }
//     // Shift elements to the right to create space for the new element
//     for (int i = size; i > position; i--) {
//         arr[i] = arr[i - 1]; // Move each element one position to the right
//     }
//     arr[position] = element; // Insert the new element at the specified position
// }


// count occurrences of an element in an array
// #include <stdio.h>
// int count_occurrences(int *arr, int size, int element);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 2, 2}; // Array with some duplicate elements
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int element = 2; // Element to count occurrences of

//     printf("Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     int count = count_occurrences(arr, size, element);
//     printf("Number of occurrences of %d is: %d\n", element, count);

//     return 0;
// }
// int count_occurrences(int *arr, int size, int element) {
//     int count = 0; // Initialize count to 0
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) { // Check if the current element matches the target element
//             count++; // Increment count if a match is found
//         }
//     }
//     return count; // Return the total count of occurrences
// }

// find the largest and smallest element in an array
// #include <stdio.h>
// void find_largest_smallest(int *arr, int size, int *largest, int *smallest);
// int main() {
//     int arr[] = {3, 1, 4, 1, 5, 9}; // Array with some elements
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int largest, smallest;

//     printf("Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     find_largest_smallest(arr, size, &largest, &smallest);
//     printf("Largest element is: %d\n", largest);
//     printf("Smallest element is: %d\n", smallest);

//     return 0;
// }
// void find_largest_smallest(int *arr, int size, int *largest, int *smallest) {
//     if (size <= 0) {
//         printf("Array is empty!\n");
//         return; // Exit the function if the array is empty
//     }
//     *largest = arr[0]; // Initialize largest to the first element
//     *smallest = arr[0]; // Initialize smallest to the first element

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > *largest) { // Check if the current element is greater than the largest found so far
//             *largest = arr[i]; // Update largest if a larger element is found
//         }
//         if (arr[i] < *smallest) { // Check if the current element is smaller than the smallest found so far
//             *smallest = arr[i]; // Update smallest if a smaller element is found
//         }
//     }
// }


// reverse an array
// #include <stdio.h>
// void reverse_array(int *arr, int size);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5}; // Array with some elements
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     reverse_array(arr, size);

//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
// void reverse_array(int *arr, int size) {
//     for (int i = 0; i < size / 2; i++) { // Loop until the middle of the array
//         int temp = arr[i]; // Store the current element in a temporary variable
//         arr[i] = arr[size - 1 - i]; // Replace the current element with the corresponding element from the end
//         arr[size - 1 - i] = temp; // Replace the corresponding element from the end with the original current element
//     }
// }

// sort an array
// #include <stdio.h>
// void sort_array(int *arr, int size) {
//     for (int i = 0; i < size - 1; i++) { // Loop through each element in the array
//         for (int j = 0; j < size - i - 1; j++) { // Loop through the unsorted elements
//             if (arr[j] > arr[j + 1]) { // Compare adjacent elements
//                 int temp = arr[j]; // Swap if the current element is greater than the next element
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Array with some unsorted elements
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     sort_array(arr, size);

//     printf("Sorted array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }

// rotate an array
// #include <stdio.h>
// void rotate_array(int *arr, int size, int positions);
// int main() {
//     int arr[] = {1, 2, 3, 4, 5}; // Array with some elements
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int positions = 2; // Number of positions to rotate the array

//     printf("Original array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     rotate_array(arr, size, positions);

//     printf("Array after rotation: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
// void rotate_array(int *arr, int size, int positions) {
//     if (positions < 0 || positions >= size) {
//         printf("Invalid number of positions! Please enter a value between 0 and %d.\n", size - 1);
//         return; // Exit the function if the number of positions is invalid
//     }
//     int temp[positions]; // Temporary array to store the elements to be rotated

//     // Store the first 'positions' elements in the temporary array
//     for (int i = 0; i < positions; i++) {
//         temp[i] = arr[i];
//     }

//     // Shift the remaining elements to the left
//     for (int i = positions; i < size; i++) {
//         arr[i - positions] = arr[i];
//     }

//     // Copy the elements from the temporary array back to the end of the original array
//     for (int i = 0; i < positions; i++) {
//         arr[size - positions + i] = temp[i];
//     }
// }

// 2nd largest and 2nd smallest element in an array
// #include <stdio.h>
// void find_second_largest_smallest(int *arr, int size, int *second_largest, int *second_smallest);
// int main() {
//     int arr[] = {3, 1, 4, 1, 5, 9}; // Array with some elements
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int second_largest, second_smallest;

//     printf("Array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     find_second_largest_smallest(arr, size, &second_largest, &second_smallest);
//     printf("Second largest element is: %d\n", second_largest);
//     printf("Second smallest element is: %d\n", second_smallest);

//     return 0;
// }
// void find_second_largest_smallest(int *arr, int size, int *second_largest, int *second_smallest) {
//     if (size < 2) {
//         printf("Array must have at least two elements!\n");
//         return; // Exit the function if the array has less than two elements
//     }
//     int largest = arr[0]; // Initialize largest to the first element
//     int smallest = arr[0]; // Initialize smallest to the first element
//     *second_largest = arr[0]; // Initialize second largest to the first element
//     *second_smallest = arr[0]; // Initialize second smallest to the first element

//     for (int i = 1; i < size; i++) {
//         if (arr[i] > largest) { // Check if the current element is greater than the largest found so far
//             *second_largest = largest; // Update second largest to the previous largest
//             largest = arr[i]; // Update largest to the current element
//         } else if (arr[i] > *second_largest && arr[i] != largest) { // Check if the current element is greater than second largest and not equal to largest
//             *second_largest = arr[i]; // Update second largest if a larger element is found
//         }
//         if (arr[i] < smallest) { // Check if the current element is smaller than the smallest found so far
//             *second_smallest = smallest; // Update second smallest to the previous smallest
//             smallest = arr[i]; // Update smallest to the current element
//         } else if (arr[i] < *second_smallest && arr[i] != smallest) { // Check if the current element is smaller than second smallest and not equal to smallest
//             *second_smallest = arr[i]; // Update second smallest if a smaller element is found
//         }
//     }
// }


Define a structure for student details and display records
Write a program to store employee details 
Write a function to display details of a student using structure pointer
Write a program to search employee details using employee ID
Write a program to calculate average marks of students using structures
Write a program to display highest salary employee details using structures
Write a program using array of structures for book details
Write a program to sort student records based on marks
Write a function to pass structure to another function.</span>
Write a program to display details of students who passed.</span></li>
        