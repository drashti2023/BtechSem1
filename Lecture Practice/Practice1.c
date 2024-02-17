#include<stdio.h>
int main(){
	int i,arr[5];
	for(i=0;i<5;i++){
		printf("Enter value into arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	arr[3]=90;
	for(i=4;i>=0;i--){
		printf("arr[%d]: %d\n",i,arr[i]);
	}
}

