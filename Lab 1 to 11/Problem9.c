#include<stdio.h>
int main(){
	int seconds,h,m,s;
	printf("Enter seconds:");
	scanf("%d",&seconds);
	
	h=seconds/3600;
	m=(seconds%3600)/60;
	s=(seconds%3600)%60;
	
	printf("Time in HH:MM:SS format is %d: %d: %d",h,m,s);

}
