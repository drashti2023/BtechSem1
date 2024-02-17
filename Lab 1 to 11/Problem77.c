#include<stdio.h>
int main(){
	int n,digit,count,i;
	int frequency[10]={0};
	printf("Enter an integer:");
	scanf("%d",&n);
	
	while(n!=0){
		digit=n%10;
		frequency[digit]++;
		n/=10;
	}
	printf("Frequency of digits:\n");
	for(i=0;i<10;i++){
		if(frequency[i]>0){
			printf("Digit %d:%d\n",i,frequency[i]);
		}
	}
}
