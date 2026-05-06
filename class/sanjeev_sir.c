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


// no input 121 check palindrome or not using recursion

// #include <stdio.h>

// int reverse(int n){
//     int temp = 0;
//     while(n > 0){
//         temp = temp * 10 + n % 10;
//         n = n / 10;
//     }
//     return temp;
// }

// void check(int n){
//     if(n == reverse(n)){
//         printf("yes");
//     } else {
//         printf("no");
//     }
// }
// int main(){
//     int n = 121;
//     check(n);
// }


// array ko pass krna h using pointers
// #include <stdio.h>
// void fun(int *a,int n){
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }
// int main(){
//     int a[5]={1,2,3,4,5};
//     fun(a,5);
// }


// arr ko pointer se print krna h simple 
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//      int *p = arr;
//      for (int i = 0; i < 5; i++)
//          printf("%d ", *(p + i));
// }


// pointer to array 
// int main(){
// int arr[5]={1,2,3,4,5};
//      int (*p)[5] = &arr;
//      for (int i = 0; i < 5; i++)
//          printf("%d ", (*p)[i]);
// }


// array of pointer
// #include <stdio.h>
// int main(){
// int a=10,b=20,c=30;
// int *p[3]={&a,&b,&c};
// for (int i=0;i<3;i++){
//     printf("%d",*p[i]);
// }
// }

// #include <stdio.h>
// int sum(int *a,int *b){
//     *a+=*b;
//     return *a;
// }
// int main(){
//     int x=10,y=20;
//     sum(&x,&y);
//     printf("%d",x);
// }


// max using pointer
// #include <stdio.h>
// int max(int *a,int *b){
//     if (*a>*b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     int x=1,y=2;
//     int *p;
//     p = max(&x,&y);
//     printf("%d",*p);
// }


// function pointers is used to point to a function and call it through the pointer
// #include <stdio.h>
// int fun(int a,int b){
//     return a+b;
// }
// int main(){
//     int (*p)(int, int) ;
//     p = fun;
//     printf("%d", p(1, 2));
// }


// int main(){
//     int *p = (int *)malloc(3*sizeof(int));
//     for(int i=0;i<3;i++){
//         scanf("%d",p+i);
//     }
//     for(int i=0;i<3;i++){
//         printf("%d ",*(p+i));
//     }}

// #include <stdio.h>
// int main(){
// int *p = (int *)calloc(3, sizeof(int));
// for(int i=0;i<3;i++){
//     scanf("%d",p+i);
// }
// for(int i=0;i<3;i++){
//     printf("%d ",*(p+i));
// }
// }

// realloc
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p = (int *)malloc(3*sizeof(int));
//     for(int i=0;i<3;i++){
//         scanf("%d",p+i);
//     }
//     p = (int *)realloc(p, 5*sizeof(int));
//     for(int i=3;i<5;i++){
//         scanf("%d",p+i);
//     }
//     for(int i=0;i<5;i++){
//         printf("%d ",*(p+i));
//     }
// }


// struction says combine mutliple type of this in a single file
// struc is user defined data type 

// #include <stdio.h>
// struct student{
//     char name[50];
//     int age;
//     float marks;
// };
// int main(){
//     struct student o1={"jassi",20,90.5};
//     struct student o2={.age=20,.marks=90.5,.name="jassi"};
//     printf("%d",o1.age);
//     printf("%d",o2.age);
// }


// struct s o3=o1; // copy of o1 in o3

// #include <stdio.h>
// struct student{
//     char name[50];
//     int age;
//     float marks;
// };
// int main(){
//     struct student o1;
//     scanf("%d",&o1.age);
//     printf("%d",o1.age);
// }

// array of struct

// #include <stdio.h>
//     struct student{
//         char name[50];
//         int age;
//         float marks;
//     };
//     int main(){
//     struct student o[3];
    
//     for (int i = 0; i < 3; i++) {
//         printf("enter age %d: ", i + 1);
//         scanf("%d", &o[i].age);
//     }
//     for (int i = 0; i < 3; i++) {
//         printf("%d ", o[i].age);
//     }
// }


// passing struct to function
// #include <stdio.h>
// struct student{
//     char name[50];
//     int age;
//     float marks;
// };
// void fun(struct student s){
//     printf("%d",s.age);
// }
// int main(){
//     struct student s1={"jassi",20,90.5};
//     fun(s1);
// }


// struct meh 5 bche ke marks ka toptal print

// #include <stdio.h>
// struct student{
//     float marks;
// };
// void sum(struct student s[],int n){
//     float sum = 0;
//     for (int i=0;i<n;i++){
//         sum+=s[i].marks;
//     }
//     printf("Sum %.2f", sum);
// }
// int main(){
//     struct student s1[5];
//     for (int i=0;i<5;i++){
//         printf("marks %d: ", i+1);
//         scanf("%f",&s1[i].marks);
//     }
//     sum(s1,5);
// }


