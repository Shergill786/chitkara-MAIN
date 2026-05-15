
#include <stdio.h>
int main() {
    int n = 5;
    printf("Fibonacci series up to %d terms: ", n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n) {
    if (n <= 0) return;
    if (n == 1) {
        printf("0\n");
        return;
    }
    if (n == 2) {
        printf("0 1\n");
        return;
    }
    int a = 0, b = 1;
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

