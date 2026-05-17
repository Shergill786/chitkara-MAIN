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
    