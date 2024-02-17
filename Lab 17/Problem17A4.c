#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter values of num1 and num2:\n");
	scanf("%d %d",&num1,&num2);
	printf("Before swapping: num1 = %d, num2 = %d\n",num1,num2);
	int *ptr1=&num1;
	int *ptr2=&num2;
	int temp = *ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	printf("After swapping :num1 = %d, num2 = %d\n",num1,num2);
	
}
	
