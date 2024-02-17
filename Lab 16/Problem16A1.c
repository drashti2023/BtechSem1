#include<stdio.h>
int main(){
	int data[3][3],i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter array element: a[%d][%d]:",i,j);
			scanf("%d",&data[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		
			printf("%d ",data[i][j]);
		}
	
	printf("\n");
}
}

    
 
