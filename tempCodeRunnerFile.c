
#include <stdio.h>
int main() {
    char a[13];
    printf("Enter a number: ");
    scanf("%13[+-123456789]s", a);
    printf("You entered: %s\n", a);
    return 0;
}

