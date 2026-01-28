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
#include <stdio.h>
int main() {
    int num;
    printf("Enter number of vehicles: ");
    scanf("%d", &num);
    if (num>50){
        printf("geen\n");
    }
    else if (num>=30 & num<=50){
        printf("yellow\n");
    }
    else if (num>=0 & num<30){
        printf("red\n");
    }
    else {
        printf("not valid\n");
    }

}