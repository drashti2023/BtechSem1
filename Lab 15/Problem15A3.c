#include<stdio.h>
int main(){
	int arr[]={3,6,9,12,15,23};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i,count=0;
	for(i=0;i<size;i++){
		if(arr[i]%3==0){
			count++;
		}
			}
			printf("%d\n",count);
}
