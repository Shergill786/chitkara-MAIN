// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a == b)
//         printf("Equal");
//     else
//         printf("Not Equal");

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a < b)
//         printf("%d", a);
//     else
//         printf("%d", b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int costPrice, sellingPrice;
//     scanf("%d", &costPrice);
//     scanf("%d", &sellingPrice);

//     if (sellingPrice > costPrice) {
//         printf("Profit\n");
//         printf("%d", sellingPrice - costPrice);
//     } else if (sellingPrice < costPrice) {
//         printf("Loss\n");
//         printf("%d", costPrice - sellingPrice);
//     } else {
//         printf("No Profit No Loss");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, rev = 0, temp;
//     scanf("%d", &n);

//     temp = n;
//     while (temp > 0) {
//         rev = rev * 10 + (temp % 10);
//         temp /= 10;
//     }

//     if (rev == n)
//         printf("Equal");
//     else
//         printf("Not Equal");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char c;
//     scanf("%c", &c);

//     if (c >= 'A' && c <= 'Z')
//         printf("UPPER CASE");
//     else if (c >= 'a' && c <= 'z')
//         printf("lower case");
//     else if (c >= '0' && c <= '9')
//         printf("Digit");
//     else
//         printf("Special character");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int m;
//     scanf("%d", &m);

//     if (m >= 75)
//         printf("A");
//     else if (m >= 60)
//         printf("B");
//     else if (m >= 55)
//         printf("C");
//     else if (m >= 50)
//         printf("D");
//     else
//         printf("E");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     if (a < b && a < c)
//         printf("%d", a);
//     else if (b < a && b < c)
//         printf("%d", b);
//     else
//         printf("%d", c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     if (a + b > c && a + c > b && b + c > a)
//         printf("Valid");
//     else
//         printf("Not Valid");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     if (n > 0)
//         printf("positive");
//     else if (n < 0)
//         printf("negative");
//     else
//         printf("zero");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     if (n % 5 == 0 && n % 7 == 0)
//         printf("yes");
//     else
//         printf("no");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char ch;
//     scanf(" %c", &ch);

//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//         printf("yes");
//     else
//         printf("no");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[10];
//     int sum = 0;

//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[10];
//     int positive = 0, negative = 0, even = 0, odd = 0;

//     for(int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);

//         if(arr[i] > 0)
//             positive++;
//         else if(arr[i] < 0)
//             negative++;

//         if(arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     printf("%d\n", positive);
//     printf("%d\n", negative);
//     printf("%d\n", even);
//     printf("%d\n", odd);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     float f = 123.456789;
//     int i=123;
//     printf("%d\n",f);
//     printf("%.4f \n",f);
// }
// int main(){
//     int x = 10, y = 3;
//     double result = (double)x / y;
//     printf("%.2f\n", result);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int totalDays;
//     int years, weeks, days;
//     scanf("%d", &totalDays);
//     years = totalDays / 365;
//     totalDays %= 365;   
//     printf("%d %d %d %d", years, weeks, days, totalDays);
//     return 0;
// }

// ============ POINTER QUESTIONS (WITHOUT ARRAYS) ============

// Q1: Swap two numbers using pointers
// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x = 10, y = 20;
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After swap: x = %d, y = %d\n", x, y);
//     return 0;
// }

// Q2: Find sum and product using pointer parameters
// #include <stdio.h>
// void calculate(int a, int b, int *sum, int *product) {
//     *sum = a + b;
//     *product = a * b;
// }
// int main() {
//     int x = 5, y = 3;
//     int sum, product;
//     calculate(x, y, &sum, &product);
//     printf("Sum: %d\n", sum);
//     printf("Product: %d\n", product);
//     return 0;
// }

// #include <stdio.h>
// void cal(int a, int b,int *sum ,int *prod) {
//     *sum=a+b;
//     *prod=a*b;
// }
// int main(){
//     int x=10,y=2;
//     int sum,prod;
//     cal(x,y,&sum,&prod);
//     printf("%d %d",sum,prod);
// }


// Q3: Dynamic memory allocation for single integer
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr = (int*)malloc(sizeof(int));
//     *ptr = 100;
//     printf("Value: %d\n", *ptr);
//     printf("Address: %p\n", (void*)ptr);
//     free(ptr);
//     return 0;
// }

// Q4: Pointer to find absolute value
// #include <stdio.h>
// void absoluteValue(int *num) {
//     if (*num < 0)
//         *num = -(*num);
// }
// int main() {
//     int x = -25;
//     printf("Before: %d\n", x);
//     absoluteValue(&x);
//     printf("After: %d\n", x);
//     return 0;
// }

// Q5: Increment value using pointer
// #include <stdio.h>
// void increment(int *ptr) {
//     (*ptr)++;  // Increment value, not pointer
// } 
// int main() {
//     int x = 10;
//     printf("Before: %d\n", x);
//     increment(&x);
//     printf("After: %d\n", x);
//     return 0;
// }

// Q6: Compare two numbers using pointers
// #include <stdio.h>
// int compare(int *a, int *b) {
//     if (*a > *b)
//         return 1;  // a is greater
//     else if (*a < *b)
//         return -1;  // b is greater
//     else
//         return 0;  // equal
// }
// int main() {
//     int x = 15, y = 10;
//     int result = compare(&x, &y);
//     if (result == 1)
//         printf("%d is greater than %d\n", x, y);
//     else if (result == -1)
//         printf("%d is less than %d\n", x, y);
//     else
//         printf("Both are equal\n");
//     return 0;
// }

// Q7: Pointer to pointer (double pointer) modification
// #include <stdio.h>
// void modify(int **ptr) {
//     **ptr = **ptr * 2;  // Double the value
// }
// int main() {
//     int x = 20;
//     int *p = &x;
//     printf("Before: %d\n", x);
//     modify(&p);
//     printf("After: %d\n", x);
//     return 0;
// }

// Q8: String length using pointer
// #include <stdio.h>
// int stringLength(char *str) {
//     int count = 0;
//     while (*str != '\0') {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main() {
//     char str[] = "Hello";
//     printf("String: %s\n", str);
//     printf("Length: %d\n", stringLength(str));
//     return 0;
// }

// Q9: Dynamic allocation for structure
// #include <stdio.h>
// #include <stdlib.h>
// struct Student {
//     char name[50];
//     int age;
//     float gpa;
// };
// int main() {
//     struct Student *student = (struct Student*)malloc(sizeof(struct Student));
//     student->age = 20;
//     student->gpa = 3.8;
//     printf("Age: %d\n", student->age);
//     printf("GPA: %.1f\n", student->gpa);
//     free(student);
//     return 0;
// }

// Q10: Sum of digits using pointer (input as pointer)
// #include <stdio.h>
// int sumOfDigits(int *num) {
//     int sum = 0;
//     int value = *num < 0 ? -(*num) : *num;
//     while (value > 0) {
//         sum += value % 10;
//         value /= 10;
//     }
//     return sum;
// }
// int main() {
//     int number = 12345;
//     int *ptr = &number;
//     printf("Number: %d\n", *ptr);
//     printf("Sum of digits: %d\n", sumOfDigits(ptr));
//     return 0;
// }

// Q11: Find factorial using pointer
// #include <stdio.h>
// int factorial(int *n) {
//     int fact = 1;
//     for (int i = 1; i <= *n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// int main() {
//     int num = 5;
//     printf("Factorial of %d = %d\n", num, factorial(&num));
//     return 0;
// }

// #include <stdio.h>
// void fact(int *n ,int *factorial){
//      *factorial=1;
//     for (int i =1;i<=*n;i++){
//         (*factorial)*=i;
//     }
// }

// int main(){
//     int n=5;
//     int factorial;
//     fact(&n,&factorial);
//     printf("%d",factorial);
//     return 0;
// }

// Q12: Find GCD of two numbers using pointer
// #include <stdio.h>
// int gcd(int *a, int *b) {
//     while (*b != 0) {
//         int temp = *b;
//         *b = *a % *b;
//         *a = temp;
//     }
//     return *a;
// }
// int main() {
//     int x = 24, y = 36;
//     printf("GCD of %d and %d = %d\n", x, y, gcd(&x, &y));
//     return 0;
// }

// Q13: Check if number is prime using pointer
// #include <stdio.h>
// int isPrime(int *num) {
//     if (*num <= 1) return 0;
//     for (int i = 2; i * i <= *num; i++) {
//         if (*num % i == 0)
//             return 0;
//     }
//     return 1;
// }
// int main() {
//     int n = 17;
//     if (isPrime(&n))
//         printf("%d is prime\n", n);
//     else
//         printf("%d is not prime\n", n);
//     return 0;
// }

// Q14: Reverse a number using pointer
// #include <stdio.h>
// int reverseNumber(int *num) {
//     int reversed = 0;
//     int value = *num;
//     while (value > 0) {
//         reversed = reversed * 10 + (value % 10);
//         value /= 10;
//     }
//     return reversed;
// }
// int main() {
//     int num = 12345;
//     printf("Original: %d\n", num);
//     printf("Reversed: %d\n", reverseNumber(&num));
//     return 0;
// }

// Q15: String concatenation using pointers
// #include <stdio.h>
// void concatenate(char *str1, char *str2, char *result) {
//     while (*str1 != '\0') {
//         *result = *str1;
//         result++;
//         str1++;
//     }
//     while (*str2 != '\0') {
//         *result = *str2;
//         result++;
//         str2++;
//     }
//     *result = '\0';
// }
// int main() {
//     char s1[] = "Hello";
//     char s2[] = "World";
//     char result[100];
//     concatenate(s1, s2, result);
//     printf("Concatenated: %s\n", result);
//     return 0;
// }

// Q16: Find average using pointer parameter
// #include <stdio.h>
// void average(int a, int b, int c, float *avg) {
//     *avg = (a + b + c) / 3.0;
// }
// int main() {
//     int x = 10, y = 20, z = 30;
//     float result;
//     average(x, y, z, &result);
//     printf("Average: %.2f\n", result);
//     return 0;
// }

// Q17: Modify multiple variables using double pointer
// #include <stdio.h>
// void modifyValues(int **p1, int **p2) {
//     **p1 = **p1 + 10;
//     **p2 = **p2 * 2;
// }
// int main() {
//     int x = 5, y = 10;
//     int *ptr1 = &x, *ptr2 = &y;
//     printf("Before: x = %d, y = %d\n", x, y);
//     modifyValues(&ptr1, &ptr2);
//     printf("After: x = %d, y = %d\n", x, y);
//     return 0;
// }

// Q18: Count vowels in string using pointer
// #include <stdio.h>
// int countVowels(char *str) {
//     int count = 0;
//     while (*str != '\0') {
//         if (*str == 'a' || *str == 'e' || *str == 'i' || 
//             *str == 'o' || *str == 'u' ||
//             *str == 'A' || *str == 'E' || *str == 'I' || 
//             *str == 'O' || *str == 'U') {
//             count++;
//         }
//         str++;
//     }
//     return count;
// }
// int main() {
//     char str[] = "Hello World";
//     printf("String: %s\n", str);
//     printf("Vowel count: %d\n", countVowels(str));
//     return 0;
// }

// Q19: Check if two strings are equal using pointers
// #include <stdio.h>
// int stringEqual(char *str1, char *str2) {
//     while (*str1 != '\0' && *str2 != '\0') {
//         if (*str1 != *str2)
//             return 0;
//         str1++;
//         str2++;
//     }
//     return (*str1 == '\0' && *str2 == '\0');
// }
// int main() {
//     char s1[] = "Hello";
//     char s2[] = "Hello";
//     if (stringEqual(s1, s2))
//         printf("Strings are equal\n");
//     else
//         printf("Strings are not equal\n");
//     return 0;
// }

// Q20: Function pointer - call function through pointer
// #include <stdio.h>
// int add(int a, int b) {
//     return a + b;
// }
// int subtract(int a, int b) {
//     return a - b;
// }
// int main() {
//     int (*funcPtr)(int, int);  // Function pointer
//     funcPtr = add;
//     printf("Add: %d\n", funcPtr(10, 5));
    
//     funcPtr = subtract;
//     printf("Subtract: %d\n", funcPtr(10, 5));
//     return 0;
// }


// #include <stdio.h>
// int main(){
// int arr[]={1,2,3,4,5};
// int min=arr[0];
// int min2=1001;
// for(int i=1;i<5;i++){
//     if (arr[i]<min){
//         min=arr[i];
//     }
// } 
// for(int i=1;i<5;i++){
//     if (arr[i]>min && arr[i]<min2){
//         min2=arr[i];
//     }
//     }
//     if (min2==1001){
//         printf("%d",0);
//     }
//     else {
//         printf("%d",min2);
// }
// }



// swapping 2 numbers 
// #include <stdio.h>

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;

// }
// int main(){
//     int a=5,b=10;
//     int temp;
//     swap(&a,&b);  
//     printf("%d %d",a,b);  
// }


// #include <stdio.h>
// void compare(int *x ,int *y){
//     if (*x==*y){
//         printf("equal");
//     }
//     else{
//         printf("not ");
//     }
// }
// int main(){
//     int a,b;
//     printf("enter an number ");
//     scanf("%d %d\n",&a,&b);
//     compare(&a,&b);
// }


// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *p = arr;
//     for(int i = 0; i < 5; i++){
//         printf("%d ", *(p+i));
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *strt=arr, *end=arr+4 ,temp;
//     temp=*strt;
//     *strt=*end;
//     *end=temp;
//     for (int i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
// }


// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,6,4};
//     int sum=0;
//     int *p=arr;
//     for (int i=0;i<5;i++){
//         sum+=*p+i;
//     }
//     printf("%d",sum);
// }

// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,6,4};
//     int *p=arr;
//     int min=*p;
//     for (int i=0;i<5;i++){
//         if ((*p+i)<min){
//             min=*p+i;
//         }
//     }
//     printf("%d",min);
// }

// #include <stdio.h>
// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,9};
//     int count=0;
//     int *p=arr;
//     for (int i=0;i<9;i++){
//         if (*(p+i)%2==0){
//             count++;
//         }
//     }
//     printf("%d",count);
// }

// #include <stdio.h>
// int main(){
//     int arr[3]={10,20,30};
//     int *p=arr;
//     for(int i=0;i<3;i++)
//         printf("Value=%d Address=%u\n", *(p+i), (p+i));
// }

// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p=arr+4;
//     for (int i=0;i<5;i++){
//         printf("%d ",*p);
//         p--;
        
//     }
//     return 0;}

// #include <stdio.h>
// int main(){
// int num=1234;
// int arr[10];
// int count=0;
// int temp=num;

// while(temp>0){
//     arr[count]=temp%10;
//     count++;
//     temp=temp/10;

// }
// for (int i=count-1;i>=0;i--){
//     printf("%d",arr[i]);
// }
// printf("\n");
// // Print complete array
// printf("Complete array: ");
// for (int i=0;i<10;i++){
//     printf("%d ",arr[i]);
// }
// }
