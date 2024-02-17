#include<stdio.h>
int main(){
	int i;
	int arr1[]={18,23,10,4,17};
	int arr2[5];
	int size=sizeof(arr1)/sizeof(arr1[0]);
	
	for(i=0;i<size;i++){
		arr2[i]=arr1[i];
	}
	printf("Elements of arr2:");
	for(i=0;i<size;i++){
		printf("%d ",arr2[i]);
	}


}
