#include<stdio.h>
int main(){
	int a=5,b=7,c=1,max;
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("max value is :%d",max);
}
