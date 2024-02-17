#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int sum=0;
	int sign=1;
	int i=1;
	
	while(i<=n){
		sum+=sign*i;
		sign*=-1;
		i++;
	}
	printf("The sum of the series is:%d\n",sum);
	return 0;
}
