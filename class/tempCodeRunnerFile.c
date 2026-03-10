#include <stdio.h>
int add(int num1, int num2) {
    return num1 + num2;
}
int diff(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
int divide(int num1, int num2) {
    return num1 / num2;
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = add(num1, num2);
    int difference = diff(num1, num2);
    int product = multiply(num1, num2);
    int division = divide(num1, num2);
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %d\n", division);
    
    return 0;
}