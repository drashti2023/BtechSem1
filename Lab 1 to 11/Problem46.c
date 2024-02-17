#include<stdio.h>
void main(){
	int i=1,n,even=0,odd=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("\nEven number:");
	while(i<=n){
		if(i%2==0){
			printf("%d",i);
			even++;
		}
		i++;
	}
	printf("\nOdd number:");
	i=1;
	while(i<=n){
		if(i%2==1){
			printf("%d",i);
			odd++;
		}i++;
		
	}
	printf("\nTotal even number=%d",even);
	printf("\nTotal odd number=%d",odd);
	
}
