#include<stdio.h>
int main(){
	int phy,chem,math,eng,comp;
	float per;
	printf("Enter marks of five subjects:");
	scanf("%d %d %d %d %d",&phy,&chem,&math,&eng,&comp);
	per=(phy+chem+math+eng+comp)/(float)5;
	printf("Percentage=%f",per);
	
	if(per<35)
	{
		printf("Fail");
	 } 
	 else if(per>=36&&per<45)
	 {
	 	printf("Pass class");
	 }
	 else if(per>=45&&per<60)
	 {
	 	printf("Second class");
	 }
	 else if(per>=61&&per<70)
	 {
	 	printf("First class");
	 }
	 else if(per>70) 
	 {
	 	printf("Distinction");
	 }
}
