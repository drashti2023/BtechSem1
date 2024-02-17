#include<stdio.h>
int main(){
	int a,b,c,multiply;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	
	
	multiply=(a>b)?(a*c):(b*c);
	printf("%d",multiply);	
	}
