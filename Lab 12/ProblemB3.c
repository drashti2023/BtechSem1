#include<stdio.h>
int main(){
	int i,j,n,k;
	for(i=0;i<5;i++){
		n=1;
		for( k=1;k<5-i;k++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%d ",n);
			n=n*(i-j)/(j+1);
		}
		printf("\n");
	}
	
}
