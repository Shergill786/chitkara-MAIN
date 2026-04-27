#include <stdio.h>
int main() {
    FILE *p;
    char ch;
    p = fopen("c.text", "w");
    printf("Enter a character: ");
    scanf("%c", &ch);
    fputc('t', p);
    fclose(p);
    return 0;
}