#include<stdio.h>
int main(){
	int i,count=0;
	int arr[]={1,-2,3,-4,-5};
	int size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<size;i++){
		if(arr[i]<0){
			count++;
		}
	}
	printf("Total numbers of negative elements:%d\n",count);
	
}
