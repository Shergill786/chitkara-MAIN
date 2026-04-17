#include <stdio.h>
int main() {
    char a[27];   // 26 letters + 1 for '\0'
    char *p = a;
    for (int i = 0; i < 26; i++) {
        *p = 'A' + i;
        p++;
    }
    a[26] = '\0';
    printf("%s", a);
    return 0;
}

