#include<stdio.h>
int main(){
	int month;
	printf("Enter the month number(1-12):");
	scanf("%d",&month);

	
	switch(month){
		case1:
			printf("31 days");
			break;
		case3:
			printf("31 days");
			break;
		case5:
			printf("31 days");
			break;
		case7:
			printf("31 days");
			break;
		case8:
			printf("31 days");
			break;
		case10:
			printf("31 days");
			break;
		case12:
			printf("31 days");
			break;
		case4:
			printf("30 days");
			break;
		case6:
			printf("30 days");
			break;
		case9:
			printf("30 days");
			break;
		case11:
			printf("30 days");
			break;
		case2:
		  	printf("29/28 days");
		  break;
		  default:
		  	printf("Invalid month\n");
		
	}
	return 0;
	
}
