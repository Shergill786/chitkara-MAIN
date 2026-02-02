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

//     float a, b;
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
// printf("Enter salary: ");
// scanf("%d", &sal);
// printf("Enter grocery expense: ");
// scanf("%d", &gro);
// printf("Enter electricity expense: ");
// scanf("%d", &ele);
// printf("Enter vehicle expense: ");
// scanf("%d", &veh);
// printf("Enter loan expense: ");
// scanf("%d", &loan);
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