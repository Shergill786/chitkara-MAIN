nclude <stdio.h>
int main(){
    int *n;
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr + 4;
    for (int i=0;i<5;i++){
        printf("%d ",*p);
        p--;
    }
    return 0;
}