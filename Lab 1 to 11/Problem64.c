#include<stdio.h>
void printDigits(int n){
	if(n==0){
		return;
	}
	printDigits(n/10);
	int digit=n%10;
	printf(" %d",digit);
}
int main(){
	int n,digit;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Digits of the number are:");
	printDigits(n);
	}
	
