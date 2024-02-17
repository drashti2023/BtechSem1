#include<stdio.h>
int main(){
	int i,j,sum=0,n,innerSum;
	printf("Enter value of n:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		innerSum=0;
		for(j=1;j<=i;j++){
			innerSum+=j;
		}
		sum+=innerSum;
	}
	printf("The sum of the sequence = %d\n",sum);
}
