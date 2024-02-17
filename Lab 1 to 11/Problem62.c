#include<stdio.h>
int main(){
	int n,sum,avg,count=0;
	printf("Enter 0 to stop the program=\n");
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		sum=sum+n;
		count++;
	}
	avg=sum/count;
	printf("Sum=%d and Avg=%d",sum,avg);
}
