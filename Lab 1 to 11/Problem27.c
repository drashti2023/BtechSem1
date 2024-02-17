#include<stdio.h>
int main(){
	int unit;
	float amount,total_amount,surcharge;
	printf("enter total units consumed:");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amount=unit*0.50;
		
	}else if(unit<=150)
	{
		amount=25+(unit-50)*0.75;
	}else if(unit<=250)
	{
		amount=220+(unit-250)*1.50;
	}
	surcharge=amount*0.20;
	total_amount=amount+surcharge;
	printf("Your electricity bill is %f",total_amount);
	
}
