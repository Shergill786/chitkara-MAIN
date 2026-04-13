
#include <stdio.h>
int main(){
    struct complex{
        int real;
        int img;
    };
        struct complex a,b,c;
        printf("enter real and img part of a");
        scanf("%d %d",&a.real,&a.img);
        printf("enter real and img part of b");
        scanf("%d %d",&b.real,&b.img);
        c.real=a.real+b.real;
        c.img=a.img+b.img;
        printf("sum of complex number is %d + %di",c.real,c.img);
        
        return 0;

    }