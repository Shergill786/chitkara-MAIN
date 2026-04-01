
#include<stdio.h>
int *p(int n){
	static int a[20];
	int s=0;
	for(int i=0;i<n;i++){
		a[i]=s;
		s=s+2;
		
	}
	return a;
}
int main(){
	int n,*a;
	scanf("%d",&n);
	a=p(n);
	for(int i=0;i<n;i++){
		printf("%d",*(a+i));
	}
}
