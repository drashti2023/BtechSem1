#include<stdio.h>
int main(){
	int a,b,c;
	float d;
	printf("Enter a \n");
	scanf("%d",&a);
	printf("Enter b \n");
	scanf("%d",&b);
	printf("Enter c \n");
	scanf("%d",&c);
	d=(a+b+c)/3;
	printf("Average of a,b,c is %f",d);
	return 0;
}
