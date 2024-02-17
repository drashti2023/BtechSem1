#include<stdio.h>
int main(){
	int a[2][2],i,j;
	int b[2][2];
	int sum=0;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter array element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
			printf("Enter array element b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}}
		
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
    	sum=a[i][j]+b[i][j];
        printf("%d\n",sum);
   } 
}
}
