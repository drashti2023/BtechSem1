#include<stdio.h>
int main(){
	int a,b,n1,n2,hcf,lcm,temp;
	printf("Enter value of a and b:\n");
	scanf("%d %d",&a,&b);
	n1=a;
	n2=b;
	while(n2!=0){
		temp=n2;
		n2=n1%n2;
		n1=temp;
	}
	hcf=n1;
	lcm=(a*b)/hcf;
	
	printf("HCF of %d and %d = %d",a,b,hcf);
	printf("\nLCM of %d and %d = %d",a,b,lcm);
}
