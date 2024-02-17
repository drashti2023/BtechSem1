#include<stdio.h>
int main(){
	int days,y,w,d;
	printf("Enter the number of days:");
	scanf("%d",&days);
	
	y=days/365;
	w=(days%365)/7;
	d=(days%365)%7;
	
	printf("%d years\n",y);
	printf("%d weeks\n",w);
	printf("%d days\n",d);
}
