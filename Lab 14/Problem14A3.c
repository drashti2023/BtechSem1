#include<stdio.h>
int main(){
	int n,arr[n],evenCount=0,oddCount=0,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			evenCount++;
		}else if(arr[i]%2==1){
			oddCount++;
		}
	}
	printf("No of even number:%d\n",evenCount);
	printf("No of odd number:%d\n",oddCount);
}

