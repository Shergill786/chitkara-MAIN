
#include <stdio.h>
int main() {
    char firstName[20], lastName[20];
    printf("Enter your first name and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("Full name: %s %s\n", firstName, lastName);
    return 0;
}