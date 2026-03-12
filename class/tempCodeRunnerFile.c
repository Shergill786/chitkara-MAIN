include <stdio.h>
inline int multiply(int a, int b) {
    int c = a * b;
     return c;
}
int main() {
    int c;
    c = multiply(5, 10);
    printf("Product: %d\n", c);
    return 0;
}