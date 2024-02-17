#include<stdio.h>
int main(){
	float p,r,t;
	
	printf("Enter the principal amount:");
	scanf("%f",&p);
	
	printf("Enter the rate of interest:");
	scanf("%f",&r);
	
	printf("Enter the time period:");
	scanf("%f",&t);
	
	printf("Simple Interest=%f",(p*r*t)/100);
}
