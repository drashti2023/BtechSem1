#include<stdio.h>
int main(){
	int A,B,C;
	printf("Enter an angle A:");
	scanf("%d",&A);
	printf("Enter an angle B:");
	scanf("%d",&B);
	printf("Enter an angle C:");
	scanf("%d",&C);
	
	if(A==B==C)
	{

		printf("Triangle is equilateral");
		
	}
	else
	{
		if((A==B!=C)||(A=C!=B)||(B==C!=A))
		{
			printf("Triangle is isoceles");
		}
		else
		{
			printf("Triangle is scalene");
		}
	}
}
