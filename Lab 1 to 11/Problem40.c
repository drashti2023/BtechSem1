#include<stdio.h>
int main(){
	int n1,n2,equal;
	printf("Enter the first number:");
	scanf("%d",&n1);
	printf("Enter the second number:");
	scanf("%d",&n2);
	
	equal=(n1==n2)?1:0;
	
	if(equal){
		printf("The numbers are equal\n");
	}
	else{
		printf("The numbers are not equal\n");
	}
}
