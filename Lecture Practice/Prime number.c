#include<stdio.h>
int main(){
	int n,i=2,flag=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(i<=n/2){
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0){
		printf("\nPrime number");
	}else{
		printf("\nNot a prime number");
	}
}
