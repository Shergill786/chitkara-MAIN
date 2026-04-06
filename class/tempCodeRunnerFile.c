#include <stdio.h>
int main(){
int num=1234;
int arr[10];
int count=0;
int temp=num;

while(temp>0){
    arr[count]=temp%10;
    count++;
    temp/10;

}
for (int i=count-1;i>=0;i--){
    printf("%d",arr[i]);
}
}