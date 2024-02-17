#include<stdio.h>
int main(){
	int arr[]={2,4,6,8,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	int element=6;
	int found=0;
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==element){
			found=1;
			break;
		}
	}
	if(found){
		printf("Element %d is found\n",element);
	}else{
		printf("Element %d is not found\n",element);
	}
}


