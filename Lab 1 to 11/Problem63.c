#include<stdio.h>
int main(){
	int n,i=1,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count++;
		}i=i+1;
	}
	if(count==2){
		printf("Prime number");
	}else{
		printf("Not prime number");
	}
}
