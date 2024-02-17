#include<stdio.h>
int main(){
	int n,i;
	double e=1.0;
	double factorial=1.0;
	
	printf("Enter the number of terms to estimate e:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		factorial*=i;
		e+=1.0/factorial;
	}
	printf("%lf\n",e);
}
