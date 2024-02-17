#include<stdio.h>
int main(){
	int var,*ptr;
	var=2300;
	ptr=&var;
	printf("Value of var=%d\n",var);
	printf("Value available at *ptr = %d\n",*ptr);
	return 0;
}
