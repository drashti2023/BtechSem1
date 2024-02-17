#include<stdio.h>
void findMaxMin(int n1,int n2,int *max,int *min){
	if(n1>n2){
		*max=n1;
		*min=n2;
	}
	else{
		*max=n2;
		*min=n1;
	}
}
int main(){
	int n1=4;
	int n2=10;
	int max,min;
	findMaxMin(n1,n2,&max,&min);
	
	printf("Maximum:%d\n",max);
	printf("Minimum:%d\n",min);
	return 0;
}
