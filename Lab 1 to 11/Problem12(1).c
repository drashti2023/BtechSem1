#include<stdio.h>
int main(){
	int a,b,c;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d",a,b);
	
}
