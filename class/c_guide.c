/*
C LEARNING GUIDE

This file contains C programming concepts with examples
All code is commented out for reference
*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// #include <ctype.h>

// ARITHMETIC AND COMPARISON OPERATORS
// =====================================

/*
int a = 10;
int b = 5;
printf("%d\n", a + b);      // Addition: 15
printf("%d\n", a - b);      // Subtraction: 5
printf("%d\n", a * b);      // Multiplication: 50
printf("%d\n", a / b);      // Division: 2
printf("%d\n", a % b);      // Modulo: 0
printf("%d\n", a < b);      // Comparison: 0 (false)
printf("%d\n", a > b);      // Comparison: 1 (true)
printf("%d\n", a == b);     // Comparison: 0 (false)
printf("%d\n", a != b);     // Comparison: 1 (true)
printf("%d\n", a >= b);     // Comparison: 1 (true)
printf("%d\n", a <= b);     // Comparison: 0 (false)
printf("%d\n", (a > 5 || b < 10));  // Logical OR: 1 (true)
printf("%d\n", (a > 5 && b < 10));  // Logical AND: 1 (true)
*/


// NUMBER TO ARRAY CONVERSION
// ===========================

// | Method                       | Description                              |
// | ---------------------------- | ---------------------------------------- |
// | Extract digits manually      | Use modulo and division to get each digit|
// | Convert to string, then char | Convert number to string first           |
// | Reverse digit extraction     | Extract from highest to lowest place     |

/*
// Method 1: Extract digits from right to left
int num = 12345;
int digits[10];
int count = 0;
int temp = num;


// Count how many digits
while (temp > 0) {
    digits[count] = temp % 10;      // Get last digit
    count++;
    temp /= 10;                     // Remove last digit
}

printf("Digits (right to left): ");
for (int i = 0; i < count; i++) {
    printf("%d ", digits[i]);       // Output: 5 4 3 2 1
}
printf("\n");

// Reverse to get left to right order
printf("Digits (left to right): ");
for (int i = count - 1; i >= 0; i--) {
    printf("%d ", digits[i]);       // Output: 1 2 3 4 5
}
printf("\n");

// Method 2: Convert number to string, then to character array
int num = 54321;
char str[20];
sprintf(str, "%d", num);            // Convert number to string
int index = 0;
for (int i = 0; str[i] != '\0'; i++) {
    printf("Digit %d: %c (value: %d)\n", i, str[i], str[i] - '0');
}
// Output: 5, 4, 3, 2, 1

// Method 3: Get individual digits at specific positions
int num = 123456;
int digit1st = (num / 100000) % 10;     // First digit: 1
int digit2nd = (num / 10000) % 10;      // Second digit: 2
int digit3rd = (num / 1000) % 10;       // Third digit: 3
int digit4th = (num / 100) % 10;        // Fourth digit: 4
int digit5th = (num / 10) % 10;         // Fifth digit: 5
int digit6th = num % 10;                // Sixth digit: 6

printf("Digits: %d %d %d %d %d %d\n", digit1st, digit2nd, digit3rd, 
       digit4th, digit5th, digit6th);   // Output: 1 2 3 4 5 6

// Method 4: Store in array with specific positions
int num = 789;
int arr[3];
arr[2] = num % 10;                      // Ones place: 9
arr[1] = (num / 10) % 10;               // Tens place: 8
arr[0] = (num / 100) % 10;              // Hundreds place: 7

printf("Array: %d %d %d\n", arr[0], arr[1], arr[2]);  // Output: 7 8 9

// Method 5: Convert negative number to array
int num = -12345;
int digits[10];
int count = 0;
int temp = num < 0 ? -num : num;        // Make it positive

while (temp > 0) {
    digits[count] = temp % 10;
    count++;
    temp /= 10;
}

printf("Digits of -%d: ", num);
for (int i = count - 1; i >= 0; i--) {
    printf("%d ", digits[i]);           // Output: 1 2 3 4 5
}
printf("\n");

// Method 6: Decimal number to digit array
float num = 123.45;
int intPart = (int)num;
float decPart = num - intPart;          // 0.45
int digits[10];
int count = 0;

// Extract integer part digits
int temp = intPart;
while (temp > 0) {
    digits[count] = temp % 10;
    count++;
    temp /= 10;
}

printf("Integer digits: ");
for (int i = count - 1; i >= 0; i--) {
    printf("%d ", digits[i]);           // Output: 1 2 3
}
printf("\nDecimal part: %.2f\n", decPart);  // Output: 0.45
*/


// STRINGS IN C
// ============

// | Function           | Description                    |
// | ------------------ | ------------------------------ |
// | `strlen()`         | String length                  |
// | `strcpy()`         | Copy string                    |
// | `strcat()`         | Concatenate strings            |
// | `strcmp()`         | Compare strings                |
// | `strchr()`         | Find character in string       |
// | `strstr()`         | Find substring                 |
// | `strtok()`         | Split string                   |
// | `strupr()`         | Convert to uppercase           |
// | `strlwr()`         | Convert to lowercase           |
// | `sprintf()`        | Format string                  |
// | `sscanf()`         | Parse string                   |


/*
// String length
char text[] = "Programming";
printf("%lu\n", strlen(text));  // Output: 11

// Copy string
char source[] = "Hello";
char destination[50];
strcpy(destination, source);
printf("%s\n", destination);    // Output: Hello

// Concatenate strings
char str1[50] = "Hello";
char str2[] = " World";
strcat(str1, str2);
printf("%s\n", str1);           // Output: Hello World

// Compare strings
if (strcmp("abc", "abc") == 0) {
    printf("Strings are equal\n");
}

// Find character
char text[] = "JavaScript";
char *pos = strchr(text, 'a');
if (pos != NULL) {
    printf("Found at position: %ld\n", pos - text);  // Output: 1
}

// Find substring
char text[] = "Programming";
char *pos = strstr(text, "gram");
if (pos != NULL) {
    printf("Substring found\n");
}

// Split string
char text[] = "a,b,c";
char copy[50];
strcpy(copy, text);
char *token = strtok(copy, ",");
while (token != NULL) {
    printf("%s\n", token);      // Output: a, b, c
    token = strtok(NULL, ",");
}

// Format string
int age = 25;
char str[50];
sprintf(str, "My age is %d", age);
printf("%s\n", str);            // Output: My age is 25
*/


// STRUCTS (Similar to Objects)
// =============================

/*
struct Person {
    char name[50];
    int age;
    char city[50];
};

struct Person person = {"John", 25, "Delhi"};
printf("Name: %s\n", person.name);     // Output: John
printf("Age: %d\n", person.age);       // Output: 25
printf("City: %s\n", person.city);     // Output: Delhi

// Modify struct members
person.age = 30;
printf("New age: %d\n", person.age);   // Output: 30
*/


// STRING TO ARRAY CONVERSION
// ===========================

// | Method                    | Description                              |
// | ------------------------- | ---------------------------------------- |
// | Direct char array         | String is already an array of characters |
// | strtok()                  | Split string by delimiter into array     |
// | Manual loop               | Convert string to array manually         |
// | String to integer array   | Parse string digits to number array      |

/*
// Method 1: String is already a character array
char str[] = "Hello";
// str[0] = 'H', str[1] = 'e', str[2] = 'l', etc.
printf("Character at index 0: %c\n", str[0]);           // Output: H
printf("Character at index 4: %c\n", str[4]);           // Output: o

// Method 2: Copy string to array
char source[] = "JavaScript";
char array[50];
strcpy(array, source);
printf("Array: %s\n", array);                           // Output: JavaScript

// Method 3: Convert string to array of characters
char str[] = "Hello";
char charArray[10];
for (int i = 0; str[i] != '\0'; i++) {
    charArray[i] = str[i];
}
printf("First char: %c\n", charArray[0]);               // Output: H

// Method 4: Split string into array of words using strtok()
char text[] = "apple,banana,mango";
char copy[50];
strcpy(copy, text);
char *words[10];
int count = 0;
char *token = strtok(copy, ",");
while (token != NULL) {
    words[count] = token;
    printf("Word %d: %s\n", count, words[count]);       // Output: apple, banana, mango
    count++;
    token = strtok(NULL, ",");
}

// Method 5: Convert string of digits to integer array
char digitStr[] = "123456";
int intArray[10];
int index = 0;
for (int i = 0; digitStr[i] != '\0'; i++) {
    intArray[index] = digitStr[i] - '0';                // Convert char to int
    printf("Number %d: %d\n", index, intArray[index]);  // Output: 1, 2, 3, 4, 5, 6
    index++;
}

// Method 6: Get string length and create fixed array
char str[] = "programming";
int len = strlen(str);
char array[len + 1];
strcpy(array, str);
printf("String length: %d\n", len);                     // Output: 11
printf("Array: %s\n", array);                           // Output: programming

// Method 7: Split by space to get words
char sentence[] = "Hello World from C";
char copy[50];
strcpy(copy, sentence);
char *words[10];
int count = 0;
char *token = strtok(copy, " ");
while (token != NULL) {
    words[count] = token;
    printf("Word %d: %s\n", count, words[count]);
    count++;
    token = strtok(NULL, " ");
}

// Method 8: Convert string to array with each character
char str[] = "abc";
char result[50] = "";
for (int i = 0; str[i] != '\0'; i++) {
    sprintf(result + i, "%c", str[i]);
}
printf("Result: %s\n", result);                         // Output: abc
*/


// ARRAYS IN C
// ============

// | Function      | Description                              |
// | ------------- | ---------------------------------------- |
// | Single array  | 1D array of elements                     |
// | 2D array      | Matrix structure                         |
// | Sorting       | Arrange elements in order                |
// | Searching     | Find elements in array                   |
// | Sum/Average   | Calculate values from array elements     |

/*
// Declare and initialize array
int fruits[3] = {10, 20, 30};
printf("%d\n", fruits[0]);              // Output: 10

// Array length
int arr[] = {1, 2, 3, 4, 5};
int length = sizeof(arr) / sizeof(arr[0]);
printf("Length: %d\n", length);         // Output: 5

// Add to array (append by modifying index)
int nums[5] = {1, 2, 3};
nums[3] = 40;
printf("Array: ");
for (int i = 0; i < 5; i++) {
    printf("%d ", nums[i]);
}
// Output: 1 2 3 40 0

// Remove element from array (shift remaining)
int nums[] = {1, 2, 3, 4, 5};
int size = 5;
// Remove at index 2
for (int i = 2; i < size - 1; i++) {
    nums[i] = nums[i + 1];
}
size--;
printf("New array: ");
for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
}
// Output: 1 2 4 5

// Find index
int nums[] = {10, 20, 30, 40};
int search = 30;
int index = -1;
for (int i = 0; i < 4; i++) {
    if (nums[i] == search) {
        index = i;
        break;
    }
}
printf("Index: %d\n", index);           // Output: 2

// Check if element exists
int nums[] = {10, 20, 30};
int search = 20;
int found = 0;
for (int i = 0; i < 3; i++) {
    if (nums[i] == search) {
        found = 1;
        break;
    }
}
printf("Found: %d\n", found);           // Output: 1

// Reverse array
int nums[] = {1, 2, 3, 4, 5};
int size = 5;
for (int i = 0; i < size / 2; i++) {
    int temp = nums[i];
    nums[i] = nums[size - 1 - i];
    nums[size - 1 - i] = temp;
}
printf("Reversed: ");
for (int i = 0; i < size; i++) {
    printf("%d ", nums[i]);
}
// Output: 5 4 3 2 1

// 2D Array
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
printf("%d\n", matrix[0][1]);           // Output: 2
*/


// MATH FUNCTIONS
// ===============

// | Function          | Description                |
// | ----------------- | -------------------------- |
// | `abs()`           | Absolute value             |
// | `ceil()`          | Round up                   |
// | `floor()`         | Round down                 |
// | `round()`         | Round nearest              |
// | `sqrt()`          | Square root                |
// | `cbrt()`          | Cube root                  |
// | `pow()`           | Power                      |
// | `fmax()`          | Maximum value              |
// | `fmin()`          | Minimum value              |
// | `log()`           | Natural logarithm          |
// | `log10()`         | Base-10 log                |

/*
printf("%d\n", abs(-10));               // Output: 10
printf("%.0f\n", ceil(4.2));            // Output: 5
printf("%.0f\n", floor(4.8));           // Output: 4
printf("%.0f\n", round(4.5));           // Output: 5
printf("%.2f\n", sqrt(16));             // Output: 4.00
printf("%.2f\n", cbrt(27));             // Output: 3.00
printf("%.0f\n", pow(2, 3));            // Output: 8
printf("%.0f\n", fmax(1, 5));           // Output: 5
printf("%.0f\n", fmin(1, 5));           // Output: 1
printf("%.2f\n", log(10));              // Output: 2.30
printf("%.2f\n", log10(100));           // Output: 2.00
*/


// FUNCTIONS - EXAMPLES
// =====================

/*
// Reverse string
void reverse(char *inputstring) {
    int len = strlen(inputstring);
    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", inputstring[i]);
    }
    printf("\n");
}
// reverse("hello");  // Output: olleh

// Factorial
int factorial(int input) {
    int result = 1;
    for (int i = 1; i <= input; i++) {
        result *= i;
    }
    return result;
}
// printf("%d\n", factorial(4));  // Output: 24

// Check leap year
int leapYear(int input) {
    if (input % 4 == 0 && (input % 100 != 0 || input % 400 == 0)) {
        return 1;
    }
    return 0;
}
// printf("%d\n", leapYear(2000));  // Output: 1

// Sum of digits
int sumOfDigits(int input) {
    int sum = 0;
    while (input > 0) {
        sum += input % 10;
        input /= 10;
    }
    return sum;
}
// printf("%d\n", sumOfDigits(567));  // Output: 18

// Find biggest number in array
int biggest(int *array, int size) {
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
// int arr[] = {1, 2, 3, 5};
// printf("%d\n", biggest(arr, 4));  // Output: 5

// Average of array
float average(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (float)sum / size;
}
// int arr[] = {10, 20, 30, 40};
// printf("%.2f\n", average(arr, 4));  // Output: 25.00

// Count occurrences of character
int countChar(char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}
// printf("%d\n", countChar("hello", 'l'));  // Output: 2

// Check if string is palindrome
int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
// printf("%d\n", isPalindrome("racecar"));  // Output: 1
*/


// COMPLETE EXAMPLE PROGRAM
// ==========================

/*
#include <stdio.h>
#include <string.h>

int main() {
    // Example 1: Arithmetic operations
    int a = 10, b = 5;
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    
    // Example 2: String operations
    char str1[] = "Hello";
    char str2[] = "World";
    char result[50];
    strcpy(result, str1);
    strcat(result, " ");
    strcat(result, str2);
    printf("Concatenated: %s\n", result);
    
    // Example 3: Array operations
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("Array sum: %d\n", sum);
    
    return 0;
}
*/
