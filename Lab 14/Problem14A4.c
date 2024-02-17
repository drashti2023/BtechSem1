#include<stdio.h>
int main(){
	int n,max,min,sum=0,i;
	float avg;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
		if(i==0){
			max=arr[i];
			min=arr[i];
		}else{
			if(arr[i]>max){
				max=arr[i];
			}if(arr[i]<min){
				min=arr[i];
			}
}
	}
	printf("Maximum:%d\n",max);
	printf("Minimum:%d\n",min);
	printf("Sum:%d\n",sum);
	printf("Average:%d\n",sum/n);
		}

