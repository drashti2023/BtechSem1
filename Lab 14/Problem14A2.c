#include<stdio.h>
int main(){
	int n,arr[n],i,posCount=0,negCount=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			posCount++;
		}else if(arr[i]<0){
			negCount++;
		}
	}
	printf("Number of Positive Numbers:%d\n",posCount);
	printf("Number of Negative Numbers:%d\n",negCount);
	return 0;
	
}

