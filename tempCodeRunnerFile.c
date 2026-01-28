#include <stdio.h>
int main() {
    int num;
    printf("Enter number of vehicles: ");
    scanf("%d", &num);
    if (num>50){
        printf("geen\n");
    }
    else if (num>=30 & num<=50){
        printf("yellow\n");
    }
    else if (num>0 & num<30){
        printf("red\n");
    }
    else {
        printf("not valid\n");
    }

}