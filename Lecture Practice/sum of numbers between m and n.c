#include<stdio.h>
int main(){
	int m,n,i,sum=0;
	printf("Enter a positive number m:");
	scanf("%d",&m);
	printf("Enter a positive number n:");
	scanf("%d",&n);
	for(i=m;i<=n;i++){
		sum=sum+i;
	}
	printf("Sum=%d",sum);
}
