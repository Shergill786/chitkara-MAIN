// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a == b)
//         printf("Equal");
//     else
//         printf("Not Equal");

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);

//     if (a < b)
//         printf("%d", a);
//     else
//         printf("%d", b);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int costPrice, sellingPrice;
//     scanf("%d", &costPrice);
//     scanf("%d", &sellingPrice);

//     if (sellingPrice > costPrice) {
//         printf("Profit\n");
//         printf("%d", sellingPrice - costPrice);
//     } else if (sellingPrice < costPrice) {
//         printf("Loss\n");
//         printf("%d", costPrice - sellingPrice);
//     } else {
//         printf("No Profit No Loss");
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, rev = 0, temp;
//     scanf("%d", &n);

//     temp = n;
//     while (temp > 0) {
//         rev = rev * 10 + (temp % 10);
//         temp /= 10;
//     }

//     if (rev == n)
//         printf("Equal");
//     else
//         printf("Not Equal");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char c;
//     scanf("%c", &c);

//     if (c >= 'A' && c <= 'Z')
//         printf("UPPER CASE");
//     else if (c >= 'a' && c <= 'z')
//         printf("lower case");
//     else if (c >= '0' && c <= '9')
//         printf("Digit");
//     else
//         printf("Special character");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int m;
//     scanf("%d", &m);

//     if (m >= 75)
//         printf("A");
//     else if (m >= 60)
//         printf("B");
//     else if (m >= 55)
//         printf("C");
//     else if (m >= 50)
//         printf("D");
//     else
//         printf("E");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     if (a < b && a < c)
//         printf("%d", a);
//     else if (b < a && b < c)
//         printf("%d", b);
//     else
//         printf("%d", c);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     if (a + b > c && a + c > b && b + c > a)
//         printf("Valid");
//     else
//         printf("Not Valid");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     if (n > 0)
//         printf("positive");
//     else if (n < 0)
//         printf("negative");
//     else
//         printf("zero");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     if (n % 5 == 0 && n % 7 == 0)
//         printf("yes");
//     else
//         printf("no");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char ch;
//     scanf(" %c", &ch);

//     if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//         printf("yes");
//     else
//         printf("no");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[10];
//     int sum = 0;

//     for (int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[10];
//     int positive = 0, negative = 0, even = 0, odd = 0;

//     for(int i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);

//         if(arr[i] > 0)
//             positive++;
//         else if(arr[i] < 0)
//             negative++;

//         if(arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     printf("%d\n", positive);
//     printf("%d\n", negative);
//     printf("%d\n", even);
//     printf("%d\n", odd);

//     return 0;
// }