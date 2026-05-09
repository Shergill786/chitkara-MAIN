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


// #include <stdio.h>

// struct Student {
//     char name[50];
//     int marks[3];
//     float percentage;
// };

// int main() {

//     struct Student s[3], temp;
//     int sum;

//     // Input
//     for (int i = 0; i < 3; i++) {

//         sum = 0;

//         printf("\nEnter student name: ");
//         scanf("%s", s[i].name);
//         for (int j = 0; j < 3; j++) {
//             printf("Enter marks of subject %d: ", j + 1);
//             scanf("%d", &s[i].marks[j]);
//            sum += s[i].marks[j];
//         }
//         s[i].percentage = sum / 3.0;
//     }
//     // Sorting by percentage (highest first)
//     for (int i = 0; i < 3; i++) {
//         for (int j = i + 1; j < 3; j++) {
//             if (s[j].percentage > s[i].percentage) {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     // Display ranks
//     printf("\n--- Student Rankings ---\n");
//     for (int i = 0; i < 3; i++) {
//         printf("\nRank %d", i + 1);
//         printf("\nName: %s", s[i].name);
//         printf("\nPercentage: %.2f%%\n", s[i].percentage);
//     }
//     return 0;
// }


// #include <stdio.h>
// struct Student {
//     char name[50];
//     int age;
//     float marks;
// };
// union Students {
//     char name[50];
//     int age;
//     float marks;
// };
// int main() {
//     union Students o;
//     printf("Enter name: ");
//     scanf("%s", o.name);
//     printf("Enter age: ");
//     scanf("%d", &o.age);
//     printf("Enter marks: ");
//     scanf("%f", &o.marks);

//     struct Student o1;
//     o1.age=20;
//     o1.marks=90.5;
//     strcpy(o1.name, "asd");

//     printf("Size of union Students: %lu bytes\n", sizeof(union Students));
//     printf("Size of struct Student: %lu bytes\n", sizeof(struct Student));
// }


// sizeof (struct student) // size of struct student
// sizeof (union student) // size of union student


// #include <stdio.h>  
// enum abc {red,green,blue};
// int main(){
//     enum abc color;
//     color = blue;
//     printf("%d",color);
// }


// use switch case
// #include <stdio.h>
// enum abc {red,green,blue};
// typedef int myInt;
// myInt main(){
//     enum abc color = green;
//     switch(color){
//         case red:
//             printf("Red");
//             break;
//         case green:
//             printf("Green");
//             break;
//         case blue:
//             printf("Blue");
//             break;
//     }
// }


//  structure bnao by using typedef
// #include <stdio.h>
// typedef struct {
//     char name[50];
//     int age;
//     float marks;
// } student;
// int main() {
//     student s1;
//     printf("Enter name: ");
//     scanf("%s", s1.name);
//     printf("Enter age: ");
//     scanf("%d", &s1.age);
//     printf("Enter marks: ");
//     scanf("%f", &s1.marks);

//     printf("\nName: %s", s1.name);
//     printf("\nAge: %d", s1.age);
//     printf("\nMarks: %.2f\n", s1.marks);

//     return 0;
// }

// by using array of pointers
// #include <stdio.h>
// struct student {
//     char name[50];
//     int Rollno;
//     float marks;
// };
// int main() {
//     struct student s1, s2, s3, s4, s5;
//     struct student *ptr[5] = {&s1, &s2, &s3, &s4, &s5};

//     for (int i = 0; i < 2; i++) {
//         printf("Enter name: ");
//         scanf("%s", (*(ptr[i])).name);
//         printf("Enter Roll no: ");
//         scanf("%d", &(*(ptr[i])).Rollno);
//         printf("Enter marks: ");
//         scanf("%f", &(*(ptr[i])).marks);
//     }

//     for (int i = 0; i < 2; i++) {
//         printf("\nName: %s", (*(ptr[i])).name);
//         printf("\nRollno: %d", (*(ptr[i])).Rollno);
//         printf("\nMarks: %.2f\n", (*(ptr[i])).marks);
//     }
    
//     struct student *temp;
//     for (int i = 0; i < 2; i++) {
//         for (int j = i + 1; j < 2; j++) {
//             if ((*(ptr[j])).marks > (*(ptr[i])).marks) {
//                 temp = ptr[i];
//                 ptr[i] = ptr[j];
//                 ptr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 2; i++) {
//         printf("\nRank %d", i + 1);
//         printf("\nName: %s", (*(ptr[i])).name);
//         printf("\nRollno: %d", (*(ptr[i])).Rollno);
//         printf("\nMarks: %.2f\n", (*(ptr[i])).marks);
//     }

//     return 0;
// }


// using array of struct and function
// #include <stdio.h>
// struct student {
//     char name[50];
//     int Rollno;
//     float marks;
// };
// void input(struct student s[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("Enter name: ");
//         scanf("%s", s[i].name);
//         printf("Enter Roll no: ");
//         scanf("%d", &s[i].Rollno);
//         printf("Enter marks: ");
//         scanf("%f", &s[i].marks);
//     }
// }
// void display(struct student s[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("\nName: %s", s[i].name);
//         printf("\nRollno: %d", s[i].Rollno);
//         printf("\nMarks: %.2f\n", s[i].marks);
//     }
// }
// void sort(struct student s[], int n) {
//     struct student temp;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (s[j].marks > s[i].marks) {
//                 temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
// }
// int main() {
//     struct student s[5];
//     int n = 5;
//     input(s, n);
//     display(s, n);
//     sort(s, n);
//     display(s, n);
//     return 0;
// }

//  array se largeest element find krna h without using index 
// #include <stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int *p =arr;
//     int max = *p;
//     for (int i=1;i<=5;i++){
//         if (*p>max){
//             max = *p;
//         }
//            p++;
//     }
//     printf("%d", max);
// }

// *(p+i)+j
//  3x3 matrix isme se pointer ka use krke column ka sum find krna h without isng arr[i][j]
// #include <stdio.h>
// int main(){
//     int sum=0;
//     int arr[3][3]={{1,2,3},
//          {4,5,6},
//          {7,8,9}};
//     int *p = &arr[0][0];
//     for (int j=0;j<3;j++){
//         for (int i=0;i<3;i++){
//             sum += *(p + i)+ j;
//         }
//         printf("%d\n", sum);
//     }
// }

// string reverse using pointers without using strrev function 
// #include <stdio.h>
// #include <string.h>
// int main(){
// char str[] = "hello";
// int len = strlen(str);
// char *p1 = str;
// char *p2 = str + len - 1;
// for (int i = 0; i < len / 2; i++) {
//     char temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
//     p1++;
//     p2--;
// }
// printf("%s", str);
// }


// arr h 5 element vo strings h pointers se print aur sbse lamba string find krna h and print 
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char arr[5][20] = {"hello", "hi", "bye", "seeyou", "nice"};
//     int max = 0;
//     char *longest = arr[0];
//     for (int i = 0; i < 5; i++) {
//         if (strlen(arr[i]) > max) {
//             max = strlen(arr[i]);
//             longest = arr[i];
//         }
//     }
//     printf("%s", longest);
// }


// vowels, space count by using pointers 

// convert uppercase to lowercase using pointers

// 2x3 array 11,12,13,14,15,16 elements print ,address , transpose of matrix using pointers

// students ke name add krne ke liye array  display krne ke liye bhi pointer and marks prints max marks wale ka name print 
// search by roll no only by using pointers in array of struct

