#include<stdio.h>
int main(){
	int n,arr[n],i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Normal Order:");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\nReverse order:");
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}


