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




//1 2 3 4
