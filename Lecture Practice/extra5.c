#include<stdio.h>
int main (){
	int a,number;
	printf("Enter a number:");
	scanf("%d",&a);
	
	number=(((a%2!=0)&&(a>50))?printf("condition fullfilled"):printf("not");
	printf("%d",number);
}
	
