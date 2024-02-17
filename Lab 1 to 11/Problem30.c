#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		if(a>c)
		printf("%d is the 2nd largest number",b);
		else
		printf("%d is the 2nd largest number",c);
		
	}
	else if(b>a&&b>c)
	{
		if(b>c)
		printf("%d is the 2nd largest number",a);
		else
		printf("%d is the 2nd largest number",c);
	}
	else if(a>b)
	printf("%d is the 2nd largest number",a);
	
	else
	printf("%d is the 2nd largest number",b);
}
