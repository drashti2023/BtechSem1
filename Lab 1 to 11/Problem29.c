#include<stdio.h>
int main(){
	int m1,m2,m3;
	printf("Enter sides of triangle:\n");
	scanf("%d %d %d",&m1,&m2,&m3);
	
	if(m1==m2&&m2==m3){
		printf("The given triangle is Equilateral Triangle");
	}else if(m1==m2||m2==m3||m3==m1){
		printf("The given triangle is Isosceles Triangle");
	}else{
		printf("The given triangle is Scalene Triangle");
	}
	return 0;
	
}
