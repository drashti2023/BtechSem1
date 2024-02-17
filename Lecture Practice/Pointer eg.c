#include<stdio.h>
int main(){
	int q;
	int i=1;
	int *p=&i;
	
	q=p;
	*q=5;
	printf("%d",*p);
}
