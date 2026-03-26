
#include <stdio.h>
int main() {
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    char *ptr = alphabet;  
    
    printf("All lowercase alphabets using pointers:\n");
    while (*ptr != '\0') { 
        printf("%c ", *ptr);  
        ptr++;  
    }
    printf("\n\n");

    printf("\n");    
    return 0;
}

