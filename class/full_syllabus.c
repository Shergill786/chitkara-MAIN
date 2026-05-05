// // factorial function
// #include <stdio.h>
// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int f=n*fact(n-1);
//     return f;
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     int result=fact(n);
//     printf("factorial of %d is %d\n",n,result);
// }


// // check even odd
// #include <stdio.h>
// int even_odd(int n){
//     if (n%2==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     if (even_odd(n)){
//         printf("%d is even\n",n);
//     }
//     else{
//         printf("%d is odd\n",n);
//     }
// }


// // diameter , area of circle function
// #include <stdio.h>
// #define PI 3.14
// float diameter(float r){
//     return 2*r;
// }
// float area(float r){
//     return PI*r*r;
// }
// int main(){
//     float r;
//     printf("enter the radius of circle: ");
//     scanf("%f",&r);
//     printf("diameter of circle is %.2f\n",diameter(r));
//     printf("area of circle is %.2f\n",area(r));
// }


// // max ,min of 3 numbers
// #include <stdio.h>
// int max(int a,int   b,int c){
//     if (a>=b && a>=c){
//         return a;
//     }
//     else if (b>=a && b>=c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }
// int main(){
//     int a, b, c;
//     printf("enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("maximum of %d, %d and %d is %d\n", a, b, c, max(a, b, c));
//     return 0;
// }

// // prime nos
// #include <stdio.h>
// int is_prime(int n){
//     if (n<=1){
//         return 0;
//     }
//     for (int i=2; i*i<=n; i++){
//         if (n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     if (is_prime(n)){
//         printf("%d is prime\n",n);
//     }
//     else{
//         printf("%d is not prime\n",n);
//     }
//     return 0;
// }

// // armstrong no
// #include <stdio.h>
// int is_armstrong(int n){
//     int original=n;
//     int sum=0;
//     while (n>0){
//         int digit=n%10;
//         sum+=digit*digit*digit;
//         n/=10;
//     }
//     return sum==original;
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     if (is_armstrong(n)){
//         printf("%d is an armstrong number\n",n);
//     }
//     else{
//         printf("%d is not an armstrong number\n",n);
//     }
//     return 0;
// }


// // factorial using recursion
// #include <stdio.h>
// int fact(int n){
//     if (n==0){
//         return 1;
//     }
//     int f=n*fact(n-1);
//     return f;
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     int result=fact(n);
//     printf("factorial of %d is %d\n",n,result);
// } 

// // prime factors 
// #include <stdio.h>
// void prime_factors(int n){
//     for (int i=2; i*i<=n; i++){
//         while (n%i==0){
//             printf("%d ",i);
//             n/=i;
//         }
//     }
//     if (n>1){
//         printf("%d ",n);
//     }
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     printf("prime factors of %d are: ",n);
//     prime_factors(n);
//     return 0;
// }

// // sum of digits using recursion
// #include <stdio.h>
// int sum(int n){
//     if (n==0){
//         return 0;
//     }
//     int s=n%10+sum(n/10);
//     return s;
// }
// int main(){
//     int n;
//     printf("enter the number: ");
//     scanf("%d",&n);
//     printf("sum of digits of %d is %d\n",n,sum(n));
//     return 0;
// }

// // fibonacci series using recursion
// #include <stdio.h>
// int fib(int n ,int a,int b  ){
//     if (n==0){
//         return a;
//     }
//     if (n==1){
//         return b;
//     }   

//     int f=fib(n-1,a,b)+fib(n-2,a,b);
//     return f;
// }
// int main(){
//     int n,a,b;
//     printf("enter the number of terms: ");
//     scanf("%d",&n);
//     printf("enter the first two terms: ");
//     scanf("%d %d",&a,&b);
//     printf("fibonacci series: ");
//     for(int i=0;i<n;i++){
//         printf("%d ",fib(i,a,b));
//     }   
//     return 0;
// }


int fact(int n){
    if (n==0){
        return 1;
    
    }
    int f =n*fact(n-1);
    return f

}


int fact(int n){
    if(n==0){
        return 1;
    }
    int f=n*fact(n-1);
    return f
}

void check(int n){
    if (n%2==0){
        printf("even")
    }
    else{
        printf("odd")
    }
}

int prime(int n){
    if (n<=1){
        return 0;
    }
    for (int i=0;i*i<=n;i++){
        if (n%i==0){
            return 0;
        }

    }
    return 1;
}

int prime(int n){
        for (int i=0;i*i<=n;i++){
            while(n%i==0){
                printf(i);
                n/=i;
            }
        }
    }


int sum(int n){
    if (n==0){
        return 0;
    }
    int s=n%10+sum(n/10);
    return s;
}