// // use loop 1-n num sum

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//    printf("%d",sum);
// }


// using recursion

// #include <stdio.h>
// int sum(int n){
//     if (n==0){
//         return 0;
//     }
//     int s=n+sum(n-1);
//     return s;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d",sum(n));
// }



// //fibonic series using recursion

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
//     scanf("%d",&n);
//     scanf("%d",&a);
//     scanf("%d",&b);
//     for(int i=0;i<n;i++){
//         printf("%d ",fib(i,a,b));
//     }   
// }

// // user input 925 using recurison find sum
// #include <stdio.h>
// int sum(int n){
//     if (n==0){
//         return 0;
//     }
//     int s=n%10+sum(n/10);
//     return s;
// }
// int main(){
//     int n = 925;
//     printf("%d",sum(n));
// }


//  a^b using recursion
// #include <stdio.h>
// int fun(int a,int b){
//     if (b==0){
//         return 1;
//     }
//     int p=a*fun(a,b-1);
//     return p;
// }
// int main(){
//     int a,b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     printf("%d",fun(a,b));
// }


