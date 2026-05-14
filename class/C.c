
// Print all alphabets using pointers

// #include <stdio.h>
// int main() {
//     printf("Hello \nWorld");
//     return 0;
// }

// user se input lena hai aur usko print karna hai
// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter your number: ");
//     scanf("%d", &num);
//     printf("You entered number: %d", num);
// }


// make a calculater
// #include <stdio.h>
// int main() {
//     float a,b;
//     float sum, sub, mul, div;
//     printf("Enter first number: ");
//     scanf("%f", &a);
//     printf("Enter second number: ");
//     scanf("%f", &b);
//     sum = a + b;
//     sub = a - b;
//     mul = a * b;
//     div = a / b;
//     printf("Sum: %f\n", sum);
//     printf("Subtraction: %f\n", sub);
//     printf("Multiplication: %f\n", mul);
//     printf("Division: %f\n", div);
//     return 0;
//     if (div == 0) {
//         printf("Division by zero is not allowed.\n");
//     } 
//     else {
//         printf("Division: %f\n", div);
//     }
// }

// temp in celsius to fahrenheit
// #include <stdio.h>
// int main() {
//     float celsius, fahrenheit;
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);
//     fahrenheit = (celsius * 9/5) + 32;
//     printf("Temperature in Fahrenheit: %f\n", fahrenheit);
//     return 0;
// }

// if -else statement age check
// #include <stdio.h>
// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if (age >= 18) {
//         printf("You are adult.\n");
//     } else {
//         printf("You are not adult.\n");
//     }
//     return 0;
// }

//  if else calculator
// #include <stdio.h>
// int main() {
    
//     int choice;
//     float a, b, result;
//     printf("Select operation:\n");
//     printf("1. Addition\n");
//     printf("2. Subtraction\n");
//     printf("3. Multiplication\n");
//     printf("4. Division\n");
//     printf("Enter your choice (1-4): ");
//     scanf("%d", &choice);
//     printf("Enter first number: ");
//     scanf("%f", &a);
//     printf("Enter second number: ");
//     scanf("%f", &b);
//     if (choice == 1) {
//         result = a + b;
//         printf("Result: %f\n", result);
//     } else if (choice == 2) {
//         result = a - b;
//         printf("Result: %f\n", result);
//     } else if (choice == 3) {
//         result = a * b;
//         printf("Result: %f\n", result);
//     } else if (choice == 4) {
//         if (b != 0) {
//             result = a / b;
//             printf("Result: %f\n", result);
//         } else {
//             printf("Error: Division by zero is not allowed.\n");
//         }
//     } else {
//         printf("Invalid choice.\n");
//     }
//     return 0;
// }


// case study 1
// #include <stdio.h>
// int main() {
//     int ps,exp;
//     printf("Enter your performance score: ");
//     scanf("%d", &ps);
//     printf("Enter your years of experience: ");
//     scanf("%d", &exp);
//     if (ps >= 75 & exp > 3) {
//         printf("You are eligible for promotion.\n");
//     } else {
//         printf("You are not eligible for promotion.\n");
//     }
// }


// case study 2
// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter number of vehicles: ");
//     scanf("%i", &num);
//     if (num>50){
//         printf("green\n");
//     }
//     else if (num>=20 && num<=50){
//         printf("yellow\n");
//     }
//     else if (num>=0 && num<20){
//         printf("red\n");
//     }
//     else {
//         printf("not valid\n");
//     }

// }

// case study 3
// #include <stdio.h>
// int main() {
//     int amt , discount;
//     printf("Enter the total amount: ");
//     scanf("%d", &amt);
//     if (amt >=5000) {
//         discount = amt * 0.2;
//         printf("You are eligible for 20%% discount.\n");
//         printf("Discount amount: %d\n", discount);
//         printf("Final amount: %d\n", amt - discount);
//     } 
//     else if (amt >=2000 && amt <5000) {
//         discount = amt * 0.1;
//         printf("You are eligible for 10%% discount.\n");
//         printf("Discount amount: %d\n", discount);
//         printf("Final amount: %d\n", amt - discount);
//     } 
//     else {
//         printf("You are not eligible for any discount.\n");
//     }
// }


// case study 4 
// #include <stdio.h>
// int main() {
//     int age;
//     char gender;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     printf("Enter your gender (M/F): ");
//     scanf(" %c", &gender);
//     if (gender  == 'M') {
//         if (age < 18) {
//             printf("You are a boy.\n");
//         } else {
//             printf("You are a man.\n");
//         }
//     } 
//     else    if (gender  == 'F') {
//         if (age < 18) {
//             printf("You are a girl.\n");
//         } else {
//             printf("You are a woman.\n");
//         }   
//     }
//     else {
//         printf("Invalid gender input.\n");
//     }   
// }


// case study 5
// #include <stdio.h>
// int main() {
//     int maths,eng,sci,sst,hin;
//     printf("Enter your marks in maths: ");
//     scanf("%d", &maths);
//     printf("Enter your marks in english: ");
//     scanf("%d", &eng);
//     printf("Enter your marks in science: ");
//     scanf("%d", &sci);
//     printf("Enter your marks in social studies: ");
//     scanf("%d", &sst);
//     printf("Enter your marks in hindi: ");
//     scanf("%d", &hin);
//     int total = maths + eng + sci + sst + hin;
//     int average = total / 5;
//     if (average >= 85) {
//         printf("Grade: A\n");
//         printf("percentage: %d\n", average);
//     } 
//     else if (average >= 75 && average<85) {
//         printf("Grade: B\n");
//         printf("percentage: %d\n", average);
//     } 
//     else if (average >= 60 && average<75) {
//         printf("Grade: C\n");
//         printf("percentage: %d\n", average);
//     } 
//     else if (average >= 50 && average<60) {
//         printf("Grade: D\n");
//     } 
//     else if (average >= 40 && average<50) {
//         printf("Grade: E\n");
//         printf("percentage: %d\n", average);
//     }
//     else {
//         printf("Grade: F\n");
//         printf("percentage: %d\n", average);
//     }
// }


// case study 6
// #include <stdio.h>
// int main()
// {
//     int d1 , d2 , d3;
//     printf("Enter power usage in d1 :");
//     scanf("%d", &d1);
//     printf("Enter power usage in d2 :");
//     scanf("%d", &d2);
//     printf("Enter power usage in d3 :");
//     scanf("%d", &d3);
//     int total = d1*24 + d2*24 + d3*24;
//     printf("Total power consumption in a day: %d watts\n", total);
//     if (total >= 300) {
//         printf("high Usage\n");
//     } 
//     else if (total > 150 && total <= 300) {
//         printf("Moderate consumption\n");
//     } 
//     else {
//         printf("Low consumption\n");
//     }
// }


// case study 7
// #include <stdio.h>
// int main(){
//     int d1,d2,d3,d4;
//     printf("calorie burned in d1:");
//     scanf("%d", &d1);
//     printf("calorie burned in d2:");
//     scanf("%d", &d2);
//     printf("calorie burned in d3:");
//     scanf("%d", &d3);
//     printf("calorie burned in d4:");
//     scanf("%d", &d4);
//     int total = d1 + d2 + d3 + d4;
//     printf("Total calorie burned: %d\n", total);
//     int avg = total / 4;
//     if (avg >= 500) {
//         printf("Excellent\n");
//     } 
//     else if (avg >= 300 && avg < 500) {
//         printf("Good\n");
//     } 
//     else {
//         printf("need improvement \n");
//     }
// }


// case study 8 calculate salary based on basic pay
// #include <stdio.h>
// int main() {
//     int basic, hra, da, gross ,tax, id;
//     printf("Enter your ID: ");
//     scanf("%d", &id);
//     printf("Enter your basic pay: ");
//     scanf("%d", &basic);
//     hra = basic * 0.20;
//     da = basic * 0.10;
//     gross = basic + hra + da;
//     printf("Gross Salary: %d\n", gross );
//     if (gross >= 50000) {
//         tax = gross * 0.15;
//         printf("Tax: %d \n", tax);
//     }
//     else {
//         tax = gross * 0.05;
//         printf("Tax: %d\n", tax);
//     }
//     printf("total Salary: %d\n", gross+tax);
// }


//  assignment operators
// #include <stdio.h>
// int main() {
//     int a = 10;
//     int b = 5;
//     printf("addition: %d\n", a + b);
//     printf("subtraction: %d\n", a - b);
//     printf("multiplication: %d\n", a * b);
//     printf("division: %d\n", a / b);
//     printf("modulus: %d\n", a % b);
// }   


// bit wise operators
// #include <stdio.h>  
// int main() {
//     int a = 4;  // 0100 in binary
//     int b = 5;  // 0101 in binary
//     printf("Bitwise AND: %d\n", a & b);   // 0100 in binary = 4
//     printf("Bitwise OR: %d\n", a | b);    // 0101 in binary = 5
//     printf("Bitwise XOR: %d\n", a ^ b);   // 0001 in binary = 1
//     printf("Bitwise NOT of a: %d\n", ~a); // two's complement = -5
//     printf("Left Shift a by 1: %d\n", a << 1); // 1000 in binary = 8
//     printf("Right Shift a by 1: %d\n", a >> 1); // 0010 in binary = 2
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a=8;
//     int b=9;
//     printf("Bitwise AND: %d\n", a & b);
//     printf("Bitwise OR: %d\n", a | b);   
//     printf("Bitwise XOR: %d\n", a ^ b);
//     printf("Bitwise NOT of a: %d\n", ~a);
//     printf("Left Shift a by 1: %d\n", a << 1);
//     printf("Right Shift a by 1: %d\n", a >> 1);    
// }


// conditional operator greater of 3 numbers
// #include <stdio.h>
// int main() {
//     int a, b, c, max;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//     printf("The greatest number is: %d\n", max);
//     return 0;
// }


// #include <stdio.h>
// int main() {
// int x=5;
// int y= x++ + ++x;
// printf("%d %d", x, y);
// return 0;
// }   


// #include <stdio.h>
// int main() {
//     int x=5;
//     if (x++ >5 && ++x <8) {
//         printf("True/n");
//         printf("%d", x);
//     }
//     else {
//         printf("false\n");
//         printf("%d", x);
//     }
// }


// check even number of 1 using bitwise operator
// #include <stdio.h>
// int main() {
//     int id, count = 0;
//     printf("Enter packet id: ");
//     scanf("%d", &id);
//     while (id) {
//         count += id & 1;
//         id >>= 1;
//     }
//     if (count % 2 == 0) {
//         printf("invalid.\n");
//     } 
//     else {
//         printf("valid.\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int num, reverse = 0, remainder;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         remainder = num % 10;
//         reverse = reverse * 10 + remainder;
//         num /= 10;
//     }
//     printf("Reversed number: %d\n", reverse);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int num, sum = 0, remainder;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         remainder = num % 10;
//         sum += remainder;
//         num /= 10;
//     }
//     printf("Sum of digits: %d\n", sum);
//     return 0;
// }


// ternary operator 
// #include <stdio.h>
// int main() {
//     int a, b, max;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     max = (a > b) ? a : b;
//     printf("The maximum number is: %d\n", max);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     (age >= 18) ? printf("You are an adult.\n") : printf("You are not an adult.\n");
//     return 0;
// }


// #include <stdio.h>
// int main() {    
//     int marks;
//     printf("Enter your marks: ");
//     scanf("%d", &marks);
//     (marks >= 50) ? printf("Pass\n") : printf("Fail\n");
//     return 0;
// }


// case study 9
// a sensor records temp,humidity,pressure-- read values ,use comma operator to assign and calculate avg
// display all values
// #include <stdio.h>
// int main() {
//     float temp, humidity, pressure, avg;
//     printf("Enter temperature, humidity, and pressure: ");
//     scanf("%f, %f, %f", &temp, &humidity, &pressure);
//     avg = (temp + humidity + pressure) / 3;
//     printf("Temperature: %.2f\n", temp);
//     printf("Humidity: %.2f\n", humidity);
//     printf("Pressure: %.2f\n", pressure);
//     printf("Average: %.2f\n", avg);
// }


// case study 10
// read battery %
// #include <stdio.h>
// int main() {
//     int b1, b2, level;
//     printf("Enter battery percentages (start end): ");
//     scanf("%d",&b2);
//     level = b1 - b2;
//     (level >= 60) ? printf("Battery: High Drain\n") :
//     (level >= 30) ? printf("Battery: Medium Drain\n") :
//     (level >= 0)  ? printf("Battery: Low Drain\n") :
//                     printf("Enter correct value\n");
// }


// case study 11
// inp salary 
// find the avg saving per week and display saving category on pecentage
// inp 5 major animites
//  50 for good , 30-50 for average , less than 30 poor
// #include <stdio.h>
// int main() {
// int gro,ele,veh,loan,oth,sal,total,savings,saving_week,saving_per;
// char ln;
// printf("Enter salary: ");
// scanf("%d", &sal);
// printf("Enter grocery expense: ");
// scanf("%d", &gro);
// printf("Enter electricity expense: ");
// scanf("%d", &ele);
// printf("Enter vehicle expense: ");
// scanf("%d", &veh);
// printf("do you have any loan expense? if yes enter y else n\n");
// scanf(" %c",&ln);
// if (ln =='y'){
//     printf("Enter loan expense: ");
//     scanf("%d", &loan);
// }
// else {
//     loan=0;
// }
// printf("Enter other expense: ");
// scanf("%d", &oth);
// total = gro + ele + veh + loan + oth;
// savings= sal - total;
// saving_week= savings / 4;
// saving_per = (savings * 100) / sal;
// printf("Total savings per month: %d\n", savings);
// printf("Average savings per week: %d\n", saving_week);
// printf("Savings percentage: %d%%\n", saving_per);
// if (saving_per >= 50) {
//     printf("Savings category: Good\n");
// } else if (saving_per >= 30) {
//     printf("Savings category: Average\n");
// } else {
//     printf("Savings category: Poor\n");
// }
// }

// #include <stdio.h>
// int main() {
// if ('A'<10){
//     printf("hyee\n");
// }
// else {
//     printf("hello9\n");
// }
// }


// | **Category**   | **Operators**                      | **Associativity** |              |              |
// | -------------- | ---------------------------------- | ----------------- | ------------ | ------------ |
// | Postfix        | `()  []  ++  --`                   | Left → Right      |              |              |
// | Unary          | `+  -  !  ~  ++  --  *  &  sizeof` | Right → Left      |              |              |
// | Multiplicative | `*  /  %`                          | Left → Right      |              |              |
// | Additive       | `+  -`                             | Left → Right      |              |              |
// | Shift          | `<<  >>`                           | Left → Right      |              |              |
// | Relational     | `<  <=  >  >=`                     | Left → Right      |              |              |
// | Equality       | `==  !=`                           | Left → Right      |              |              |
// | Bitwise AND    | `&`                                | Left → Right      |              |              |
// | Bitwise XOR    | `^`                                | Left → Right      |              |              |
// | Bitwise OR     | `                                  | Left → Right      |              |              |
// | Logical AND    | `&&`                               | Left → Right      |              |              |
// | Logical OR     | `                                  | Left → Right      |              |              |
// | Conditional    | `?:`                               | Right → Left      |              |              |
// | Assignment     | `=  +=  -=  *=  /=  %=`            | Right → Left      |              |              |
// | Comma          | `,`                                | Left → Right      |              |              |




// #include <stdio.h>
// int main() {
//     int a = 5, b = 10, c = 15;
//     int result = a + b * c;
//     printf("Result: %d\n", result);
//  }


// #inckude <stdio.h>
// int main() {
//     int a = 5, b = 10, c = 15;
//     int result = (a + b) * c;
//     printf("Result: %d\n", result);
//  }


//  #include <stdio.h>
//  int main() {
//      int x = 4;
//      int y = 2;
//      int z = 8;
//      int result = x + y * z - y / x;
//      printf("Result: %d\n", result);
//  }

// switch case in grading system
// #include <stdio.h>
// int main() {
//     int x,m1 ,m2 , m3, m4, m5;
//     printf("Enter your marks : ");
//     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
//     x = (m1 + m2 + m3 + m4 + m5) / 5;
//     }
//     switch (x / 10) {
//         case 10:
//             printf("Grade A+\n");
//             break;
//         case 9:
//             printf("Grade A\n");
//             break;
//         case 8:
//             printf("Grade B\n");
//             break;
//         case 7:
//             printf("Grade C\n");
//             break;
//         case 6:
//             printf("Grade D\n");
//             break;
//         case 5:
//             printf("Grade E\n");
//             break;
//         default:
//             printf("Grade F\n");
//     }
// }


// #include <stdio.h>
// int main() {
//     int m_g , b_l , e_o;
//     printf("enter 0 if main grid fails else 1: ");
//     scanf("%d", &m_g);
//     printf("enter 0 if battery low else 1: ");
//     scanf("%d", &b_l);
//     printf("enter 0 if emergency overload else 1: ");
//     scanf("%d", &e_o);
//     if (m_g == 0 || b_l == 1) {
//         printf("backup generator on\n");
//     }
//     else if (e_o==0) {
//         printf("backup generator on\n");
//     }
//     else {
//         printf("backup generator off\n");
//     }
// }   



// #include <stdio.h>
// int main() {
//     float purchaseAmount, deliveryFee, totalBill;
//     printf("Enter purchase amount: ");
//     scanf("%f", &purchaseAmount);
//     deliveryFee = (purchaseAmount >= 500) 
//                   ? purchaseAmount * 0.05 
//                   : purchaseAmount * 0.15
//     totalBill = purchaseAmount + deliveryFee;
//     printf("Delivery Fee: %.2f\n", deliveryFee);
//     printf("Total Bill Amount: %.2f\n", totalBill);
// }



// #include <stdio.h>
// int main() {
//     char grade;
//     printf("Enter grade: ");
//     scanf(" %c", &grade);
//     switch (grade) {
//         case 'A':
//             printf("Excellent\n");
//             break;
//         case 'B':
//         case 'C':
//             printf("Good\n");
//             break;
//         default:
//             printf("Invalid Grade\n");
//     }
// }


// sum of first and last digit of 4 digit number
// #include <stdio.h>
// int main() {
//     int num, firstDigit, lastDigit, sum;
//     printf("Enter a four-digit number: ");
//     scanf("%d", &num);
//     lastDigit = num % 10; // Get the last digit
//     firstDigit = num / 1000; // Get the first digit
//     sum = firstDigit + lastDigit; // Calculate the sum
//     printf("Sum of the first and last digit: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int num, firstDigit, lastDigit, sum;
//     printf("Enter a four-digit number: ");
//     scanf("%d", &num);
//     lastDigit = num % 10; // Get the last digit
//     firstDigit = num / 1000; // Get the first digit
//     sum = firstDigit + lastDigit; // Calculate the sum
//     printf("Sum of the first and last digit: %d\n", sum);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     // Negation
//     int temperature = 20;
//     int negative_temp = -temperature;
  
//     // Unary Plus (limited use case)
//     double pi = 3.14159;
//     int rounded_pi = +(int)pi;
  
//     // Pre-increment vs. Post-increment
//     int loop_counter = 0;
  
//     // Pre-increment: modify then print
//     printf("Pre-increment: %d\n", ++loop_counter);
  
//     // Post-increment: print then modify
//     printf("Post-increment: %d\n", loop_counter++);
//     printf("Final loop counter: %d\n", loop_counter);
  
//     // Pre-decrement vs. Post-decrement
//     int health_points = 100;
  
//     // Pre-decrement: modify then print
//     printf("Damage taken: %d\n", --health_points);
  
//     // Post-decrement: print then modify
//     printf("Remaining health points: %d\n", health_points--);
//     printf("Final health points: %d\n", health_points);
  
//     // Sizeof
//     printf("\nSize of data types:\n");
//     printf("  - Size of integer: %zu bytes\n", sizeof(int));
//     printf("  - Size of double: %zu bytes\n", sizeof(double));
//     printf("  - Size of character: %zu byte\n", sizeof(char));
  
//     // Address-of and Dereference
//     int value = 10;
//     int *ptr = &value; // ptr now stores the memory address of value
//     printf("\nAddress-of and Dereference:\n");
//     printf("  - Address of value: %p\n", ptr);  // %p for pointer address
  
//     // Dereference the pointer to access the value at the stored address
//     int dereferenced_value = *ptr;
//     printf("  - Dereferenced value: %d\n", dereferenced_value);
    
//     // Summarize results
//     printf("\nUnary Operator Results:\n");
//     printf("  - Negative temperature: %d degrees Celsius\n", negative_temp);
//     printf("  - Rounded pi: %d\n", rounded_pi);
//     return 0;
//   }

// Input will contain 4 single digits separated by spaces. 
// #include <stdio.h>
// int main() {
//     int d1, d2, d3, d4;
//     printf("Enter four single digits separated by spaces: ");
//     scanf("%d %d %d %d", &d1, &d2, &d3, &d4);
//     int result = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
//     printf("Combined number: %d\n", result);
//     return 0;
// }

// Each test case will contain a number n where 1000<=n<=9999.
// #include <stdio.h>
// int main() {             
//     int n;  
//     scanf("%d", &n);
//     int d1 = n / 1000; 
//     int d2 = (n / 100) % 10;
//     int d3 = (n / 10) % 10;
//     int d4 = n % 10;
//     int result = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
//     printf("Digits: %d %d %d %d\n", d1, d2, d3, d4);
//     return 0;    
// }  


// LOOPS
// #include <stdio.h>
// int main() {
//     int i;  
//     for (i = 1; i < 11; i++) {
//         printf("%d\n", i);
//     }
// }


// #include <stdio.h>
// int main() {
//     int i, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Odd numbers:");
//     for (i = 1; i <= n; i++) {
//         if (i % 2 != 0) {
//             printf("%d ", i);
//         }
//     }
//     printf("\nEven numbers:");
//     for (i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             printf("%d ", i);
//         }
//     }
// }

// sum of even and odd numbers separately
// #include <stdio.h>
// int main() {
//     int i, n, sumEven = 0, sumOdd = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             sumEven += i;
//         } else {
//             sumOdd += i;
//         }
//     }
    
//     printf("Sum of even numbers: %d\n", sumEven);
//     printf("Sum of odd numbers: %d\n", sumOdd);
// }


// table of a number
// #include <stdio.h>
// int main() {
//     int i, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Multiplication table of %d:\n", n);
//     for (i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
// }


// simple factorial of a number
// #include <stdio.h>
// int main() {
//     int i, n, factorial = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         factorial *= i;
//     }
//     printf("Factorial of %d is: %d\n", n, factorial);
//     return 0;
// }


// perfect number
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i < n; i++) {
//         if (n % i == 0) {
//             sum += i;
//         }
//     }

    

// while loops
// 1-n numbers 
// #include <stdio.h>
// int main() {
//     int n, i = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (i <= n) {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }


// uppercase suing ascii values
// #include <stdio.h>
// int main() {
//     char ch;
//     printf("Enter a lowercase letter: ");
//     scanf("%c", &ch);
//     if (ch >= 'a' && ch <= 'z') {
//         char uppercase = ch - ('a' - 'A');
//         printf("Uppercase letter: %c\n", uppercase);

//     } else {
//         printf("Invalid input. Please enter a lowercase letter.\n");
//     }

//     return 0;

// factorial using while loop
// #include <stdio.h>
// int main() {
//     int n, factorial = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     int i = 1;
//     while (i <= n) {
//         factorial *= i;
//         i++;

//     }
//     printf("Factorial of %d is: %d\n", n, factorial);
//     return 0;
// }


// perfect number using while loop
// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int i = 1;
//     while (i < n) {
//         if (n % i == 0) {
//             sum += i;
//         }
//         i++;
//     }
//     if (sum == n) {
//         printf("%d is a perfect number.\n", n);
//     } else {
//         printf("%d is not a perfect number.\n", n);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n;
//     char choice;
//     printf("Do you want to enter a number? (y/n): ");
//     scanf(" %c", &choice);
//     while(choice == 'y' || choice == 'Y') {
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         if(n > 0)
//             printf("The number is Positive\n");
//         else if(n < 0)
//             printf("The number is Negative\n");
//         else
//             printf("The number is Zero\n");
//         printf("Do you want to enter another number? (y/n): ");
//         scanf(" %c", &choice);
//     }
//     printf("Program Ended\n");
//     return 0;
// }


// prime no form 1 to n
// #include <stdio.h>
// int main() {
//     int n, i, j, isPrime;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Prime numbers from 1 to %d are:\n", n);
//     for (i = 2; i <= n; i++) {
//         isPrime = 1;
//         for (j = 2; j <= i / 2; j++) {
//             if (i % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }


// leap year of  n to 2026
// #include <stdio.h>
// int main() {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);
//     printf("Leap years from %d to 2026 are:\n", year);
//     for (int i = year; i <= 2026; i++) {
//         if ((i % 4 == 0 && i % 100 != 0) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }


// hcf of 2 numbers
// #include <stdio.h>
// int main() {
//     int num1, num2, hcf;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     for (int i = 1; i <= num1 && i <= num2; i++) {
//         if (num1 % i == 0 && num2 % i == 0) {
//             hcf = i;
//         }
//     }
//     printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
//     return 0;
// }


// lcm of 2 numbers
// #include <stdio.h>
// int main() {
//     int num1, num2, lcm;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     lcm = (num1 > num2) ? num1 : num2; // Start with the greater number
//     while (1) {
//         if (lcm % num1 == 0 && lcm % num2 == 0) {
//             break;
//         }
//         lcm++;
//     }
//     printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
//     return 0;
// }


// armstrong number
// #include <stdio.h>
// int main() {
//     int num, originalNum, remainder, result = 0;
//     printf("Enter a three-digit integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += remainder * remainder * remainder;
//         originalNum /= 10;
//     }
//     if (result == num) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }
//     return 0;
// }


// palindrome number
// #include <stdio.h>
// int main() {
//     int num, n, reversedNum = 0, remainder;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     originalNum = num;
//     n = num;
//     while (n>0) {
//         remainder = n % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         n /= 10;
//     }
//     if (reversedNum == num) {
//         printf("%d is a palindrome number.\n", num);
//     } else {
//         printf("%d is not a palindrome number.\n", num);
//     }
//     return 0;
// }


// 1
// 23
// 456
// 78910
// #include <stdio.h>
// int main() {
//     int n, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//     }
//     return 0;
// }


//    1
//   12
//  123
// 1234
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("%d", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//    1 
//   1 2
//  1 2 3
// 1 2 3 4 
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//    1
//   35
//  7911
// 131517
// #include <stdio.h>
// int main() {
//     int n, num = 1;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("%d", num);
//             num += 2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

//   1
//  1 2
// 1 2 3
//1 2 3 4
// 1 2 3 
//  1 2 
//   1

// #include <stdio.h>
// int main() {
//     int i, j, space;
//     int n = 4;
//     for (i = 1; i <= n; i++) {
//         for (space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     for (i = n - 1; i >= 1; i--) {
//         for (space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 1 2 3 4 5 
//  1 2 3 4
//   1 2 3
//    1 2
//     1
//    1 2
//   1 2 3
// 1 2 3 4 5
// #include <stdio.h>
// int main() {
//     int i, j, space;
//     int n = 5;
//     for (i = n; i >= 1; i--) {
//         for (space = 1; space <= n - i; space++) {

//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {

//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     for (i = 2; i <= n; i++) {
//         for (space = 1; space <= n - i; space++) {
//             printf(" ");
//         }
//         for (j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }




//     a
//    b b
//   C   c
//  D     D
// E       E
//  d     d
//   c   c 
//    b b 
//     a

// #include <stdio.h>

// int main() {
//     int i, j, n = 5;
//     char ch;

//     for(i = 1; i <= n; i++) {
//         ch = 'A' + i - 1;

//         for(j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         printf("%c", ch);

//         if(i > 1) {
//             for(j = 1; j <= 2 * i - 3; j++) {
//                 printf(" ");
//             }
//             printf("%c", ch);
//         }

//         printf("\n");
//     }

//     for(i = n - 1; i >= 1; i--) {
//         ch = 'A' + i - 1;

//         for(j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         printf("%c", ch);

//         if(i > 1) {
//             for(j = 1; j <= 2 * i - 3; j++) {
//                 printf(" ");
//             }
//             printf("%c", ch);
//         }

//         printf("\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter a number: ");
//     scanf("%d", &n);
    // for (int i = 1; i <= n; i++) {
    //     printf("%d ", i);
    // }
//     for (int i = 1; i <= n; i++) {
        
//         if (n % 3 == 0) {
//             continue;
//         }
//         else{
//             printf("\n%d\n", n);
//     }
//     return 0;       
// }
// }


// #include <stdio.h>
// int main() {
//     int N, i;
//     printf("Enter value of N: ");
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++) {
//             printf("%d ", i);
//         }
//     for (i = 1; i <= N; i++) {
//         if (i == 8) {
//             goto end;
//         }
//         if (i % 3 == 0) {
//             continue;
//         }
//         printf("\n%d ", i);
//     }
// end:
//     printf("\nProgram finished");
//     return 0;
// }

// arrays 
// #include <stdio.h>
// int main() {
//     int arr[5];
//     printf("Enter 5 integers: ");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// input number from user in form of array and find sum and product of all elements
// #include <stdio.h>
// int main() {
//     int l ;
//     printf("enter the length of array: ");
//     scanf("%d", &l);

//     int arr[l], sum = 0, product = 1;
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//         product *= arr[i];
//     }
//     printf("Sum of elements: %d\n", sum);
//     printf("Product of all elements: %d\n", product);
//     return 0;
// }

// input numbers in array and find maximum and minimum number
// #include <stdio.h>
// int main() {
//     int l;
//     printf("Enter the length of array: ");
//     scanf("%d", &l);
//     int arr[l], max, min;
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//     }
//     max = min = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//       }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     printf("Maximum number: %d\n", max);
//     printf("Minimum number: %d\n", min);
//     return 0;
// }


// input numbers in array and find even numbers
// #include <stdio.h>
// int main() {
//     int l;
//     printf("Enter the length of array: ");
//     scanf("%d", &l);
//     int arr[l];
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Even numbers in the array: ");
//     for (int i = 0; i < l; i++) {
//         if (arr[i] % 2 == 0) {
//             printf("%d ", arr[i]);
//         }
//     }
//     return 0;
// }



// swap first and last element of array
// #include <stdio.h>
// int main() {
//     int l;
//     printf("Enter the length of array: ");
//     scanf("%d", &l);
//     int arr[l];
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int temp = arr[0];
//     arr[0] = arr[l - 1];
//     arr[l - 1] = temp;
    
//     printf("Array after swapping first and last element: ");
//     for (int i = 0; i < l; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// replace neg with zero in array
// #include <stdio.h>
// int main() {
//     int l;
//     printf("Enter the length of array: ");
//     scanf("%d", &l);
//     int arr[l];
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < l; i++) {
//         if (arr[i] < 0) {
//             arr[i] = 0;
//         }
//     }
    
//     printf("Array after replacing negative numbers with zero: ");
//     for (int i = 0; i < l; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;


// }
// sort array in ascending order and descending order
// #include <stdio.h>
// int main() {
//     int l;
//     printf("Enter the length of array: ");
//     scanf("%d", &l);
//     int arr[l];
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < l - 1; i++) {
//         for (int j = 0; j < l - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
    
//     printf("Array in ascending order: ");
//     for (int i = 0; i < l; i++) {
//         printf("%d ", arr[i]);
//     }
//     for (int i = 0; i < l - 1; i++) {
//         for (int j = 0; j < l - i - 1; j++) {
//             if (arr[j] < arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
    
//     printf("\nArray in descending order: ");
//     for (int i = 0; i < l; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }
//  seacrh an element in array and return its index
// #include <stdio.h>
// int main() {
//     int l, target, index = -1;
//     printf("Enter the length of array: ");
//     scanf("%d", &l);
//     int arr[l];
//     printf("Enter %d integers: ", l);
//     for (int i = 0; i < l; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &target);
    
//     for (int i = 0; i < l; i++) {
//         if (arr[i] == target) {
//             index = i;
//             break;
//         }
//     }
    
//     if (index != -1) {
//         printf("Element found at index: %d\n", index);
//     } else {
//         printf("Element not found in the array.\n");
//     }

//     return 0;
// }


// 2d array
// #include <stdio.h>
// int main() {
//     int m,n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int i;
//     int arr[m][n];
//     printf("Enter elements of the array:\n");
//     for (i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// transpose of a matrix
// #include <stdio.h>
// int main() {
//     int m,n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int i;
//     int arr[m][n];
//     printf("Enter elements of the array:\n");
//     for (i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Transpose of the matrix:\n");
//     for (int j = 0; j < n; j++) {
//         for (int i = 0; i < m; i++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// sum of individual row and column
// #include <stdio.h>
// int main() {
//     int m,n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int arr[m][n];
//     printf("Enter elements of the array:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Sum of individual rows:\n");
//     for (int i = 0; i < m; i++) {
//         int rowSum = 0;
//         for (int j = 0; j < n; j++) {
//             rowSum += arr[i][j];
//         }
//         printf("Row %d: %d\n", i + 1, rowSum);
//     }
//     printf("Sum of individual columns:\n");
//     for (int j = 0; j < n; j++) {
//         int colSum = 0;
//         for (int i = 0; i < m; i++) {
//             colSum += arr[i][j];
//         }
//         printf("Column %d: %d\n", j + 1, colSum);
//     }
//     return 0;
// }


// sum and sub of 2 matrices if they are of same order
// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int m1[m][n], m2[m][n], sum[m][n], diff[m][n];
//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &m1[i][j]);
//         }
//     }
//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &m2[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             sum[i][j] = m1[i][j] + m2[i][j];
//             diff[i][j] = m1[i][j] - m2[i][j];
//         }
//     }
//     printf("Sum of the two matrices:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Difference of the two matrices:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", diff[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// strings 
// print h,e,l,l,o
// #include <stdio.h>
// int main() {
//     char a[]="hello";
//     int i = 0;
//     while (i<=4) {
//         printf("%c\n", a[i]);
//         i++;
//     }
//     return 0;
// }

// input a string and print it
// #include <stdio.h>
// int main() {
//     char a[10];
//     printf("first name : ");
//     scanf("%[^\n]", a);
//     printf("first name : %s\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char a[10];
//     printf("first name : ");
//     scanf("%9s", a);
//     printf("first name : %s\n", a);
//     return 0;
// }

// gets and puts
// #include <stdio.h>
// int main() {
//     char a[100];
//     printf("Enter a string: ");
//     gets(a);
//     puts("hello sad asd ");
//     puts(a);
//     return 0;
// }

// #include <stdio.h>
// int main() {    
//     char s[]="hello";
//     s[1]='y';
//     s[5]='0';
//     printf("%s\n", s);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char firstName[20], lastName[20];
//     printf("Enter your first name and last name: ");
//     scanf("%s %s", firstName, lastName);
//     printf("Full name: %s %s\n", firstName, lastName);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char a[13];
//     printf("Enter a number: ");
//     scanf("%13[+-123456789]s", a);
//     printf("You entered: %s\n", a);
//     return 0;
// }


// strings functions like strlen, strcpy, strcat, strcmp
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[20], str2[20];
//     printf("Enter first string: ");
//     scanf("%s", str1);
//     printf("Enter second string: ");
//     scanf("%s", str2);
    
//     // strlen
//     printf("Length of first string: %zu\n", strlen(str1));
//     printf("Length of second string: %zu\n", strlen(str2));
    
//     // strcpy
//     char copyStr[20];
//     strcpy(copyStr, str1);
//     printf("Copy of first string: %s\n", copyStr);
    
//     // strcat
    // char concatStr[40];
    // strcpy(concatStr, str1);
    // strcat(concatStr, str2);
    // printf("Concatenated string: %s\n", concatStr);
    
//     // strcmp
//     int cmpResult = strcmp(str1, str2);
//     if (cmpResult == 0) {
//         printf("The strings are equal.\n");
//     } else if (cmpResult < 0) {
//         printf("First string is less than second string.\n");
//     } else {
//         printf("First string is greater than second string.\n");
//     }
//     return 0;
// }


// ADD DIFF MULTIPLY DIVIDE 2 NUMBERS OF ALL 4 FUNCTIONS TYPE 


// #include <stdio.h>
// void add() {
//     int num1, num2;
//     printf("Enter two numbers for addition: ");
//     scanf("%d %d", &num1, &num2);
//     int sum = num1 + num2;
//     printf("Sum of %d and %d is: %d\n", num1, num2, sum);
// }

// void diff() {
//     int num1, num2;
//     printf("Enter two numbers for subtraction: ");
//     scanf("%d %d", &num1, &num2);
//     int difference = num1 - num2;
//     printf("Difference of %d and %d is: %d\n", num1, num2, difference);
// }

// void multiply() {
//     int num1, num2;
//     printf("Enter two numbers for multiplication: ");
//     scanf("%d %d", &num1, &num2);
//     int product = num1 * num2;
//     printf("Product of %d and %d is: %d\n", num1, num2, product);
// }

// void divide() {
//     int num1, num2;
//     printf("Enter two numbers for division: ");
//     scanf("%d %d", &num1, &num2);
//     int division = num1 / num2;
//     printf("Division of %d and %d is: %d\n", num1, num2, division);
// }
// int main() {
//     add();
//     diff();
//     multiply();
//     divide();
//     return 0;
// }

// 2nd type of function
// #include <stdio.h>
// int add() {
//     int num1, num2;
//     printf("Enter two numbers for addition: ");
//     scanf("%d %d", &num1, &num2);
//     return num1 + num2;
// }
// int diff() {
//     int num1, num2;
//     printf("Enter two numbers for subtraction: ");
//     scanf("%d %d", &num1, &num2);
//     return num1 - num2;
// }
// int multiply() {
//     int num1, num2;
//     printf("Enter two numbers for multiplication: ");
//     scanf("%d %d", &num1, &num2);
//     return num1 * num2;
// }
// int divide() {
//     int num1, num2;
//     printf("Enter two numbers for division: ");
//     scanf("%d %d", &num1, &num2);
//     return num1 / num2;
// }
// int main() {
//     int sum = add();
//     int difference = diff();
//     int product = multiply();
//     int division = divide();
    
//     printf("Sum: %d\n", sum);
//     printf("Difference: %d\n", difference);
//     printf("Product: %d\n", product);
//     printf("Division: %d\n", division);
    
//     return 0;
// }

// 3rd type of function
// #include <stdio.h>
// void add(int num1, int num2) {
//     int sum = num1 + num2;
//     printf("Sum of %d and %d is: %d\n", num1, num2, sum);
// }
// void diff(int num1, int num2) {
//     int difference = num1 - num2;
//     printf("Difference of %d and %d is: %d\n", num1, num2, difference);
// }
// void multiply(int num1, int num2) {
//     int product = num1 * num2;
//     printf("Product of %d and %d is: %d\n", num1, num2, product);
// }
// void divide(int num1, int num2) {
//     int division = num1 / num2;
//     printf("Division of %d and %d is: %d\n", num1, num2, division);
// }
// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
    
//     add(num1, num2);
//     diff(num1, num2);
//     multiply(num1, num2);
//     divide(num1, num2);
    
//     return 0;
// }

// 4th type of function
// #include <stdio.h>
// int add(int num1, int num2) {
//     return num1 + num2;
// }
// int diff(int num1, int num2) {
//     return num1 - num2;
// }
// int multiply(int num1, int num2) {
//     return num1 * num2;
// }
// int divide(int num1, int num2) {
//     return num1 / num2;
// }
// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
    
//     int sum = add(num1, num2);
//     int difference = diff(num1, num2);
//     int product = multiply(num1, num2);

//     int division = divide(num1, num2);
    
//     printf("Sum: %d\n", sum);
//     printf("Difference: %d\n", difference);
//     printf("Product: %d\n", product);
//     printf("Division: %d\n", division);
    
//     return 0;
// }

// 1) square of a number
// 2) swap 2 nos
// 3) check even or odd
// 4) decimal to binary

// #include <stdio.h>
// int square() {
//     int num;
//     printf("Enter a number to find its square: ");
//     scanf("%d", &num);
//     return num * num;
// }
// int main() {
//     int num1, num2;
//     int sq = square();
//     printf("Square: %d\n", sq);
// }

// # include <stdio.h>
// int swap(){
//     int num1 ,num2, temp;
//     printf("Enter 1st numbers to swap: ");
//     scanf("%d", &num1);
//     printf("Enter 2nd number to swap: ");
//     scanf("%d", &num2);
//     temp = num1;
//     num1 = num2;
//     num2 = temp;
//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }
// int main() {
//     swap();
//     return 0;
// }

// call by reference swap

// #include <stdio.h>
// void swap(int *num1, int *num2) {
//     int temp;
//     temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }
// int main() {
//     int num1, num2;
//     printf("Enter 1st number to swap: ");
//     scanf("%d", &num1);
//     printf("Enter 2nd number to swap: ");
//     scanf("%d", &num2);
//     swap(&num1, &num2);
//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
//     return 0;
// }


// #include <stdio.h>
// int evenOrOdd() {
//     int num;
//     printf("Enter a number to check if it's even or odd: ");
//     scanf("%d", &num);
//     if (num % 2 == 0) {
//         printf("%d is an even number.\n", num);
//     } else {
//         printf("%d is an odd number.\n", num);
//     }
//     return 0;
// }   
// int main() {
//     evenOrOdd();
//     return 0;
// }

// inline fxn
// #include <stdio.h>
// inline int square(int num) {
//     return num * num;
// }
// int main() {
//     int num;
//     printf("Enter a number to find its square: ");
//     scanf("%d", &num);
//     int sq = square(num);
//     printf("Square: %d\n", sq);
//     return 0;
// }

// factorial using recursion decomposition
// #include <stdio.h>
// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
// int main() {
//     int num;
//     printf("Enter a number to find its factorial: ");
//     scanf("%d", &num);
//     printf("Factorial: %d\n", factorial(num));
//     return 0;
// }

// fibonacci using recursion 
// #include <stdio.h>
// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int n;
//     printf("Enter the number of terms in Fibonacci series: ");
//     scanf("%d", &n);
//     printf("Fibonacci series: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     return 0;
// }

// print reverse of a number using recursion
// #include <stdio.h>
// int reverse(int num) {
//     if (num == 0) {
//         return 0;
//     }
//     printf("%d", num % 10);
//     reverse(num / 10);
// }
// int main() {
//     int num;
//     printf("Enter a number to find its reverse: ");
//     scanf("%d", &num);
//     printf("Reverse: ");
//     reverse(num);
//     printf("\n");
//     return 0;
// }


// Write a program that accepts an integer n (where n >=2) and print all the prime factors of n using recursion.
// #include <stdio.h>
// int primeFactors(int n, int divisor) {
//     if (n < 2) {
//         return 0 ;
//     }
//     if (n % divisor == 0) {
//         printf("%d ", divisor);
//         primeFactors(n / divisor, divisor);
//     } else {
//         primeFactors(n, divisor + 1);
//     }
// }
// int main() {
//     int n;
//     printf("Enter an integer (n >= 2): ");
//     scanf("%d", &n);
//     printf("Prime factors of %d: ", n);
//     primeFactors(n, 2);
//     printf("\n");
//     return 0;
// }

// Write a recursive function evenDigits that accepts an integer parameter n and returns a new integer containing only the even digits from n, in the same order. If n does not contain any even digits, return 0.

// For example, the call of evenDigits(8342116) should return 8426 and the call of evenDigits(35179) should return 0.

// int evenDigits(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     int lastDigit = n % 10;
//     int remainingDigits = evenDigits(n / 10);
    
//     if (lastDigit % 2 == 0) {
//         return remainingDigits * 10 + lastDigit;
//     } else {
//         return remainingDigits;
//     }
// }

// #include <stdio.h>

// int main() {
//     int r, c;

//     // Input rows and columns
//     printf("Enter number of rows: ");
//     scanf("%d", &r);
//     printf("Enter number of columns: ");
//     scanf("%d", &c);

//     int a[r][c], b[r][c];
//     int i, j, equal = 1;

//     // Input first matrix
//     printf("Enter elements of first matrix:\n");
//     for(i = 0; i < r; i++) {
//         for(j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Input second matrix
//     printf("Enter elements of second matrix:\n");
//     for(i = 0; i < r; i++) {
//         for(j = 0; j < c; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }

//     // Compare matrices
//     for(i = 0; i < r; i++) {
//         for(j = 0; j < c; j++) {
//             if(a[i][j] != b[i][j]) {
//                 equal = 0;
//                 break;
//             }
//         }
//         if(equal == 0) break;
//     }

//     // Output result
//     if(equal)
//         printf("Matrices are equal\n");
//     else
//         printf("Matrices are not equal\n");

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int base, exp;
//     double result = 1;

//     printf("Enter base: ");
//     scanf("%d", &base);

//     printf("Enter exponent: ");
//     scanf("%d", &exp);

//     if (exp < 0) {
//         // Negative exponent → print in form
//         printf("neg exp form"); 
//     } else {
//         // Positive exponent → calculate
//         for(int i = 1; i <= exp; i++) {
//             result = result * base;
//         }
//         printf("Result: %.0lf\n", result);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char str[100];
//     int i = 0, count = 0;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     while (str[i] != '\0') {    
//         char ch = str[i];

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             count++;
//         }
//         i++;
//     }
//     printf("Number of vowels: %d\n", count);
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int r, c;

//     printf("Enter rows and columns: ");
//     scanf("%d %d", &r, &c);

//     int a[r][c];

//     // Input matrix
//     printf("Enter matrix elements:\n");
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     // Column sum
//     printf("\nColumn Sum:\n");
//     for(int j = 0; j < c; j++) {
//         int sum = 0;
//         for(int i = 0; i < r; i++) {
//             sum += a[i][j];
//         }
//         printf("Column %d = %d\n", j + 1, sum);
//     }

//     // Column difference
//     printf("\nColumn Difference:\n");
//     for(int j = 0; j < c; j++) {
//         int diff = a[0][j];  // start from first element
//         for(int i = 1; i < r; i++) {
//             diff -= a[i][j];
//         }
//         printf("Column %d = %d\n", j + 1, diff);
//     }

//     return 0;
// }


// convert to lowercase
// #include <stdio.h>  
// int main() {  
//     char str[100];  
//     printf("Enter a string: ");  
//     fgets(str, sizeof(str), stdin);  
//     for(int i = 0; str[i]; i++) {  
//         if(str[i] >= 'A' && str[i] <= 'Z') {  
//             str[i] = str[i] + ('a' - 'A');  
//         }  
//     }
//     printf("Lowercase string: %s\n", str);  
//     return 0;  
// }


// avg marks and grade of a student function
// #include <stdio.h>
// void calculateGrade(int marks) {
//     char grade;
//     if (marks >= 90) {
//         grade = 'A';
//     } else if (marks >= 80) {
//         grade = 'B';
//     } else if (marks >= 70) {
//         grade = 'C';
//     } else if (marks >= 60) {
//         grade = 'D';
//     } else {
//         grade = 'F';
//     }
//     printf("Grade: %c\n", grade);
// }
// int main() {
//     int marks;
//     printf("Enter marks: ");
//     scanf("%d", &marks);
//     calculateGrade(marks);
//     return 0;
// }


// function to cal compound interest
// #include <stdio.h>
// #include <math.h>

// float cal_ci(float p, float r, int t) {
//     float ci = p * pow((1 + r / 100), t) - p;
//     return ci;
// }

// int main() {
//     float p, r, ci;
//     int t;
//     printf("Enter principal amount: ");
//     scanf("%f", &p);
//     printf("Enter rate of interest: ");
//     scanf("%f", &r);
//     printf("Enter time in years: ");
//     scanf("%d", &t);
//     ci = cal_ci(p, r, t);

//     printf("Compound Interest: %.1f\n", ci);
//     return 0;
// }

// #include <stdio.h>
// int cal_total(int price[], int n) {
//     int total = 0;
//     for (int i = 0; i < n; i++) {
//         total += price[i];  
//     }
//     return total;
// }

// float dis(int total) {
//     float discount = 0;
//     if (total > 5000) {
//         discount = total * 0.2;
//     } 
//     else if (total > 2000) {
//         discount = total * 0.1;
//     }

//     return discount;
// }

// float bill(int total, float discount) {
//     return total - discount;
// }

// int main() {
//     int n;
//     printf("Enter number of items: ");
//     scanf("%d", &n);
//     int price[n];
//     for (int i = 0; i < n; i++) {
//         printf("Enter price of item %d: ", i + 1);
//         scanf("%d", &price[i]);
//     }
//     int total = cal_total(price, n);
//     float discount = dis(total);
//     float final = bill(total, discount);
//     printf("\nTotal = %d", total);
//     printf("\nDiscount = %.2f", discount);
//     printf("\nFinal Bill = %.2f", final);

//     return 0;
// }

// library charges fine 2 per 1-5 days, 3 per 6-10 days, 5 per day after 10 days
// #include <stdio.h>  
// int main() {  
//     int days;  
//     float fine;  
//     printf("Enter days :");
//     scanf("%d", &days);
//     if(days <= 5){
//         fine = days * 2;    
//     } else if(days <= 10){
//         fine = (5 * 2) + ((days - 5) * 3);
//     } else {
//         fine = (5 * 2) + (5 * 3) + ((days - 10) * 5);
//     }
//     printf("fine: %.2f", fine);
//     return 0;  
// }

// storage clauses auto, register, static, extern
// name inital value visibility lifetime
// auto garbage local function block 
// extern 0 global entire program
// static 0 local function block end of program
// register garbage local function block entire program



//  add 2 number using pointer
// #include <stdio.h>
// int main() {
//     int num1, num2, sum;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
    
//     sum = num1 + num2;
    
//     printf("Sum: %d\n", sum);

//     return 0;
// }

// Sum of 2 numbers using pointers
// #include <stdio.h>
// int main() {
//     int num1, num2, sum;
//     int *ptr1 = &num1;   // Pointer to num1
//     int *ptr2 = &num2;   // Pointer to num2
    
//     printf("Enter first number: ");
//     scanf("%d", ptr1);  
    
//     printf("Enter second number: ");
//     scanf("%d", ptr2);    
    
//     sum = *ptr1 + *ptr2;
    
//     printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

//     return 0;
// }

// aplhabet using pointer
// #include <stdio.h>
// int main() {
//     char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
//     char *ptr = alphabet;  
    
//     while (*ptr != '\0') { 
//         printf("%c",*ptr);  
//         ptr++;  
//     }
//     printf("\n");    
//     return 0;
// }

// swapping 2 numbers using pointers
// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;  
//     *a = *b;        
//     *b = temp;
    
//     printf("%d, %d", *a,*b);      
// }
// int main() {
//     int a=10;
//     int b=20;
//     printf("%d,%d", a,b);
//     swap(&a, &b);
//     printf("%d,%d", a,b);
//     return 0;
// }


// write a program to find the sum and product of 1 to n number using functions
// #include <stdio.h>
// int sum (int n) {
//     int s = 0;
//     for (int i = 1; i <= n; i++) {
//         s += i;
//     }
//     return s;
// }
// int product (int n) {
//     int p = 1;
//     for (int i = 1; i <= n; i++) {
//         p *= i;
//     }
//     return p;
// }
// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int totalSum = sum(n);
//     int totalProduct = product(n);
//     printf( "%d\n", totalSum);
//     printf( "%d\n", totalProduct);
//     return 0;
// }


// find cgpa of a student of 5 subjects using credits in functions
// #include <stdio.h>

// Function to convert marks to grade points
// float getGradePoint(int marks) {
//     if (marks >= 90) return 10;
//     else if (marks >= 80) return 9;
//     else if (marks >= 70) return 8;
//     else if (marks >= 60) return 7;
//     else if (marks >= 50) return 6;
//     else if (marks >= 40) return 5;
//     else return 0;
// }

// float calculateCGPA(int marks[], int credits[], int n) {
//     float totalPoints = 0;
//     int totalCredits = 0;
//     for (int i = 0; i < n; i++) {
//         float gp = getGradePoint(marks[i]);
//         totalPoints += gp * credits[i];
//         totalCredits += credits[i];
//     }
//     return totalPoints / totalCredits;
// }
// int main() {
//     int marks[5], credits[5];
//     float cgpa;
//     printf("Enter marks of 5 subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &marks[i]);
//     }
//     printf("Enter credits of 5 subjects:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &credits[i]);
//     }
//     cgpa = calculateCGPA(marks, credits, 5);
//     printf("CGPA = %.2f\n", cgpa);
//     return 0;
// }

// write a program to find the sum and product of 1 to n by array using function
// #include <stdio.h>
// int sum(int arr[], int n) {
//     int s = 0;
//     for (int i = 0; i < n; i++) {
//         s += arr[i];
//     }
//     return s;
// }
// int product(int arr[], int n) {
//     int p = 1;
//     for (int i = 0; i < n;  i++) {
//         p *= arr[i];
//     }
//     return p;
// }
// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d numbers:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int totalSum = sum(arr, n);
//     int totalProduct = product(arr, n);
//     printf("Sum: %d\n", totalSum);
//     printf("Product: %d\n", totalProduct);
//     return 0;
// }

//pasing array to function
// #include <stdio.h>
// void p(int x[], int y)
// {
//     printf("Array elements:\n");
//     for (int i = 0; i < y; i++)
//     {
//         printf("%d ", x[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int n;
//     int a[20];
//     printf("Enter n: ");
//     scanf("%d", &n);
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     p(a, n);
//     return 0;
// }


//  sum and product of 1 to n without return 
// #include <stdio.h>
// void sumProduct(int n)
// {
//     int i, sum = 0, product = 1;
//     for(i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//         product = product * i;
//     }
//     printf("Sum = %d\n", sum);
//     printf("Product = %d\n", product);
// }
// int main()
// {
//     int n;
//     printf("Enter value of n: ");
//     scanf("%d", &n);
//     sumProduct(n);
//     return 0;
// }


// sum and product of 1 to n with return
// #include <stdio.h>
// int findSum(int n)
// {
//     int i, sum = 0;
//     for(i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }
// int findProduct(int n)
// {
//     int i, product = 1;
//     for(i = 1; i <= n; i++)
//     {
//         product = product * i;
//     }
//     return product;
// }
// int main()
// {
//     int n, s, p;
//     printf("Enter value of n: ");
//     scanf("%d", &n);
//     s = findSum(n);
//     p = findProduct(n);
//     printf("Sum = %d\n", s);
//     printf("Product = %d\n", p);
//     return 0;
// }


// #include <stdio.h>
// int sum(int a,int b);
// int prod(int a,int b);
// int avg(int a,int b);

// int main(){
//     int x=2,y=2;
//     int s,p,t;
//     s=sum(x,y);
//     p=prod(x,y);
//     t=avg(x,y);
//     printf("%d,%d,%d",s,p,t );\
//     return 0;
// }
// int sum(int a,int b){
//     return a+b;
// }
// int prod(int a,int b){
//     return a*b;
// }
// int avg(int a,int b){
//     return (a+b)/2;
// }



// #include <stdio.h>
// int sum(int a,int b);
// int prod(int a,int b);
// int main(){
//     int x = 2, y = 2;
//     int s, p;
//     s = sum(x, y);     // function call
//     p = prod(x, y);    // function call
//     printf("%d, %d", s, p);
//     return 0;
// }
// int sum(int a,int b){
//     return a + b;
// }
// int prod(int a,int b){
//     return a * b;
// }

// #include <stdio.h>
// int main() {
//     char a[27];   // 26 letters + 1 for '\0'
//     char *p = a;
//     for (int i = 0; i < 26; i++) {
//         *p = 'A' + i;
//         p++;
//     }
//     a[26] = '\0';
//     printf("%s", a);
//     return 0;
// }


//  sum of a,b using pointer 
// #include <stdio.h>
// int main() {
//     int a, b, sum;
//     int *ptr1 = &a;   // Pointer to a
//     int *ptr2 = &b;   // Pointer to b
    
//     printf("Enter first number: ");
//     scanf("%d", ptr1);  
    
//     printf("Enter second number: ");
//     scanf("%d", ptr2);    
    
//     sum = *ptr1 + *ptr2;
    
//     printf("Sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 10;
//     void *ptr = &a;  // Pointer to a
//     printf("Value of a: %d\n", *(int*)ptr);  // Dereferencing pointer to get value of a
//     char b = 'A';
//     void *p1 = &b;  
//     printf("Value of b: %c\n", *(char*)p1);  // Dereferencing pointer to get value of b
    
//     return 0;
// }


// print elements of an array using pointer in reverse order
// #include <stdio.h>
// int main(){
//     int *n;
//     int arr[6] = {1, 2, 3, 4, 5,6};
//     int *p = arr + 5;  // Point to the last element of the array
//     for (int i=0;i<6;i++){
//         printf("%d ",*p);
//         p--;
//     }
//     return 0;
// }

// using pointer with array name 
// #include <stdio.h>
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int *ptr = arr+4;
    
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", *ptr);  
//                 ptr--; 
//     }
//     printf("\n");   
//     return 0;
// }


// copy a,b using pointer
// #include <stdio.h>
// int main() {
//     int a, b;
//     int *ptr1 = &a;   
//     int *ptr2 = &b;   
//     printf("Enter value for a: ");
//     scanf("%d", ptr1);
//     printf("Enter value for b: ");
//     scanf("%d", ptr2);
//     *ptr2 = *ptr1;  
//     printf("Value of a: %d\n", *ptr1);
//     printf("Value of b: %d\n", *ptr2);
//     return 0;
// }


// passing array to function by single element and find avg
// #include <stdio.h>
// float avg(int arr[], int n) {
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
//     return (float)sum / n;
// }
// int main() {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     float average = avg(arr, n);
//     printf("Average: %.2f\n", average);
//     return 0;
// }


// #include <stdio.h>
// void avg(int a[]);
// int main(){
//         int a[6] = {1,2,3,4,5,6};
//         avg(a);
// }
// void avg(int a[]){
//     int sum = 0;
//     for (int i=0;i<6;i++){
//         sum += a[i];
//     }
//     printf("avg: %.2f", (float)sum/6);
// }



// #include <stdio.h>
// void avg(int a[]);
// int main(){
//         int a[6] = {1,2,3,4,5,6};
//         avg(a);
// }
// void avg(int *p){
//     int sum = 0;
//     for (int i=0;i<6;i++){
//         sum += *(p + i);
//     }
//     printf("avg: %.2f", (float)sum/6);
// }


// #include <stdio.h>
// int main() {
//     int arr[5], i, j, temp;
//     int *p = arr;   // pointer to array
//     printf("Enter 5 elements:\n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", (p + i));   // input using pointer
//     }
//     // sorting (ascending)
//     for(i = 0; i < 4; i++) {
//         for(j = i + 1; j < 5; j++) {
//             if(*(p + i) > *(p + j)) {
//                 temp = *(p + i);
//                 *(p + i) = *(p + j);
//                 *(p + j) = temp;
//             }
//         }
//     }
//     printf("Sorted array:\n");
//     for(i = 0; i < 5; i++) {
//         printf("%d ", *(p + i));   // print using pointer
//     }
//     return 0;
// }

// #include<stdio.h>
// int *p(){
// 	static int x=10;
// 	return &x;
// }
// int main(){
// 	int *x=p();
// 	printf("%d",*x);

//     return 0;
// }


// #include<stdio.h>
// int *p(int n){
// 	static int a[20];
// 	int s=0;
// 	for(int i=0;i<n;i++){
// 		a[i]=s;
// 		s=s+2;

// 	}
// 	return a;
// }
// int main(){
// 	int n,*a;
// 	scanf("%d",&n);
// 	a=p(n);
// 	for(int i=0;i<n;i++){
// 		printf("%d",*(a+i));
// 	}
// }

// #include<stdio.h>
// int *p(int n){
// 	static int a[20];
// 	for(int i=0;i<n;i++){
// 		a[i]=i*4;
// 	}
// 	return a;
// }
// int main(){
// 	int n,*a;
// 	scanf("%d",&n);
// 	a=p(n);
// 	for(int i=0;i<n;i++){
// 		printf("%d",*(a+i));
// 	}
// }

// #include<stdio.h>
// int *p(){
// 	int x=10;
// 	return &x;
// }
// int main(){
// 	int *x=p();
// 	printf("%d",*x);

//     return 0;
// }

// #include<stdio.h>
// int *p(int n){
// 	static int a[20];
// 	for(int i=0;i<n;i++){
// 		a[i]=i*4;
// 	}
// 	return a;
// }
// int main(){
// 	int n,*a;
// 	scanf("%d",&n);
// 	a=p(n);
// 	for(int i=0;i<n;i++){
// 		printf("%d",*(a+i));
// 	}
// }


// # include <stdio.h>

// int main(){
// float price[] = {100.0, 200.0, 300.0};
// //printf("enter 3 prices : ");

// // scanf("%f", &price[0]);
// // scanf("%f", &price[1]);
// // scanf("%f", &price[2]);

// printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
// printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
// printf("total price 3 : %f\n", price [2]+(0.18*price[2]));
// return 0;
// }





// // return max element of an array
// #include <stdio.h>
// int main(){
// 	int arr[5]={10,20,5,15,25};
// 	int max=arr[0];
// 	for(int i=1;i<5;i++){
// 		if(arr[i]>max){
// 			max=arr[i];
// 		}
// 	}
// 	printf("Max element: %d", max);
// 	return 0;
// }


// //  swap elements of 2 array of same order
// #include <stdio.h>
// int main() {
// 	int arr1[]={1,2,3,4,5};
// 	int arr2[]={6,7,8,9,10};
// 	int temp;
// 	for (int i=0;i<5;i++){
// 		temp=arr1[i];
// 		arr1[i]=arr2[i];
// 		arr2[i]=temp;
// 	}
// 	printf("Array 1: ");
// 	for (int i=0;i<5;i++){
// 		printf("%d ", arr1[i]);
// 	}
// 	printf("\nArray 2: ");
// 	for (int i=0;i<5;i++){
// 		printf("%d ", arr2[i]);
// 	}
// 	return 0;
// }

// // rotate an array to right position by n positions
// #include <stdio.h>
// void rotateRight(int arr[], int n, int d) {
// 	int temp[d];
// 	for (int i = 0; i < d; i++) {
// 		temp[i] = arr[n - d + i];  
// 	}
// 	for (int i = n - 1; i >= d; i--) {
// 		arr[i] = arr[i - d];  
// 	}
// 	for (int i = 0; i < d; i++) {
// 		arr[i] = temp[i];  
// 	}
// }
// int main() {
// 	int arr[] = {1, 2, 3, 4, 5, 6};
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int d =3;  
// 	rotateRight(arr, n, d);
// 	printf("Array after right rotation: ");
// 	for (int i = 0; i < n; i++) {
// 		printf("%d ", arr[i]);

// 	}
// 	printf("n = %d",n);
// 	return 0;
// }

// // sum of elements of an array using pointer
// #include <stdio.h>
// int main() {
// 	int arr[5] = {1, 2, 3, 4, 5};
// 	int *ptr = arr;  
// 	int sum = 0;
// 	for (int i = 0; i < 5; i++) {
// 		sum += *ptr;  
// 		ptr++;  
// 	}
// 	printf("Sum of array elements: %d\n", sum);
// 	return 0;
// }


// #include <stdio.h>
// void printPattern(int *arr, int n) {
//     int start = 0;
//     int end = n - 1;

//     while(start <= end) {
//         if(start == end) {
//             printf("%d ", *(arr + start));
//         } else {
//             printf("%d %d ", *(arr + start), *(arr + end));
//         }
//         start++;
//         end--;
//     }
// }
// int main() {
//     int n, i;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) {
//         scanf("%d", (arr + i));  
//     }
//     printf("Output pattern:\n");
//     printPattern(arr, n); 
//     return 0;
// }


// use pointer to print elements of an array and address of elements of an array
// #include <stdio.h>

// int main() {
//     int n, m, p;

//     printf("Enter number of int elements: ");
//     scanf("%d", &n);

//     printf("Enter number of float elements: ");
//     scanf("%d", &m);

//     printf("Enter number of char elements: ");
//     scanf("%d", &p);

//     int arr[n];
//     float arr2[m];
//     char arr3[p];

//     printf("Enter int elements:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);

//     }
//     printf("Enter float elements:\n");
//     for (int i = 0; i < m; i++) {
//         scanf("%f", &arr2[i]);
//     }
//     printf("Enter char elements:\n");
//     for (int i = 0; i < p; i++) {
//         scanf(" %c", &arr3[i]);
//     }
//     printf("\nInt array elements and addresses:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element: %d, Address: %p\n", *(arr + i), (void*)(arr + i));
//     }
//     printf("\nFloat array elements and addresses:\n");
//     for (int i = 0; i < m; i++) {
//         printf("Element: %f, Address: %p\n", *(arr2 + i), (void*)(arr2 + i));
//     }
//     printf("\nChar array elements and addresses:\n");
//     for (int i = 0; i < p; i++) {
//         printf("Element: %c, Address: %p\n", *(arr3 + i), (void*)(arr3 + i));
//     }
//     return 0;
// }


// sum of elements of an array using function pointer
// #include <stdio.h>
// int sum(int arr[], int n) {
// 	int s = 0;
// 	for (int i = 0; i < n; i++) {
// 		s += arr[i];
// 	}
// 	return s;
// }
// int main() {
// 	int n;
// 	printf("Enter number of elements: ");
// 	scanf("%d", &n);
// 	int arr[n];
// 	printf("Enter %d elements:\n", n);
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d", &arr[i]);
// 	}
// 	int (*p)(int[], int) = sum;  
// 	int c = p(arr, n);  
// 	printf("Sum of array elements: %d\n", c);
// 	return 0;
// }


// // function that updates interest of bank balance using pointer
// #include <stdio.h>   
// void updateInterest(float *balance) {
//     *balance += (*balance * 5.0 / 100);  
// }
// int main() {
//     float balance;
//     printf("Enter bank balance: ");
//     scanf("%f", &balance);
//     updateInterest(&balance);  
//     printf("Updated bank balance with interest: %.2f\n", balance);
//     return 0;
// }

// swap 2 number 
// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int x, y;
//     printf("Enter first number: ");
//     scanf("%d", &x);
//     printf("Enter second number: ");
//     scanf("%d", &y);
//     swap(&x, &y);
//     printf("After swapping: x = %d, y = %d\n", x, y);
//     return 0;
// }


//  find top marks in array using pointer 
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter no of students: " );
//     scanf("%d", &n);
//     int marks[n];
//     printf("Enter marks of %d \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &marks[i]);
//     }
//     int *ptr = marks;
//     int max = *ptr;
//     for (int i = 1; i < n; i++) {
//         ptr++;
//         if (*ptr > max) {
//             max = *ptr;
//         }
//     }
//     printf("Top marks: %d\n", max);
//     return 0;
// }


//  use pointer to find the sum and product of an array
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int *ptr = arr;  
//     int sum = 0;
//     int product = 1;
//     for (int i = 0; i < n; i++) {
//         sum += *ptr;  
//         product *= *ptr;  
//         ptr++;  
//     }
//     printf("Sum of array elements: %d\n", sum);
//     printf("Product of array elements: %d\n", product);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// malloc- memory allocation for a single variable or array of variables
// calloc- memory allocation for an array of variables and initializes them to zero
// realloc- changes the size of previously allocated memory block
// free- deallocates previously allocated memory block

// #include <stdio.h>
// #include <stdlib.h>
// // malloc example
// int main() {
//     int *p;
//     p=(int *)malloc(4);
//     *p=20;
//     if (p == NULL) {
//         printf("Memory allocation failed\n");  
//     }
//     else {
//         printf("%d\n", *p);  
//     }
// }

// n numbers input and same size of memory allocation using malloc then print it 
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n;
//     printf("number of elements");
//     scanf("%d", &n);
//     int *a;
//     a = (int *)malloc(n * sizeof(int));  
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", a+i);
//     }
//     printf("You entered:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d", *(a+i));
//     }
//     return 0;
// }   
 


//  using calloc
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n;
//     printf("number of elements");
//     scanf("%d", &n);
//     int *a;
//     a = (int *)calloc(n ,sizeof(int));  
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", a+i);
//     }
//     printf("You entered:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d", *(a+i));
//     }
//     return 0;
// }   


// print sum and product of n numbers using calloc and malloc 
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("no of elements");
//     scanf("%d",&n);
//     int *p;
//     int sum=0;
//     int prod=1;
//     p=(int *)malloc(n *sizeof(int));
//     printf("enter elements ");
//     for (int i=0;i<n;i++){
//         scanf("%d",(p+i));
//         sum+=*(p+i);
//         prod*=*(p+i);
//     }
//     printf(" sum %d ",sum);
//     printf(" product %d ",prod);
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("no of elements");
//     scanf("%d",&n);
//     int *p;
//     int sum=0;
//     int prod=1;
//     p=(int *)calloc(n , sizeof(int));
//     printf("enter elements ");
//     for (int i=0;i<n;i++){
//         scanf("%d",(p+i));
//         sum+=*(p+i);
//         prod*=*(p+i);
//     }
//     printf(" sum %d ",sum);
//     printf(" product %d ",prod);
// }

//  using functions
// #include <stdio.h>
// #include <stdlib.h>
// int sumof (int *p, int n) {
//     int s = 0;
//     for (int i = 0; i < n; i++) {
//         s += *(p + i);
//     }
//     return s;
// }
// int product(int *p, int n) {
//     int prod = 1;
//     for (int i = 0; i < n; i++) {
//         prod *= *(p + i);
//     }
//     return prod;
// }

// int main(){
//     int n;
//     printf("no of elements");
//     scanf("%d",&n);
//     int *p;
//     int sum=0;
//     int prod=1;
//     p=(int *)calloc(n , sizeof(int));
//     printf("enter elements ");
//     for (int i=0;i<n;i++){
//         scanf("%d",(p+i));
//     }
//     sum = sumof(p, n);
//     prod = product(p, n);
//     printf(" sum %d ",sum);
//     printf(" product %d ",prod);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int sumof (int *p, int n) {
//     int s = 0;
//     for (int i = 0; i < n; i++) {
//         s += *(p + i);
//     }
//     return s;
// }
// int product(int *p, int n) {
//     int prod = 1;
//     for (int i = 0; i < n; i++) {
//         prod *= *(p + i);
//     }
//     return prod;
// }

// int main(){
//     int n;
//     printf("no of elements");
//     scanf("%d",&n);
//     int *p;
//     int sum=0;
//     int prod=1;
//     p=(int *)malloc(n * sizeof(int));
//     printf("enter elements ");
//     for (int i=0;i<n;i++){
//         scanf("%d",(p+i));
//     }
//     sum = sumof(p, n);
//     prod = product(p, n);
//     printf(" sum %d ",sum);
//     printf(" product %d ",prod);
//     return 0;
// }

// enter a array and double it value 
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("no of elements");
//     scanf("%d",&n);
//     int *p;
//     p=(int *)malloc(n * sizeof(int));
//     printf("enter elements " );
//     for (int i=0;i<n;i++){
//         scanf("%d",(p+i));
//         *(p+i)*=2;
//     }
//     printf("You entered:\n");
//     for (int i=0;i<n;i++){
//         printf("%d",*(p+i));
//     }
// }

// input n numbers and make a array of n numbers and make another array which will consist of even numbers of elements from first array and print it in reverse order using pointer
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int *p;
//     p = (int *)malloc(n * sizeof(int));
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", p+i);
//     }
//     int even = 0;
//     for (int i = 0; i < n; i++) {
//         if (p[i] % 2 == 0) {
//             even++;
//         }
//     }
//     int *p2 = (int *)calloc(even , sizeof(int));
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (p[i] % 2 == 0) {
//             p2[j++] = p[i];
//         }
//     }
//     printf("reverse order:\n");
//     for (int i = even - 1; i >= 0; i--) {
//         printf("%d ", p2[i]);
//     }
//     return 0;
// }

//  input 2 matrices and find sum of 2 matrices using memory allocation
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int r,c;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &r, &c);
//     int **mat1 = (int **)malloc(r * sizeof(int *));
//     int **mat2 = (int **)malloc(r * sizeof(int *));
//     int **sum = (int **)malloc(r * sizeof(int *));
//     for (int i = 0; i < r; i++) {
//         mat1[i] = (int *)malloc(c * sizeof(int));
//         mat2[i] = (int *)malloc(c * sizeof(int));
//         sum[i] = (int *)malloc(c * sizeof(int));
//     }
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             sum[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
//     printf("Sum of the two matrices:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// realloc - reallocate memory for an array of integers and print the new size of the array
// free() - deallocate memory for an array of integers and print a message confirming the deallocation

// input marks of n students and find avg ,highest marks also input no of students incresed in next week and find new avg and highest marks using realloc
// #include <stdio.h>
// #include <stdlib.h>  
// int main() {
//     int n;
//     printf("number of students: ");
//     scanf("%d", &n);
//     int *marks = (int *)malloc(n * sizeof(int));
//     printf("marks %d \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &marks[i]);
//     }
//     int sum = 0;
//     int max = marks[0];
//     for (int i = 0; i < n; i++) {
//         sum += marks[i];
//         if (marks[i] > max) {
//             max = marks[i];
//         }
//     }
//     printf("Avg  %.2f\n", (float)sum / n);
//     printf("Highest %d\n", max);
    
//     int newStudents;
//     printf("number of new students: ");
//     scanf("%d", &newStudents);
    
//     marks = (int *)realloc(marks, (n + newStudents) * sizeof(int));
    
//     printf("marks %d \n", newStudents);
//     for (int i = n; i < n + newStudents; i++) {
//         scanf("%d", &marks[i]);
//         sum += marks[i];
//         if (marks[i] > max) {
//             max = marks[i];
//         }
//     }
//         printf("New avg %.2f\n", (float)sum / (n + newStudents));
//     printf("New highest %d\n", max);  
//     return 0;
// }


// n cart items store productid quantity price for each item and calculate total bill using malloc
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     printf("Enter number of cart items: ");
//     scanf("%d", &n);

//     int *productId = (int *)malloc(n * sizeof(int));
//     int *quantity = (int *)malloc(n * sizeof(int));
//     float *price = (float *)malloc(n * sizeof(float));
    
//     float Bill = 0.0;

//     for (int i = 0; i < n; i++) {

//         printf("Enter product ID: ");
//         scanf("%d", &productId[i]);

//         printf("Enter quantity: ");
//         scanf("%d", &quantity[i]);

//         printf("Enter price: ");
//         scanf("%f", &price[i]);

//         Bill += quantity[i] * price[i];
//     }
//     printf("\nTotal Bill: %.2f\n", Bill);
//     return 0;
// }


// allocate memory for a string using malloc and resize it using realloc and count vowels and words
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     char *str = (char *)malloc(30 * sizeof(char));
//     int n;
//     printf("Enter size of string: ");
//     scanf("%d", &n);
//     str = (char *)realloc(str, n * sizeof(char));
//     printf("Enter a string: ");
//     scanf("%s", str);
    
//     int vowelCount = 0;
//     int wordCount = 1; 
//     for (int i = 0; str[i] != '\0'; i++) {
//         char ch = str[i];
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//             vowelCount++;
//         }
//         if (ch == ' ') {
//             wordCount++;
//         }
//     }
    
//     printf("Number of vowels: %d\n", vowelCount);
//     printf("Number of words: %d\n", wordCount);
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int *storereadings(int n){
//     int *readings = (int *)malloc(n * sizeof(int));
//     printf("Enter %d readings:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &readings[i]);
//     }
//     return readings;
// }
// int findMax(int *readings,int n)
// {
//     int max = readings[0];
//     for (int i = 1; i < n; i++) {
//         if (readings[i] > max) {
//             max = readings[i];
//         }
//     }
//     return max;
// }
// int main() {
//     int n;
//     printf("Enter number of readings: ");
//     scanf("%d", &n);
//     int *readings = storereadings(n);
//     int max = findMax(readings, n);
//     printf("Maximum reading: %d\n", max);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// int *log(int n){
//     int *arr = (int *)malloc(n * sizeof(int));
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     return arr;
// }
// int *find(int *arr, int n){
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     return arr;
// }
// int main() {
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int *arr = log(n);
//     arr = find(arr, n);
//     printf("Sorted array in ascending order:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     struct complex{
//         int real;
//         int img;
//     };
//         struct complex a,b,c;
//         printf("enter real and img part of a");
//         scanf("%d %d",&a.real,&a.img);
//         printf("enter real and img part of b");
//         scanf("%d %d",&b.real,&b.img);
//         c.real=a.real+b.real;
//         c.img=a.img+b.img;
//         printf("sum of complex number is %d + %di",c.real,c.img);
//         return 0;
//     }


// #include <stdio.h>
// struct student {
//     char name[50];
//     int rollno;
//     int marks;
// };
// int main() {
//     struct student s[3];
//     printf("Enter name, roll number and marks of student 1:\n");
//     scanf("%s %d %d", s[0].name, &s[0].rollno, &s[0].marks);
//     printf("Enter name, roll number and marks of student 2:\n");
//     scanf("%s %d %d", s[1].name, &s[1].rollno, &s[1].marks);
//     printf("Enter name, roll number and marks of student 3:\n");
//     scanf("%s %d %d", s[2].name, &s[2].rollno, &s[2].marks);
//     printf("\nDetails of students:\n");
//     printf("Name: %s, Roll No: %d, Marks: %d\n", s[0].name, s[0].rollno, s[0].marks);
//     printf("Name: %s, Roll No: %d, Marks: %d\n", s[1].name, s[1].rollno, s[1].marks);
//     printf("Name: %s, Roll No: %d, Marks: %d\n", s[2].name, s[2].rollno, s[2].marks);
//     return 0;
// }


// details of 3 students using structure and print 
// #include <stdio.h>
// struct student {
//     char name[50];
//     int rollno;
//     int marks;
// };
// int main() {
//     struct student s[50];
//      {

//         printf("Enter name, roll number and marks of student %d:\n", i + 1);
//         scanf("%s %d %d", s[i].name, &s[i].rollno, &s[i].marks);
//     }
//     printf("\nDetails of students:\n");
//     for (int i = 0; i < 3; i++) {
//         printf("Name: %s, Roll No: %d, Marks: %d\n", s[i].name, s[i].rollno, s[i].marks);
//     }
//     return 0;
// }

// details of n students using structure and print
// #include <stdio.h>
// struct student {
//     char name[50];
//     int rollno;
//     int marks;
// };
// int main() {
//     int n;
//     printf("Enter number of students: ");
//     scanf("%d", &n);
//     struct student s[n];
//     for (int i = 0; i < n; i++) {
//         printf("Enter name, roll number and marks of student %d:\n", i + 1);
//         scanf("%s %d %d", s[i].name, &s[i].rollno, &s[i].marks);
//     }
//     for (int i = 0; i < n; i++) {
//         printf("Name: %s, Roll No: %d, Marks: %d\n", s[i].name, s[i].rollno, s[i].marks);
//     }
//     return 0;
// }


// add complex numbers using structure and functions without return
// #include <stdio.h>
// typedef struct {
//     int real;
//     int img;
// } complex;
// void add(complex a, complex b, complex *c) {
//     c->real = a.real + b.real;
//     c->img = a.img + b.img;
// }
// int main() {
//     complex a, b, c;
//     printf("Enter real and imaginary part of first complex number:\n");
//     scanf("%d %d", &a.real, &a.img);
//     printf("Enter real and imaginary part of second complex number:\n");
//     scanf("%d %d", &b.real, &b.img);
//     add(a, b, &c);
//     printf("Sum of complex numbers: %d + %di\n", c.real, c.img);
//     return 0;
// }


// swap two complex numbers using structure and functions
// #include <stdio.h>
// struct complex {
//     int real;
//     int img;
// };
// void swap(struct complex *a, struct complex *b) {
//     struct complex temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     struct complex a, b;
//     printf("Enter real and imaginary part of first complex number:\n");
//     scanf("%d %d", &a.real, &a.img);
//     printf("Enter real and imaginary part of second complex number:\n");
//     scanf("%d %d", &b.real, &b.img);
//     swap(&a, &b);
//     printf("After swapping:\n");
//     printf(" %d + %di\n", a.real, a.img);
//     printf(" %d + %di\n", b.real, b.img);
//     return 0;
// }


//  create a strut for n no of time in which user will enter hrs ,min ,sec and add&sub the time of 2 different time which users will enter 
// #include <stdio.h>

// struct time {
//     int h, m, s;
// };

// // Function to add time
// void add(struct time t1, struct time t2, struct time *sum) {
//     sum->s = t1.s + t2.s;
//     sum->m = t1.m + t2.m;
//     sum->h = t1.h + t2.h;

//     if(sum->s >= 60) {
//         sum->s -= 60;
//         sum->m++;
//     }
//     if(sum->m >= 60) {
//         sum->m -= 60;
//         sum->h++;
//     }
//     if(sum->h >= 24) {
//         sum->h -= 24;
//     }
// }

// // Function to subtract time
// void subtract(struct time t1, struct time t2, struct time *diff) {
//     int sec1 = t1.h*3600 + t1.m*60 + t1.s;
//     int sec2 = t2.h*3600 + t2.m*60 + t2.s;

//     int d = sec1 - sec2;
//     if(d < 0) d += 24*3600;

//     diff->h = d / 3600;
//     diff->m = (d % 3600) / 60;
//     diff->s = d % 60;
// }

// int main() {
//     struct time t[10], sum, diff;
//     int n, i, a, b;

//     printf("Enter number of times: ");
//     scanf("%d", &n);

//     // Input
//     for(i = 0; i < n; i++) {
//         printf("Enter time %d (h m s): ", i + 1);
//         scanf("%d %d %d", &t[i].h, &t[i].m, &t[i].s);
//     }

//     printf("\nTimes:\n");
//     for(i = 0; i < n; i++) {
//         printf("%d -> %02d:%02d:%02d\n", i + 1, t[i].h, t[i].m, t[i].s);
//     }

//     printf("\nEnter two indices: ");
//     scanf("%d %d", &a, &b);

//     add(t[a], t[b], &sum);
//     subtract(t[a], t[b], &diff);

//     printf("\nSum = %02d:%02d:%02d\n", sum.h, sum.m, sum.s);
//     printf("Difference = %02d:%02d:%02d\n", diff.h, diff.m, diff.s);

//     return 0;
// }


// pointer to struct / struct to pointer 
// #include <stdio.h>
// struct g5 {
//     char name[50];
//     int rollno;
// };

// int main(){
//     struct g5 a;
//     struct g5 *p=&a;
// //     printf("Enter name and roll number: ");
// //     scanf("%s %d", (*p).name, &(*p).rollno);
// //     printf("Name: %s, Roll No: %d\n", (*p).name, (*p).rollno);
// //     return 0;   
// // }

//     printf("Enter name and roll number: " );
//     scanf("%s %d", p->name, &p->rollno);
//     printf("Name: %s, Roll No: %d\n", p->name, p->rollno);
//     return 0;   
// }


//  union

// #include <stdio.h>
// #include <string.h>

// union data {
//     char name[50];
//     int roll;
//     float marks;
// };

// int main() {
//     union data d;

//     strcpy(d.name, "asd");
//     printf("Name: %s\n", d.name);
//     printf("Enter roll: ");
//     scanf("%d", &d.roll);
//     printf("Roll: %d\n", d.roll);
//     printf("Enter marks: ");
//     scanf("%f", &d.marks);
//     printf("Marks: %.2f\n", d.marks);
//     return 0;
// }

// // // create enumerations for days and print in numbers // use switch case 
// // #include <stdio.h>
// // enum days { sunday, monday, tuesday, wednesday, thursday, friday, saturday };
// // int main() {
// //     // printf("%d",sunday);
// //     // printf("%d",monday);
// //     // printf("%d",tuesday);
// //     // printf("%d",wednesday);
// //     // printf("%d",friday);
// //     // printf("%d",thursday);
// //     // printf("%d",saturday);
// //     //     return 0;
// //     for (int i = sunday; i <= saturday; i++) {
// //         printf("%d ", i);
// //     }
// // }

// #include <stdio.h>
// enum days { sunday, monday, tuesday, wednesday, thursday, friday, saturday};
// int main(){
//     char d;
//     scanf("%s", &d);
//     switch(d) {
//         case sunday:
//             printf("Sunday\n");
//             break;
//         case monday:
//             printf("Monday\n");
//             break;
//         case tuesday:
//             printf("Tuesday\n");
//             break;
//         case wednesday:
//             printf("Wednesday\n");
//             break;
//         case thursday:
//             printf("Thursday\n");
//             break;
//         case friday:
//             printf("Friday\n");
//             break;
//         case saturday:
//             printf("Saturday\n");
//             break;
//         default:
//             printf("Invalid day\n");
//     }
//     return 0;
// }

// file handling
//create a file and write some text in it and read the text from the file and print it on console
// #include <stdio.h>

// int main() {
//     FILE *p;
//     char str[100];
//     p = fopen("c.txt", "w");
    
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     fprintf(p, "%s", str);
//     fclose(p);
    
//     p = fopen("c.txt", "r");
    
//     printf("content\n");
//     while (fgets(str, sizeof(str), p)) {
//         printf("%s", str);
//     }
    
//     fclose(p);
// }

//  print character by character from a file
// #include <stdio.h>

// int main() {
//     FILE *p;
//     char ch;
//     p = fopen("c.txt", "r");
 
//     printf("\n");
//     while ((ch = fgetc(p)) != EOF) {
//         printf("%c", ch);
//     }
 
//     fclose(p);
//     return 0;
// }


// 
// #include <stdio.h>
// int main() {
//     FILE *p;
//     char ch;
//     p = fopen("c.txt", "r");
//     int fputc(char ch, FILE *p);
//     printf("\n");
//     while ((ch = fputc('t', p)) != EOF) {
//         printf("%c", ch);
//     }
 
//     fclose(p);
//     return 0;
// }


// use fputc to write a character in a file
// #include <stdio.h>
// int main() {
//     FILE *p;
//     p = fopen("c.text", "w");
//     fputc('t', p);
//     fclose(p);
//     return 0;
// }

// fseek seek_set

// #include <stdio.h>
// int main() {
//     FILE *p;
//     int ch;
//     p = fopen("c.text", "r");

//     fseek(p, 4, SEEK_SET);  

//     while ((ch = fgetc(p)) != EOF) {
//         printf("%c", ch);
//     }

//     fclose(p);
//     return 0;
// }

// fseek seek_cur

// #include <stdio.h>   
// int main() {
//     FILE *p;
//     p = fopen("c.text", "r");
//     fseek(p, 21, SEEK_CUR);
//     char ch;
//     while ((ch = fgetc(p)) != EOF) {
//         printf("%c", ch);
//     }
//     fclose(p);
//     return 0;
// }

//  fseek seek_end
// #include <stdio.h>
// int main() {
//     FILE *p;
//     p = fopen("c.text", "r");
//     fseek(p,-10, SEEK_END);
//     char ch;
//     while ((ch = fgetc(p)) != EOF) {
//         printf("%c", ch);
//     }
//     fclose(p);
//     return 0;
// }



//  size_t fread

// #include <stdio.h>
// int main() {
//     FILE *p = fopen("a.text","r");
//     int a[5];
//     fread(a, sizeof(int), 5, p);
//     for (int i = 0; i < 5; i++) {
//         scanf("%d ", &a[i]);
//     }
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", a[i]);
//     }
//     fclose(p);
//     return 0;
// }



// find min of 2 no using preprosser 
// #include <stdio.h>
// #define min(a,b) ((a)<(b)?(a):(b))
// int main() {
//     int x, y;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     printf("Minimum: %d\n", min(x, y));
// }


// #include <stdio.h>
// int main(int argc,char *argv[]){
// 	int i;
// 	printf("no of arguments: %d",argc);
// 	for(int i=0;i<argc;i++){
// 		printf("%s",argv[i]);
// 	}
// }




// struc student name marks of 3 sub and percentage using arry of structure and suing functions to calculate percentage and print it

// #include <stdio.h>
// struct Student {
//     char name[50];
//     int eng, hin, math;
//     float percentage;
// };
// float calPer(struct Student s) {
//     return (s.eng + s.hin + s.math) / 3.0;
// }

// int main() {
//     struct Student s[3];
//     for(int i = 0; i < 3; i++) {
//         printf("Name of student %d: ", i+1);
//         scanf("%s", s[i].name);
//         printf("Enter marks in English, Hindi, Maths: ");
//        scanf("%d %d %d", &s[i].eng, &s[i].hin, &s[i].math);
//         s[i].percentage = calPer(s[i]);
//     }
//     struct Student temp;
//     for(int i = 0; i < 3; i++) {
//         for(int j = i+1; j < 3; j++) {
//             if(s[i].percentage < s[j].percentage) {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     printf("\nRanks");
//     for(int i = 0; i < 3; i++) {
//         printf("Rank %d: %s (%.2f%%)\n", i+1, s[i].name, s[i].percentage);
//     }
//     return 0;
// }


// cricket player name ,odi ,runs and find total runs using pointers of structure 

// #include <stdio.h>

// struct Cricketer {
//     char name[50];
//     int odis;
//     int runs[100];
//     int total;
// };

// void calculateTotal(struct Cricketer *c) {
//     (*c).total = 0;
//     for(int i = 0; i < (*c).odis; i++) {
//         (*c).total = (*c).total + (*c).runs[i];
//     }
// }
// int main() {
//     struct Cricketer c;
//     printf("Enter cricketer name: ");
//     scanf(" %s", c.name);
//     printf("Enter number of ODIs played: ");
//     scanf("%d", &c.odis);
//     printf("Enter runs in each ODI:\n");
//     for(int i = 0; i < c.odis; i++) {
//         scanf("%d", &c.runs[i]);
//     }


//     calculateTotal(&c);

//     printf("\n--- Cricketer Details ---\n");
//     printf("Name: %s\n", c.name);
//     printf("Total Runs: %d\n", c.total);

//     return 0;
// // 


// Problem 20: Searching Employee Records Using Array of Structures
// Title: Search for an Employee by ID
// Define a structure Employee with name (string), employee ID (integer), and salary (float). Store details for 5 employees in an array of structures. Allow the user to enter an employee ID and search for the corresponding employee’s details i.e. Name and salary of that employee. If not found then print “Employee does not exist in the record”
// Note: Structure of employee has been initialized in this program.
// {"John", 1001, 50000},
// {"Alice", 1002, 60000},
// {"Bob", 1003, 55000},
// {"David", 1004, 47000},
// {"Eve", 1005, 52000}
// Sample Test Cases
// 1. Input:
// 1002 // Enter Employee ID to search
// Output:
// Alice
// 60000.00
// 2. Input:
// 1005
// Output:
// Employee does not exist in the record
// Test Cases Table
// Test Case
// Searched ID
// Expected Output
// 1
// 1002
// Alice
// 60000.00
// 2
// 2004
// Employee does not exist in the record
// 3
// 1005
// Eve
// 52000.00
// 4
// 1001
// John
// 50000.00
// 5
// 5005
// Employee does not exist in the record
// Solution in C#include <stdio.h>

// #include <stdio.h>
// #include <string.h>
// struct Employee {
//     char name[50];
//     int employeeID;
//     float salary;
// };

// int main() {

//     struct Employee employees[5] = {
//         {"John", 1001, 50000},
//         {"Alice", 1002, 60000},
//         {"Bob", 1003, 55000},
//         {"David", 1004, 47000},
//         {"Eve", 1005, 52000}
//     };

//     int searchID;
//     scanf("%d", &searchID);

//     int found = 0;

//     for (int i = 0; i < 5; i++) {

//         if (employees[i].employeeID == searchID) {

//             printf("%s\n", employees[i].name);
//             printf("%.2f\n", employees[i].salary);

//             found = 1;
//             break;
//         }
//     }

//     if (!found) {
//         printf("Employee does not exist in the record");
//     }

//     return 0;
// }


// Problem 18: Array of Structures for Employee Records
// Title: Managing Employee Records
// Define a structure called Employee with fields for name (string), employee ID (integer), and salary (float). Use an array of structures to store details for 3 employees and display their details.
// Sample Test Cases
// 1. Input: 3
// 3 // number of employee
// John
// 1001
// 50000
// Alice
// 1002
// 60000
// Bob
// 1003
// 55000
// Output:
// Employee 1: Name = John, ID = 1001, Salary = 50000
// Employee 2: Name = Alice, ID = 1002, Salary = 60000
// Employee 3: Name = Bob, ID = 1003, Salary = 55000
// Test Cases Table
// Test Case
// Input
// Output
// 1
// 3
// John, 1001, 50000
// Alice, 1002, 60000
// Bob, 1003, 55000
// Employee 1: Name = John, ID = 1001, Salary = 50000
// Employee 2: Name = Alice, ID = 1002, Salary = 60000
// Employee 3: Name = Bob, ID = 1003, Salary = 55000
// 2
// 1
// David, 2001, 40000
// Employee 1: Name = David, ID = 2001, Salary = 40000
// 3
// 2
// Alan, 3001, 48000
// Sarah, 3002, 51000
// Employee 1: Name = Alan, ID = 3001, Salary = 48000
// Employee 2: Name = Sarah, ID = 3002, Salary = 51000
// 4
// 4
// Mike, 4001, 60000
// Tom, 4002, 55000
// Eve, 2002, 45000
// Mark, 2003, 52000
// Employee 1: Name = Mike, ID = 4001, Salary = 60000
// Employee 2: Name = Tom, ID = 4002, Salary = 55000
// Employee 3: Name = Eve, ID = 2002, Salary = 45000
// Employee 4: Name = Mark, ID = 2003, Salary = 52000
// 5
// 5
// Chris, 3003, 53000
// Jane, 5001, 45000
// Eric, 5002, 47000
// Paul, 5003, 52000
// Lily, 4003, 58000
// Employee 1: Name = Chris, ID = 3003, Salary = 53000
// Employee 2: Name = Jane, ID = 5001, Salary = 45000
// Employee 3: Name = Eric, ID = 5002, Salary = 47000
// Employee 4: Name = Paul, ID = 5003, Salary = 52000
// Employee 5: Name = Lily, ID = 4003, Salary = 58000
// Solution in C

// #include <stdio.h>

// struct Employee
// {
//     char name[50];
//     int employeeID;
//     float salary;
// };

// int main()
// {
//     int n;
//     scanf("%d", &n);   
//     struct Employee employees[n];

//     // Input employee details
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", employees[i].name);
//         scanf("%d", &employees[i].employeeID);
//         scanf("%f", &employees[i].salary);
//     }

//     // Display employee details
//     for (int i = 0; i < n; i++)
//     {
//         printf("Employee %d: Name = %s, ID = %d, Salary = %.2f\n",
//                i + 1,
//                employees[i].name,
//                employees[i].employeeID,
//                employees[i].salary);
//     }

//     return 0;


// #include <stdio.h>
// int upperSum(int (*a)[10], int r, int c) {
//     int sum = 0;
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             if(i <= j) {   
//                 sum += a[i][j];
//             }
//         }
//     }
//     return sum;
// }
// int lowerSum(int (*a)[10], int r, int c) {
//     int sum = 0;
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {

//             if(i >= j) {  
//                 sum += a[i][j];
//             }
//         }
//     }
//     return sum;
// }
// int main() {
//     int a[10][10], r, c;
//     printf("Enter rows and columns: ");
//     scanf("%d %d", &r, &c);
//     printf("Enter matrix elements:\n");
//     for(int i = 0; i < r; i++) {
//         for(int j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("\nUpper Triangle Sum = %d", upperSum(a, r, c));
//     printf("\nLower Triangle Sum = %d", lowerSum(a, r, c));
//     return 0;
// }


// series print starting no 26- even h to +1 krke agla agr odd h multiply by 3 and add1  and second time odd h to 3*odd+2 and even h to +2 krke agla

// #include <stdio.h>
// void printSeries(int *num, int terms)
// {
//     int oc = 1; 
//     int ec = 1;  
//     for(int i = 1; i <= terms; i++)
//     {
//         printf("%d ", *num);
//         if(*num % 2 == 0){
//             *num = *num + ec;
//             ec++;
//         }
//         else{
//             *num = (*num * 3) + oc;
//             oc++;
//         }
//     }
// }
// int main()
// {
//     int n, terms;
//     printf("Enter starting number: ");
//     scanf("%d", &n);
//     printf("Enter number of elements: ");
//     scanf("%d", &terms);
//     printSeries(&n, terms);
//     return 0;
// }


// // 5 Marks Questions
// 1. Write a program to find the largest element in an array using functions.
// 2. Write a function to count even and odd numbers in an array.
// 3. Write a program to calculate the average of array elements using pointers upto 2 decimal places.
// 4. Write a function to reverse an array using pointers.
// 5. Write a program to search an element in an array using linear search.
// 6. Write a function to find the sum of array elements using pointer arithmetic.
// 7. Write a program to rotate array elements left by one position.
// 8. Write a function to count positive and negative numbers in an array.
// 9. Write a program to print array elements using pointers only.
// 10. Write a function to swap two numbers using call by reference.

// #include <stdio.h>
// int largest(int *arr, int t) {
//     int max = *arr;
//     for (int i = 1; i < t; i++) {
//         if (*(arr + i) > max) {
//             max = *(arr + i);
//         }
//     }
//     return max;
// }
// int main() {
//     int arr[100], t;
//     printf("Enter number of elements: ");
//     scanf("%d", &t);
//     printf("Enter %d elements:\n", t);
//     for (int i = 0; i < t; i++) {
//         scanf("%d", &arr[i]);
//     }
//     int max = largest(arr, t);
//     printf("Largest element: %d\n", max);
//     return 0;
// }

// #include <stdio.h>
// void countEvenOdd(int *arr, int t, int *evenCount, int *oddCount) {
//     *evenCount = 0;
//     *oddCount = 0;
//     for (int i = 0; i < t; i++) {
//         if (*(arr + i) % 2 == 0) {
//             (*evenCount)++;
//         } else {
//             (*oddCount)++;
//         }
//     }
// }

// #include <stdio.h>
// void avg(int *arr, int t, float *average) {
//     int sum = 0;
//     for (int i = 0; i < t; i++) {
//         sum += *(arr + i);
//     }
//     *average = (float)sum / t;
//     printf("Average: %.2f\n", *average);
// }


// #include <stdio.h>
// void reverse(int *arr, int t) {
//     for (int i = 0; i < t / 2; i++) {
//         int temp = *(arr + i);
//         *(arr + i) = *(arr + t - 1 - i);
//         *(arr + t - 1 - i) = temp;
//     }
// }

// #include <stdio.h>
// void linearSearch(int *arr, int t, int key) {
//     for (int i = 0; i < t; i++) {
//         if (*(arr + i) == key) {
//             printf("Element found at index: %d\n", i);
//             return;
//         }
//     }
//     printf("Element not found in the array.\n");
// }


// #include <stdio.h>
// void posNeg(int *arr, int t, int *posCount, int *negCount) {
//     *posCount = 0;
//     *negCount = 0;
//     for (int i = 0; i < t; i++) {
//         if (*(arr + i) > 0) {
//             (*posCount)++;
//         } else if (*(arr + i) < 0) {
//             (*negCount)++;
//         }
//     }
// }


// #include <stdio.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


// 11. Write a program to calculate string length using strlen().
// 12. Write a program to reverse a string using pointers.
// 13. Write a function to count vowels and consonants in a string.
// 14. Write a program to check whether a string is palindrome or not.
// 15. Write a function to copy one string into another
// 16. Write a program to concatenate two strings without using strcat().
// 17. Write a function to count spaces and words in a sentence.
// 18. Write a program to find frequency of a character in a string.
// 19. Write a function to compare two strings without using strcmp().
// 20. Write a program to convert lowercase letters into uppercase.

// #include <stdio.h>
// void strlen(char *str) {
//     int length = 0;
//     while (*str != '\0') {
//         length++;
//         str++;
//     }
//     printf("Length of the string: %d\n", length);
// }

// #include <stdio.h>
// void reverseString(char *str) {
//     char *start = str;
//     char *end = str;
//     while (*end != '\0') {
//         end++;
//         }   
//     end--;
//     while (start < end) {   
//         char temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// #include <stdio.h>
// void countVowelsConsonants(char *str, int *vowelCount, int *consonantCount) {
//     *vowelCount = 0;
//     *consonantCount = 0;
//     while (*str != '\0') {
//         char ch = *str;
//         if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//                 (*vowelCount)++;
//             } else {
//                 (*consonantCount)++;
//             }
//         }
//         str++;
//     }
// }

// #include <stdio.h>
// void palindrome(char *str) {
//     char *start = str;
//     char *end = str;
//     while (*end != '\0') {
//         end++;
//     }
//     end--;
//     int isPalindrome = 1;
//     while (start < end) {
//         if (*start != *end) {
//             isPalindrome = 0;
//             break;
//         }
//         start++;
//         end--;
//     }
//     if (isPalindrome) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }
// }

// #include <stdio.h>
// void copyString(char *source, char *destination) {
//     while (*source != '\0') {
//         *destination = *source;
//         source++;
//         destination++;
//     }
//     *destination = '\0';
// }

// #include <stdio.h>
// void concatenateStrings(char *str1, char *str2, char *result) {
//     while (*str1 != '\0') {
//         *result = *str1;
//         str1++;
//         result++;
//     }
//     while (*str2 != '\0') {
//         *result = *str2;
//         str2++;
//         result++;
//     }
//     *result = '\0';
// }

// #include <stdio.h>
// void countSpacesWords(char *str, int *spaceCount, int *wordCount) {
//     *spaceCount = 0;
//     *wordCount = 0;
//     int inWord = 0;
//     while (*str != '\0') {
//         if (*str == ' ') {
//             (*spaceCount)++;
//             inWord = 0;
//         } else {
//             if (inWord == 0) {
//                 (*wordCount)++;
//                 inWord = 1;
//             }
//         }
//         str++;
//     }
// }


// #include <stdio.h>
// void frequency(char *str, char key) {
//     int count = 0;
//     while (*str != '\0') {
//         if (*str == key) {
//             count++;
//         }
//         str++;
//     }
//     printf("Frequency of '%c': %d\n", key, count);
// }

// #include <stdio.h>
// void compareStrings(char *str1, char *str2) {
//     while (*str1 != '\0' && *str2 != '\0') {
//         if (*str1 != *str2) {
//             printf("Strings are not equal.\n");
//             return;
//         }
//         str1++;
//         str2++;
//     }
//     if (*str1 == '\0' && *str2 == '\0') {
//         printf("Strings are equal.\n");
//     } else {

//         printf("Strings are not equal.\n");
//     }
// }


// #include <stdio.h>
// void toUpperCase(char *str) {
//     while (*str != '\0') {
//         if (*str >= 'a' && *str <= 'z') {
//             *str = *str - ('a' - 'A');
//         }
//         str++;
//     }
// }

// #include <stdio.h>
// void tolowerCase(char *str) {
//     while (*str != '\0') {
//         if (*str >= 'A' && *str <= 'Z') {
//             *str = *str + ('a' - 'A');
//         }
//         str++;
//     }
// }

// Write a program to access structure members using pointers
// 31. Define a structure for student details and display records.
// 32. Write a program to store employee details using structures.
// 33. Write a function to display details of a student using structure pointer.
// 34. Write a program to search employee details using employee ID.
// 35. Write a program to calculate average marks of students using structures.
// 36. Write a program to display highest salary employee.
// 37. Write a program using array of structures for book details.
// 38. Write a program to sort student records based on marks.
// 39. Write a function to pass structure to another function.
// 40. Write a program to display details of students who passed.


// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollno;
//     float marks;
// };
// void display(struct Student *s) {
//     printf("Name: %s\n", s->name);
//     printf("Roll No: %d\n", s->rollno);
//     printf("Marks: %.2f\n", s->marks);
// }   

// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollno;
//     float marks;
// };
// void display(struct Student s) {
//     printf("Name: %s\n", s.name);
//     printf("Roll No: %d\n", s.rollno);
//     printf("Marks: %.2f\n", s.marks);
// }

// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollno;
//     float marks;
// };
// float calculateAverage(struct Student s[], int n) {
//     float sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += s[i].marks;
//     }
//     return sum / n;
// }

//  highest salary employee
// #include <stdio.h>
// struct Employee {
//     char name[50];
//     int id;
//     float salary;
// };
// void findHighestSalary(struct Employee e[], int n) {
//     int maxIndex = 0;
//     for (int i = 1; i < n; i++) {
//         if (e[i].salary > e[maxIndex].salary) {
//             maxIndex = i;
//         }
//     }
//     printf("Employee with highest salary:\n");
//     printf("Name: %s\n", e[maxIndex].name);
//     printf("ID: %d\n", e[maxIndex].id);
//     printf("Salary: %.2f\n", e[maxIndex].salary);
// }

// #include <stdio.h>
// struct Book {
//     char title[100];
//     char author[50];
//     float price;
// };
// void displayBooks(struct Book b[], int n) {
//     printf("Book Details:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Title: %s\n", b[i].title);
//         printf("Author: %s\n", b[i].author);
//         printf("Price: %.2f\n", b[i].price);
//         printf("\n");
//     }
// }

// #include <stdio.h>
// struct Student {
//     char name[50];
//     int rollno;
//     float marks;
// };
// void displayPassedStudents(struct Student s[], int n) {
//     printf("Students who passed:\n");
//     for (int i = 0; i < n; i++) {
//         if (s[i].marks >= 40) {
//             printf("Name: %s\n", s[i].name);
//             printf("Roll No: %d\n", s[i].rollno);
//             printf("Marks: %.2f\n", s[i].marks);
//             printf("\n");
//         }
//     }
// }


// Problem Statement 1
// Riya wants to find the average of array elements using pointers.
// Write a program that:
// ● Reads size n
// ● Reads n integers
// ● Uses pointers to calculate average
// ● Prints the average
// Sample Test Case 1
// Input:
// 5
// 1 2 3 4 5
// Output:
// 3
// Sample Test Case 2
// Input:
// 4
// 2 4 6 8
// Output:
// 5
// Hidden Test Cases
// Test Case | Input | Output
// Hidden 1 | 1 → 10 | 10
// Hidden 2 | 2 → 1 3 | 2
// Hidden 3 | 3 → 5 5 5 | 5
// Hidden 4 | 4 → 0 0 0 0 | 0
// Hidden 5 | 5 → 1 2 3 4 6 | 3
// Solution:
#include <stdio.h>
float avg(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return (float)sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%.0f", avg(arr, n));
    return 0;
}


Problem Statement 2
Rahul wants to find the maximum element using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to find maximum
● Prints the maximum
Sample Test Case 1
Input:
5
1 9 3 4 5
Output:
9
Sample Test Case 2
Input: 
3
-1 -5 -2
Output:
-1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 7 | 7
Hidden 2 | 2 → 2 8 | 8
Hidden 3 | 4 → 3 3 3 3 | 3
Hidden 4 | 3 → 0 -1 -2 | 0
Hidden 5 | 5 → 1 2 10 4 5 | 10
Solution:
#include <stdio.h>

int max(int *arr, int n) {
    int m = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > m)
            m = *(arr + i);
    }
    return m;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", max(arr, n));
    return 0;
}
________________________________________
Problem Statement 3
Simran wants to reverse an array using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to reverse array
● Prints reversed array
Sample Test Case 1
Input:
5
1 2 3 4 5
Output:
5 4 3 2 1
Sample Test Case 2
Input:
3
10 20 30
Output:
30 20 10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 2 1
Hidden 3 | 4 → 2 2 2 2 | 2 2 2 2
Hidden 4 | 3 → 0 1 0 | 0 1 0
Hidden 5 | 5 → 1 3 5 7 9 | 9 7 5 3 1
Solution:c
#include <stdio.h>

void reverse(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
________________________________________
Problem Statement 4
Aman wants to count even numbers using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to count even numbers
● Prints the count
Sample Test Case 1
Input:
5
1 2 3 4 5
Output:
2
Sample Test Case 2
Input:
4
2 4 6 8
Output:
4
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 1 | 0
Hidden 2 | 2 → 2 3 | 1
Hidden 3 | 3 → 2 2 2 | 3
Hidden 4 | 3 → 1 3 5 | 0
Hidden 5 | 5 → 0 1 2 3 4 | 3
Solution:
#include <stdio.h>

int countEven(int *arr, int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            c++;
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", countEven(arr, n));
    return 0;
}
________________________________________
Problem Statement 5
Ravi wants to copy one array to another using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to copy elements
● Prints new array
Sample Test Case 1
Input:
3
1 2 3
Output:
1 2 3
Sample Test Case 2
Input:
4
5 6 7 8
Output:
5 6 7 8
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 9 | 9
Hidden 2 | 2 → 1 1 | 1 1
Hidden 3 | 3 → 2 3 4 | 2 3 4
Hidden 4 | 3 → 0 0 0 | 0 0 0
Hidden 5 | 5 → 1 2 3 4 5 | 1 2 3 4 5
Solution:
#include <stdio.h>

void copy(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    copy(a, b, n);

    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

Problem Statement 7
Neha wants to find the minimum element using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to find minimum
● Prints the minimum
Sample Test Case 1
Input:
5
1 9 3 4 5
Output:
1
Sample Test Case 2
Input:
3
-1 -5 -2
Output:
-5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 7 | 7
Hidden 2 | 2 → 2 8 | 2
Hidden 3 | 4 → 3 3 3 3 | 3
Hidden 4 | 3 → 0 -1 -2 | -2
Hidden 5 | 5 → 1 2 10 4 5 | 1
Solution:
#include <stdio.h>

int min(int *arr, int n) {
    int m = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < m)
            m = *(arr + i);
    }
    return m;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", min(arr, n));
    return 0;
}
________________________________________
Problem Statement 8
Arjun wants to search for an element using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Reads element x
● Uses pointers to search x
● Prints index (0-based) or -1
Sample Test Case 1
Input:
5
1 2 3 4 5
3
Output:
2
Sample Test Case 2
Input:
3
10 20 30
40
Output:
-1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 → 5 | 0
Hidden 2 | 2 → 1 2 → 2 | 1
Hidden 3 | 3 → 3 3 3 → 3 | 0
Hidden 4 | 3 → 0 1 2 → 5 | -1
Hidden 5 | 5 → 1 2 3 4 5 → 1 | 0
Solution:
#include <stdio.h>

int search(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x)
            return i;
    }
    return -1;
}

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    printf("%d", search(arr, n, x));
    return 0;
}
________________________________________
Problem Statement 9
Karan wants to count odd numbers using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to count odd numbers
● Prints the count
Sample Test Case 1
Input:
5
1 2 3 4 5
Output:
3
Sample Test Case 2
Input:
4
2 4 6 8
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 1 | 1
Hidden 2 | 2 → 1 2 | 1
Hidden 3 | 3 → 3 3 3 | 3
Hidden 4 | 3 → 0 0 0 | 0
Hidden 5 | 5 → 1 2 3 4 5 | 3
Solution:
#include <stdio.h>

int countOdd(int *arr, int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 != 0)
            c++;
    }
    return c;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", countOdd(arr, n));
    return 0;
}
________________________________________
Problem Statement 10
Priya wants to multiply all elements using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to calculate product
● Prints the product
Sample Test Case 1
Input:
5
1 2 3 4 5
Output:
120
Sample Test Case 2
Input:
3
2 3 4
Output:
24
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 2
Hidden 3 | 3 → 2 2 2 | 8
Hidden 4 | 3 → 1 1 1 | 1
Hidden 5 | 4 → 2 3 1 1 | 6
Solution:
#include <stdio.h>

int product(int *arr, int n) {
    int p = 1;
    for (int i = 0; i < n; i++) {
        p *= *(arr + i);
    }
    return p;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", product(arr, n));
    return 0;
}
________________________________________
Problem Statement 11
Amit wants to swap first and last element using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to swap first and last
● Prints updated array
Sample Test Case 1
Input:
5
1 2 3 4 5
Output:
5 2 3 4 1
Sample Test Case 2
Input:
3
10 20 30
Output:
30 20 10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 2 1
Hidden 3 | 3 → 2 2 2 | 2 2 2
Hidden 4 | 3 → 0 1 2 | 2 1 0
Hidden 5 | 4 → 1 2 3 4 | 4 2 3 1
Solution:
#include <stdio.h>

void swap(int *arr, int n) {
    int temp = *arr;
    *arr = *(arr + n - 1);
    *(arr + n - 1) = temp;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    swap(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
________________________________________
Problem Statement 12
Sneha wants to print array in reverse using pointers only (no indexing).
Write a program that:
● Reads size n
● Reads n integers
● Uses pointer traversal
● Prints elements in reverse
Sample Test Case 1
Input:
5
1 2 3 4 5
Output:
5 4 3 2 1
Sample Test Case 2
Input:
3
10 20 30
Output:
30 20 10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 2 1
Hidden 3 | 3 → 2 2 2 | 2 2 2
Hidden 4 | 3 → 0 1 0 | 0 1 0
Hidden 5 | 5 → 1 2 3 4 5 | 5 4 3 2 1
Solution:
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int *ptr = arr + n - 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr - i));
    }

    return 0;
}
________________________________________
Problem Statement 13
Rohit wants to sum only positive numbers using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to sum positives
● Prints the sum
Sample Test Case 1
Input:
5
1 -2 3 -4 5
Output:
9
Sample Test Case 2
Input:
3
-1 -2 -3
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → -1 1 | 1
Hidden 3 | 3 → 2 2 2 | 6
Hidden 4 | 3 → 0 0 0 | 0
Hidden 5 | 5 → 1 1 -1 -1 1 | 3
Solution:
#include <stdio.h>

int sumPos(int *arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0)
            s += *(arr + i);
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", sumPos(arr, n));
    return 0;
}
________________________________________
Problem Statement 14
Meena wants to count elements greater than a given value using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Reads value x
● Uses pointers to count elements > x
● Prints count
Sample Test Case 1
Input:
5
1 2 3 4 5
3
Output:
2
Sample Test Case 2
Input:
4
5 6 7 8
6
Output:
2
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 → 3 | 1
Hidden 2 | 2 → 1 2 → 2 | 0
Hidden 3 | 3 → 3 3 3 → 2 | 0
Hidden 4 | 3 → 0 1 2 → 1 | 1
Hidden 5 | 5 → 1 2 3 4 5 → 4 | 1
Solution:
#include <stdio.h>

int countGreater(int *arr, int n, int x) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > x)
            c++;
    }
    return c;
}

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    printf("%d", countGreater(arr, n, x));
    return 0;
}
________________________________________
Problem Statement 15
Vikas wants to check if array is palindrome using pointers.
Write a program that:
● Reads size n
● Reads n integers
● Uses pointers to check palindrome
● Prints 1 if yes, else 0
Sample Test Case 1
Input:
5
1 2 3 2 1
Output:
1
Sample Test Case 2
Input:
3
1 2 3
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 1
Hidden 2 | 2 → 1 1 | 1
Hidden 3 | 3 → 2 2 2 | 1
Hidden 4 | 3 → 0 1 0 | 1
Hidden 5 | 5 → 1 2 3 4 5 | 0
Solution:
#include <stdio.h>

int isPalindrome(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;

    while (start < end) {
        if (*start != *end)
            return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d", isPalindrome(arr, n));
    return 0;
}

Riya wants to find minimum using function.
Write a program that:
● Reads two integers
● Uses a function with pointers
● Returns minimum
Sample Test Case 1
Input:
8 12
Output:
8
Sample Test Case 2
Input:
-5 -2
Output:
-5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 | 0
Hidden 2 | 1 9 | 1
Hidden 3 | -10 10 | -10
Hidden 4 | 100 99 | 99
Hidden 5 | -1 -9 | -9
Solution:
#include <stdio.h>

int min(int *a, int *b) {
    return (*a < *b) ? *a : *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", min(&a, &b));

    return 0;
}
________________________________________
Problem Statement 17
Aman wants to calculate sum using function.
Write a program that:
● Reads two integers
● Uses a function with pointers
● Returns sum
Sample Test Case 1
Input:
5 7
Output:
12
Sample Test Case 2
Input:
-3 3
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 | 0
Hidden 2 | 1 9 | 10
Hidden 3 | -10 10 | 0
Hidden 4 | 100 99 | 199
Hidden 5 | -1 -9 | -10
Solution:
#include <stdio.h>

int sum(int *a, int *b) {
    return *a + *b;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", sum(&a, &b));

    return 0;
}
________________________________________
Problem Statement 18
Rahul wants to calculate product using function.
Write a program that:
● Reads two integers
● Uses a function with pointers
● Returns product
Sample Test Case 1
Input:
5 7
Output:
35
Sample Test Case 2
Input:
-3 3
Output:
-9
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 5 | 0
Hidden 2 | 1 9 | 9
Hidden 3 | -10 10 | -100
Hidden 4 | 100 0 | 0
Hidden 5 | -1 -9 | 9
Solution:
#include <stdio.h>

int product(int *a, int *b) {
    return (*a) * (*b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", product(&a, &b));

    return 0;
}
________________________________________
Problem Statement 19
Neha wants to swap two numbers using function.
Write a program that:
● Reads two integers
● Uses a function with pointers
● Swaps values
● Prints swapped values
Sample Test Case 1
Input:
5 7
Output:
7 5
Sample Test Case 2
Input:
-3 3
Output:
3 -3
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 | 0 0
Hidden 2 | 1 9 | 9 1
Hidden 3 | -10 10 | 10 -10
Hidden 4 | 100 99 | 99 100
Hidden 5 | -1 -9 | -9 -1
Solution:
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    swap(&a, &b);

    printf("%d %d", a, b);

    return 0;
}
________________________________________
Problem Statement 20
Arjun wants to check if a number is even using function.
Write a program that:
● Reads an integer
● Uses a function with pointer
● Returns 1 if even else 0
Sample Test Case 1
Input:
4
Output:
1
Sample Test Case 2
Input:
7
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 1
Hidden 2 | 1 | 0
Hidden 3 | 2 | 1
Hidden 4 | -2 | 1
Hidden 5 | -3 | 0
Solution:
#include <stdio.h>

int isEven(int *a) {
    return (*a % 2 == 0);
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d", isEven(&a));

    return 0;
}
________________________________________
Problem Statement 21
Simran wants to find square using function.
Write a program that:
● Reads an integer
● Uses a function with pointer
● Returns square
Sample Test Case 1
Input:
5
Output:
25
Sample Test Case 2
Input:
-4
Output:
16
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 0
Hidden 2 | 1 | 1
Hidden 3 | 2 | 4
Hidden 4 | -3 | 9
Hidden 5 | 10 | 100
Solution:
#include <stdio.h>

int square(int *a) {
    return (*a) * (*a);
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d", square(&a));

    return 0;
}
________________________________________
Problem Statement 22
Karan wants to find absolute value using function.
Write a program that:
● Reads an integer
● Uses a function with pointer
● Returns absolute value
Sample Test Case 1
Input:
5
Output:
5
Sample Test Case 2
Input:
-4
Output:
4
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 0
Hidden 2 | 1 | 1
Hidden 3 | -2 | 2
Hidden 4 | -10 | 10
Hidden 5 | 9 | 9
Solution:
#include <stdio.h>

int absVal(int *a) {
    return (*a < 0) ? -(*a) : *a;
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d", absVal(&a));

    return 0;
}
________________________________________
Problem Statement 23
Ravi wants to find greater of three numbers using function.
Write a program that:
● Reads three integers
● Uses a function with pointers
● Returns maximum
Sample Test Case 1
Input:
1 2 3
Output:
3
Sample Test Case 2
Input:
-1 -2 -3
Output:
-1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 0 | 0
Hidden 2 | 1 9 3 | 9
Hidden 3 | -10 10 5 | 10
Hidden 4 | 100 99 98 | 100
Hidden 5 | -1 -9 -5 | -1
Solution:
#include <stdio.h>

int max3(int *a, int *b, int *c) {
    int m = *a;
    if (*b > m) m = *b;
    if (*c > m) m = *c;
    return m;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", max3(&a, &b, &c));

    return 0;
}
________________________________________
Problem Statement 24
Priya wants to find factorial using function.
Write a program that:
● Reads an integer
● Uses a function with pointer
● Returns factorial
Sample Test Case 1
Input:
5
Output:
120
Sample Test Case 2
Input:
3
Output:
6
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 1
Hidden 2 | 1 | 1
Hidden 3 | 2 | 2
Hidden 4 | 4 | 24
Hidden 5 | 6 | 720
Solution:
#include <stdio.h>

int fact(int *n) {
    int f = 1;
    for (int i = 1; i <= *n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fact(&n));

    return 0;
}
________________________________________
Problem Statement 25
Amit wants to check if number is positive using function.
Write a program that:
● Reads an integer
● Uses a function with pointer
● Returns 1 if positive else 0
Sample Test Case 1
Input:
5
Output:
1
Sample Test Case 2
Input:
-3
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 0
Hidden 2 | 1 | 1
Hidden 3 | -1 | 0
Hidden 4 | 10 | 1
Hidden 5 | -10 | 0
Solution:
#include <stdio.h>

int isPositive(int *a) {
    return (*a > 0);
}

int main() {
    int a;
    scanf("%d", &a);

    printf("%d", isPositive(&a));

    return 0;
}


Problem Statement 26
Aman wants to find factorial using recursion
Write a program that:
● Reads an integer
● Uses recursion to find factorial
● Prints the result
Sample Test Case 1
Input:
5
Output:
120
Sample Test Case 2
Input:
3
Output:
6
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 1
Hidden 2 | 1 | 1
Hidden 3 | 2 | 2
Hidden 4 | 4 | 24
Hidden 5 | 6 | 720
Solution:
#include <stdio.h>

int fact(int n) {
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fact(n));

    return 0;
}
________________________________________
Problem Statement 27
Rahul wants to find sum of digits using recursion
Write a program that:
● Reads an integer
● Uses recursion to find sum of digits
● Prints the result
Sample Test Case 1
Input:
1234
Output:
10
Sample Test Case 2
Input:
900
Output:
9
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 0
Hidden 2 | 5 | 5
Hidden 3 | 100 | 1
Hidden 4 | 111 | 3
Hidden 5 | 456 | 15
Solution:
#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", sumDigits(n));

    return 0;
}
________________________________________
Problem Statement 28
Neha wants to check if a number is palindrome using recursion
Write a program that:
● Reads an integer
● Uses recursion
● Prints 1 if palindrome else 0
Sample Test Case 1
Input:
121
Output:
1
Sample Test Case 2
Input:
123
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 1
Hidden 2 | 5 | 1
Hidden 3 | 100 | 0
Hidden 4 | 111 | 1
Hidden 5 | 456 | 0
Solution:
#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == reverse(n, 0))
        printf("1");
    else
        printf("0");

    return 0;
}
________________________________________
Problem Statement 29
Arjun wants to find power using recursion
Write a program that:
● Reads two integers (base and exponent)
● Uses recursion
● Prints result
Sample Test Case 1
Input:
2 3
Output:
8
Sample Test Case 2
Input:
5 0
Output:
1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 3 2 | 9
Hidden 2 | 2 5 | 32
Hidden 3 | 10 1 | 10
Hidden 4 | 7 0 | 1
Hidden 5 | 1 100 | 1
Solution:
#include <stdio.h>

int power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", power(a, b));

    return 0;
}
________________________________________
Problem Statement 30
Simran wants to find Fibonacci using recursion
Write a program that:
● Reads an integer n
● Uses recursion
● Prints nth Fibonacci number
Sample Test Case 1
Input:
5
Output:
5
Sample Test Case 2
Input:
6
Output:
8
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 0
Hidden 2 | 1 | 1
Hidden 3 | 2 | 1
Hidden 4 | 3 | 2
Hidden 5 | 7 | 13
Solution:
#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}
________________________________________
Problem Statement 31
Karan wants to count digits using recursion
Write a program that:
● Reads an integer
● Uses recursion
● Prints number of digits
Sample Test Case 1
Input:
1234
Output:
4
Sample Test Case 2
Input:
9
Output:
1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 1
Hidden 2 | 5 | 1
Hidden 3 | 100 | 3
Hidden 4 | 111 | 3
Hidden 5 | 45678 | 5
Solution:
#include <stdio.h>

int count(int n) {
    if (n == 0)
        return 0;
    return 1 + count(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("1");
    else
        printf("%d", count(n));

    return 0;
}
________________________________________
Problem Statement 32
Ravi wants to find sum of first n natural numbers using recursion
Write a program that:
● Reads an integer n
● Uses recursion
● Prints sum
Sample Test Case 1
Input:
5
Output:
15
Sample Test Case 2
Input:
3
Output:
6
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 0
Hidden 2 | 1 | 1
Hidden 3 | 2 | 3
Hidden 4 | 4 | 10
Hidden 5 | 6 | 21
Solution:
#include <stdio.h>

int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", sum(n));

    return 0;
}
________________________________________
Problem Statement 33
Priya wants to check even or odd using recursion
Write a program that:
● Reads an integer
● Uses recursion
● Prints 1 if even else 0
Sample Test Case 1
Input:
4
Output:
1
Sample Test Case 2
Input:
7
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 | 1
Hidden 2 | 1 | 0
Hidden 3 | 2 | 1
Hidden 4 | 3 | 0
Hidden 5 | 10 | 1
Solution:
#include <stdio.h>

int isEven(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 0;
    return isEven(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", isEven(n));

    return 0;
}
________________________________________
Problem Statement 34
Amit wants to find GCD using recursion
Write a program that:
● Reads two integers
● Uses recursion
● Prints GCD
Sample Test Case 1
Input:
12 18
Output:
6
Sample Test Case 2
Input:
5 7
Output:
1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 5 | 5
Hidden 2 | 10 0 | 10
Hidden 3 | 8 4 | 4
Hidden 4 | 9 6 | 3
Hidden 5 | 15 5 | 5
Solution:
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", gcd(a, b));

    return 0;
}
________________________________________
Problem Statement 35
Vikas wants to print numbers from 1 to n using recursion
Write a program that:
● Reads an integer
● Uses recursion
● Prints numbers from 1 to n
Sample Test Case 1
Input:
5
Output:
1 2 3 4 5
Sample Test Case 2
Input:
3
Output:
1 2 3
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | 1
Hidden 2 | 2 | 1 2
Hidden 3 | 4 | 1 2 3 4
Hidden 4 | 0 |
Hidden 5 | 6 | 1 2 3 4 5 6
Solution:
#include <stdio.h>

void print(int n) {
    if (n == 0)
        return;
    print(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);

    print(n);

    return 0;
}





Problem Statement 36
Aman wants to store and display student details using structure
Write a program that:
● Defines a structure with name and marks
● Reads values
● Prints details
Sample Test Case 1
Input:
Aman 90
Output:
Aman 90
Sample Test Case 2
Input:
Riya 85
Output:
Riya 85
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | A 50 | A 50
Hidden 2 | B 60 | B 60
Hidden 3 | C 70 | C 70
Hidden 4 | D 80 | D 80
Hidden 5 | E 90 | E 90
Solution:
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student s;
    scanf("%s %d", s.name, &s.marks);
    printf("%s %d", s.name, s.marks);
    return 0;
}
________________________________________
Problem Statement 37
Riya wants to add two complex numbers using structure
Write a program that:
● Defines a structure
● Reads two complex numbers
● Adds them
● Prints result
Sample Test Case 1
Input:
1 2
3 4
Output:
4 6
Sample Test Case 2
Input:
5 6
1 2
Output:
6 8
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 → 0 0 | 0 0
Hidden 2 | 1 1 → 1 1 | 2 2
Hidden 3 | 2 3 → 3 4 | 5 7
Hidden 4 | -1 2 → 1 -2 | 0 0
Hidden 5 | 5 5 → 5 5 | 10 10
Solution:
#include <stdio.h>

struct Complex {
    int real, imag;
};

int main() {
    struct Complex a, b, c;
    scanf("%d %d", &a.real, &a.imag);
    scanf("%d %d", &b.real, &b.imag);

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    printf("%d %d", c.real, c.imag);
    return 0;
}
________________________________________
Problem Statement 38
Rahul wants to find highest marks among 3 students
Write a program that:
● Uses structure
● Reads 3 students marks
● Prints highest marks
Sample Test Case 1
Input:
10 20 30
Output:
30
Sample Test Case 2
Input:
5 15 10
Output:
15
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 1 1 | 1
Hidden 2 | 2 3 1 | 3
Hidden 3 | 5 4 6 | 6
Hidden 4 | 9 8 7 | 9
Hidden 5 | 0 0 0 | 0
Solution:
#include <stdio.h>

struct Student {
    int marks;
};

int main() {
    struct Student s[3];
    for(int i=0;i<3;i++)
        scanf("%d",&s[i].marks);

    int max = s[0].marks;
    for(int i=1;i<3;i++)
        if(s[i].marks > max)
            max = s[i].marks;

    printf("%d", max);
    return 0;
}
________________________________________
Problem Statement 39
Neha wants to calculate total marks using structure
Write a program that:
● Uses structure
● Reads marks of 3 subjects
● Prints total
Sample Test Case 1
Input:
10 20 30
Output:
60
Sample Test Case 2
Input:
5 5 5
Output:
15
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 1 1 | 3
Hidden 2 | 2 3 4 | 9
Hidden 3 | 0 0 0 | 0
Hidden 4 | 10 10 10 | 30
Hidden 5 | 7 8 9 | 24
Solution:
#include <stdio.h>

struct Marks {
    int a,b,c;
};

int main() {
    struct Marks m;
    scanf("%d %d %d",&m.a,&m.b,&m.c);

    printf("%d", m.a + m.b + m.c);
    return 0;
}
________________________________________
Problem Statement 40
Arjun wants to swap two structures
Write a program that:
● Uses structure
● Reads two integers
● Swaps using structure
● Prints result
Sample Test Case 1
Input:
5 7
Output:
7 5
Sample Test Case 2
Input:
1 2
Output:
2 1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 | 0 0
Hidden 2 | 9 1 | 1 9
Hidden 3 | -1 1 | 1 -1
Hidden 4 | 3 4 | 4 3
Hidden 5 | 10 20 | 20 10
Solution:
#include <stdio.h>

struct Num {
    int x;
};

int main() {
    struct Num a,b,temp;
    scanf("%d %d",&a.x,&b.x);

    temp = a;
    a = b;
    b = temp;

    printf("%d %d", a.x, b.x);
    return 0;
}
________________________________________
Problem Statement 41
Simran wants to store employee details and print salary
Write a program that:
● Uses structure
● Reads name and salary
● Prints salary
Sample Test Case 1
Input:
Aman 5000
Output:
5000
Sample Test Case 2
Input:
Riya 7000
Output:
7000
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | A 1000 | 1000
Hidden 2 | B 2000 | 2000
Hidden 3 | C 3000 | 3000
Hidden 4 | D 4000 | 4000
Hidden 5 | E 5000 | 5000
Solution:
#include <stdio.h>

struct Emp {
    char name[50];
    int salary;
};

int main() {
    struct Emp e;
    scanf("%s %d", e.name, &e.salary);

    printf("%d", e.salary);
    return 0;
}
________________________________________
Problem Statement 42
Karan wants to demonstrate union storing integer and float
Write a program that:
● Uses union
● Reads integer and float
● Prints both
Sample Test Case 1
Input:
5 2.5
Output:
5 2.5
Sample Test Case 2
Input:
10 3.5
Output:
10 3.5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 1.1 | 1 1.1
Hidden 2 | 2 2.2 | 2 2.2
Hidden 3 | 3 3.3 | 3 3.3
Hidden 4 | 4 4.4 | 4 4.4
Hidden 5 | 5 5.5 | 5 5.5
Solution:
#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;

    scanf("%d", &d.i);
    printf("%d ", d.i);

    scanf("%f", &d.f);
    printf("%.1f", d.f);

    return 0;
}
________________________________________
Problem Statement 43
Ravi wants to find average using structure
Write a program that:
● Uses structure
● Reads 3 marks
● Prints average
Sample Test Case 1
Input:
10 20 30
Output:
20
Sample Test Case 2
Input:
5 5 5
Output:
5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 1 1 | 1
Hidden 2 | 2 3 4 | 3
Hidden 3 | 0 0 0 | 0
Hidden 4 | 10 10 10 | 10
Hidden 5 | 7 8 9 | 8
Solution:
#include <stdio.h>

struct Marks {
    int a,b,c;
};

int main() {
    struct Marks m;
    scanf("%d %d %d",&m.a,&m.b,&m.c);

    printf("%d", (m.a + m.b + m.c)/3);
    return 0;
}
________________________________________
Problem Statement 44
Priya wants to display structure using pointer
Write a program that:
● Uses structure
● Uses pointer to structure
● Prints data
Sample Test Case 1
Input:
Aman 90
Output:
Aman 90
Sample Test Case 2
Input:
Riya 85
Output:
Riya 85
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | A 50 | A 50
Hidden 2 | B 60 | B 60
Hidden 3 | C 70 | C 70
Hidden 4 | D 80 | D 80
Hidden 5 | E 90 | E 90
Solution:
#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    scanf("%s %d", ptr->name, &ptr->marks);
    printf("%s %d", ptr->name, ptr->marks);

    return 0;
}
________________________________________
Problem Statement 45
Amit wants to compare two structures
Write a program that:
● Uses structure
● Reads two values
● Prints 1 if equal else 0
Sample Test Case 1
Input:
5 5
Output:
1
Sample Test Case 2
Input:
5 6
Output:
0
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 0 0 | 1
Hidden 2 | 1 2 | 0
Hidden 3 | 3 3 | 1
Hidden 4 | 4 5 | 0
Hidden 5 | 10 10 | 1
Solution:
#include <stdio.h>

struct Num {
    int x;
};

int main() {
    struct Num a,b;
    scanf("%d %d",&a.x,&b.x);

    if(a.x == b.x)
        printf("1");
    else
        printf("0");

    return 0;
}


Problem Statement 46
Aman wants to understand memory sharing in union using pointer
Write a program that:
● Uses a union with int and float
● Assigns value to int
● Accesses float using pointer
● Prints float value
Sample Test Case 1
Input:
5
Output:
(garbage/implementation dependent)
Sample Test Case 2
Input:
10
Output:
(garbage/implementation dependent)
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | undefined
Hidden 2 | 2 | undefined
Hidden 3 | 100 | undefined
Hidden 4 | -1 | undefined
Hidden 5 | 0 | undefined
Solution:
#include <stdio.h>

union Data {
    int i;
    float f;
};

int main() {
    union Data d;
    scanf("%d", &d.i);

    float *ptr = (float*)&d;
    printf("%f", *ptr);

    return 0;
}
________________________________________
Problem Statement 47
Riya wants to modify structure using pointer to pointer
Write a program that:
● Uses structure with integer
● Uses pointer to pointer
● Modifies value
● Prints updated value
Sample Test Case 1
Input:
5
Output:
10
Sample Test Case 2
Input:
3
Output:
6
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | 2
Hidden 2 | 2 | 4
Hidden 3 | 10 | 20
Hidden 4 | -1 | -2
Hidden 5 | 0 | 0
Solution:
#include <stdio.h>

struct Num {
    int x;
};

void modify(struct Num **p) {
    (**p).x *= 2;
}

int main() {
    struct Num n;
    scanf("%d", &n.x);

    struct Num *ptr = &n;
    modify(&ptr);

    printf("%d", n.x);
    return 0;
}
________________________________________
Problem Statement 48
Rahul wants to observe union overwrite behavior
Write a program that:
● Uses union with int and char array
● Assigns integer
● Prints char array
Sample Test Case 1
Input:
16909060
Output:
(binary dependent characters)
Sample Test Case 2
Input:
1
Output:
(binary dependent characters)
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 256 | undefined
Hidden 2 | 512 | undefined
Hidden 3 | 1024 | undefined
Hidden 4 | -1 | undefined
Hidden 5 | 0 | undefined
Solution:
#include <stdio.h>

union Data {
    int i;
    char c[4];
};

int main() {
    union Data d;
    scanf("%d", &d.i);

    for (int i = 0; i < 4; i++)
        printf("%d ", d.c[i]);

    return 0;
}
________________________________________
Problem Statement 49
Neha wants to swap two structures using pointer arithmetic
Write a program that:
● Uses array of structures
● Uses pointer arithmetic
● Swaps first and last
● Prints result
Sample Test Case 1
Input:
1 2 3
Output:
3 2 1
Sample Test Case 2
Input:
5 6 7
Output:
7 6 5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 1 1 | 1 1 1
Hidden 2 | 2 3 4 | 4 3 2
Hidden 3 | 0 1 2 | 2 1 0
Hidden 4 | -1 0 1 | 1 0 -1
Hidden 5 | 9 8 7 | 7 8 9
Solution:
#include <stdio.h>

struct Num {
    int x;
};

int main() {
    struct Num a[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i].x);

    struct Num *p = a;
    struct Num temp = *p;
    *p = *(p + 2);
    *(p + 2) = temp;

    for (int i = 0; i < 3; i++)
        printf("%d ", a[i].x);

    return 0;
}
________________________________________
Problem Statement 50
Arjun wants to pass union inside structure
Write a program that:
● Uses structure containing union
● Assigns values
● Prints correct member
Sample Test Case 1
Input:
1 10
Output:
10
Sample Test Case 2
Input:
2 5.5
Output:
5.5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 100 | 100
Hidden 2 | 2 2.2 | 2.2
Hidden 3 | 1 0 | 0
Hidden 4 | 2 0.0 | 0.0
Hidden 5 | 1 -5 | -5
Solution:
#include <stdio.h>

union Data {
    int i;
    float f;
};

struct Wrapper {
    int type;
    union Data d;
};

int main() {
    struct Wrapper w;
    scanf("%d", &w.type);

    if (w.type == 1) {
        scanf("%d", &w.d.i);
        printf("%d", w.d.i);
    } else {
        scanf("%f", &w.d.f);
        printf("%.1f", w.d.f);
    }

    return 0;
}
________________________________________
Problem Statement 51
Simran wants to use pointer to union
Write a program that:
● Uses union
● Uses pointer to union
● Assigns and prints value
Sample Test Case 1
Input:
5
Output:
5
Sample Test Case 2
Input:
10
Output:
10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | 1
Hidden 2 | 2 | 2
Hidden 3 | 3 | 3
Hidden 4 | 4 | 4
Hidden 5 | 0 | 0
Solution:
#include <stdio.h>

union Data {
    int x;
};

int main() {
    union Data d;
    union Data *ptr = &d;

    scanf("%d", &ptr->x);
    printf("%d", ptr->x);

    return 0;
}
________________________________________
Problem Statement 52
Karan wants to demonstrate structure padding
Write a program that:
● Uses structure with char and int
● Prints size of structure
Sample Test Case 1
Input:
(no input)
Output:
(implementation dependent)
Sample Test Case 2
Input:
(no input)
Output:
(implementation dependent)
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | depends
Hidden 2 | - | depends
Hidden 3 | - | depends
Hidden 4 | - | depends
Hidden 5 | - | depends
Solution:
#include <stdio.h>

struct Data {
    char c;
    int i;
};

int main() {
    printf("%lu", sizeof(struct Data));
    return 0;
}
________________________________________
Problem Statement 53
Ravi wants to access structure array using pointer
Write a program that:
● Uses array of structures
● Uses pointer
● Prints elements
Sample Test Case 1
Input:
1 2 3
Output:
1 2 3
Sample Test Case 2
Input:
4 5 6
Output:
4 5 6
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 1 1 | 1 1 1
Hidden 2 | 2 3 4 | 2 3 4
Hidden 3 | 0 0 0 | 0 0 0
Hidden 4 | -1 -2 -3 | -1 -2 -3
Hidden 5 | 9 8 7 | 9 8 7
Solution:
#include <stdio.h>

struct Num {
    int x;
};

int main() {
    struct Num a[3];
    struct Num *p = a;

    for (int i = 0; i < 3; i++)
        scanf("%d", &(p + i)->x);

    for (int i = 0; i < 3; i++)
        printf("%d ", (p + i)->x);

    return 0;
}
________________________________________
Problem Statement 54
Priya wants to mix pointer casting with structure
Write a program that:
● Uses structure
● Casts pointer to int pointer
● Prints first member
Sample Test Case 1
Input:
5
Output:
5
Sample Test Case 2
Input:
10
Output:
10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | 1
Hidden 2 | 2 | 2
Hidden 3 | 3 | 3
Hidden 4 | 4 | 4
Hidden 5 | 0 | 0
Solution:
#include <stdio.h>

struct Data {
    int x;
};

int main() {
    struct Data d;
    scanf("%d", &d.x);

    int *ptr = (int*)&d;
    printf("%d", *ptr);

    return 0;
}
________________________________________
Problem Statement 55
Amit wants to demonstrate union size
Write a program that:
● Uses union
● Prints size
Sample Test Case 1
Input:
(no input)
Output:
(max member size)
Sample Test Case 2
Input:
(no input)
Output:
(max member size)
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | depends
Hidden 2 | - | depends
Hidden 3 | - | depends
Hidden 4 | - | depends
Hidden 5 | - | depends
Solution:
#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    printf("%lu", sizeof(union Data));
    return 0;
}


Problem Statement 56
Aman wants to print enum values
Write a program that:
● Defines an enum with 3 values
● Prints all values
Sample Test Case 1
Input:
(no input)
Output:
0 1 2
Sample Test Case 2
Input:
(no input)
Output:
0 1 2
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | 0 1 2
Hidden 2 | - | 0 1 2
Hidden 3 | - | 0 1 2
Hidden 4 | - | 0 1 2
Hidden 5 | - | 0 1 2
Solution:
#include <stdio.h>

enum Day {MON, TUE, WED};

int main() {
    printf("%d %d %d", MON, TUE, WED);
    return 0;
}
________________________________________
Problem Statement 57
Riya wants to assign custom values in enum
Write a program that:
● Defines enum with custom values
● Prints them
Sample Test Case 1
Input:
(no input)
Output:
10 20 21
Sample Test Case 2
Input:
(no input)
Output:
10 20 21
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | 10 20 21
Hidden 2 | - | 10 20 21
Hidden 3 | - | 10 20 21
Hidden 4 | - | 10 20 21
Hidden 5 | - | 10 20 21
Solution:
#include <stdio.h>

enum Num {A=10, B=20, C};

int main() {
    printf("%d %d %d", A, B, C);
    return 0;
}
________________________________________
Problem Statement 58
Rahul wants to use enum in switch case
Write a program that:
● Uses enum
● Takes integer input
● Prints corresponding value
Sample Test Case 1
Input:
0
Output:
MON
Sample Test Case 2
Input:
1
Output:
TUE
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 2 | WED
Hidden 2 | 3 | INVALID
Hidden 3 | 0 | MON
Hidden 4 | 1 | TUE
Hidden 5 | 5 | INVALID
Solution:
#include <stdio.h>

enum Day {MON, TUE, WED};

int main() {
    int n;
    scanf("%d", &n);

    switch(n) {
        case MON: printf("MON"); break;
        case TUE: printf("TUE"); break;
        case WED: printf("WED"); break;
        default: printf("INVALID");
    }

    return 0;
}
________________________________________
Problem Statement 59
Neha wants to find size of enum
Write a program that:
● Uses enum
● Prints its size
Sample Test Case 1
Input:
(no input)
Output:
(implementation dependent)
Sample Test Case 2
Input:
(no input)
Output:
(implementation dependent)
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | depends
Hidden 2 | - | depends
Hidden 3 | - | depends
Hidden 4 | - | depends
Hidden 5 | - | depends
Solution:
#include <stdio.h>

enum Test {A, B, C};

int main() {
    printf("%lu", sizeof(enum Test));
    return 0;
}
________________________________________
Problem Statement 60
Karan wants to use enum variable
Write a program that:
● Uses enum variable
● Assigns value
● Prints value
Sample Test Case 1
Input:
(no input)
Output:
1
Sample Test Case 2
Input:
(no input)
Output:
1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | 1
Hidden 2 | - | 1
Hidden 3 | - | 1
Hidden 4 | - | 1
Hidden 5 | - | 1
Solution:
#include <stdio.h>

enum Day {MON, TUE, WED};

int main() {
    enum Day d = TUE;
    printf("%d", d);
    return 0;
}



Problem Statement 61
Aman wants to understand auto storage class
Write a program that:
● Uses auto variable
● Prints value
Sample Test Case 1
Input:
5
Output:
5
Sample Test Case 2
Input:
10
Output:
10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | 1
Hidden 2 | 2 | 2
Hidden 3 | 3 | 3
Hidden 4 | 4 | 4
Hidden 5 | 0 | 0
Solution:
#include <stdio.h>

int main() {
    auto int x;
    scanf("%d", &x);
    printf("%d", x);
    return 0;
}
________________________________________
Problem Statement 62
Riya wants to understand static variable behavior
Write a program that:
● Uses static variable
● Calls function twice
● Prints values
Sample Test Case 1
Input:
(no input)
Output:
1 2
Sample Test Case 2
Input:
(no input)
Output:
1 2
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | 1 2
Hidden 2 | - | 1 2
Hidden 3 | - | 1 2
Hidden 4 | - | 1 2
Hidden 5 | - | 1 2
Solution:
#include <stdio.h>

void func() {
    static int x = 0;
    x++;
    printf("%d ", x);
}

int main() {
    func();
    func();
    return 0;
}
________________________________________
Problem Statement 63
Rahul wants to use register variable
Write a program that:
● Uses register variable
● Prints value
Sample Test Case 1
Input:
5
Output:
5
Sample Test Case 2
Input:
10
Output:
10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 | 1
Hidden 2 | 2 | 2
Hidden 3 | 3 | 3
Hidden 4 | 4 | 4
Hidden 5 | 0 | 0
Solution:
#include <stdio.h>

int main() {
    register int x;
    scanf("%d", &x);
    printf("%d", x);
    return 0;
}
________________________________________
Problem Statement 64
Neha wants to demonstrate extern variable
Write a program that:
● Uses extern variable
● Prints value
Sample Test Case 1
Input:
(no input)
Output:
10
Sample Test Case 2
Input:
(no input)
Output:
10
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | 10
Hidden 2 | - | 10
Hidden 3 | - | 10
Hidden 4 | - | 10
Hidden 5 | - | 10
Solution:
#include <stdio.h>

int x = 10;

int main() {
    extern int x;
    printf("%d", x);
    return 0;
}
________________________________________
Problem Statement 65
Karan wants to compare static and auto variables
Write a program that:
● Uses static and auto
● Calls function twice
● Prints values
Sample Test Case 1
Input:
(no input)
Output:
1 1
2 1
Sample Test Case 2
Input:
(no input)
Output:
1 1
2 1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | - | same
Hidden 2 | - | same
Hidden 3 | - | same
Hidden 4 | - | same
Hidden 5 | - | same
Solution:
#include <stdio.h>

void func() {
    static int s = 0;
    auto int a = 0;

    s++;
    a++;

    printf("%d %d\n", s, a);
}

int main() {
    func();
    func();
    return 0;
}
Aman wants to allocate memory for n integers using malloc
Write a program that:
● Reads size n
● Allocates memory using malloc
● Reads n integers
● Prints them
Sample Test Case 1
Input:
3
1 2 3
Output:
1 2 3
Sample Test Case 2
Input:
4
5 6 7 8
Output:
5 6 7 8
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 1 2
Hidden 3 | 3 → 3 3 3 | 3 3 3
Hidden 4 | 3 → 0 0 0 | 0 0 0
Hidden 5 | 5 → 1 2 3 4 5 | 1 2 3 4 5
Solution:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
________________________________________
Problem Statement 66
Riya wants to find sum using calloc
Write a program that:
● Reads size n
● Allocates memory using calloc
● Reads n integers
● Prints sum
Sample Test Case 1
Input:
3
1 2 3
Output:
6
Sample Test Case 2
Input:
4
5 5 5 5
Output:
20
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 3
Hidden 3 | 3 → 3 3 3 | 9
Hidden 4 | 3 → 0 0 0 | 0
Hidden 5 | 5 → 1 1 1 1 1 | 5
Solution:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    free(arr);
    return 0;
}
________________________________________
Problem Statement 67
Rahul wants to resize array using realloc
Write a program that:
● Reads initial size n
● Allocates memory
● Reads n elements
● Reads new size m
● Resizes array using realloc
● Reads additional elements
● Prints all elements
Sample Test Case 1
Input:
2
1 2
4
3 4
Output:
1 2 3 4
Sample Test Case 2
Input:
3
5 6 7
5
8 9
Output:
5 6 7 8 9
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 → 2 → 6 | 5 6
Hidden 2 | 2 → 1 2 → 3 → 3 | 1 2 3
Hidden 3 | 3 → 3 3 3 → 5 → 1 1 | 3 3 3 1 1
Hidden 4 | 2 → 0 0 → 4 → 0 0 | 0 0 0 0
Hidden 5 | 1 → 1 → 1 | 1
Solution:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &m);

    arr = (int*)realloc(arr, m * sizeof(int));

    for (int i = n; i < m; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < m; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
________________________________________
Problem Statement 68
Neha wants to find maximum using dynamic array
Write a program that:
● Reads size n
● Uses malloc
● Reads n integers
● Finds maximum
● Prints result
Sample Test Case 1
Input:
3
1 5 2
Output:
5
Sample Test Case 2
Input:
4
-1 -2 -3 -4
Output:
-1
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 2
Hidden 3 | 3 → 3 3 3 | 3
Hidden 4 | 3 → 0 -1 -2 | 0
Hidden 5 | 5 → 1 2 10 4 5 | 10
Solution:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("%d", max);

    free(arr);
    return 0;
}
________________________________________
Problem Statement 69
Karan wants to reverse array using dynamic memory
Write a program that:
● Reads size n
● Allocates memory
● Reads elements
● Reverses array
● Prints result
Sample Test Case 1
Input:
3
1 2 3
Output:
3 2 1
Sample Test Case 2
Input:
4
5 6 7 8
Output:
8 7 6 5
Hidden Test Cases
Test Case | Input | Output
Hidden 1 | 1 → 5 | 5
Hidden 2 | 2 → 1 2 | 2 1
Hidden 3 | 3 → 3 3 3 | 3 3 3
Hidden 4 | 3 → 0 1 0 | 0 1 0
Hidden 5 | 5 → 1 2 3 4 5 | 5 4 3 2 1
Solution:
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}

