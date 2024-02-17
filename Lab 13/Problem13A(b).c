#include<stdio.h>
int main(){
	int i,j,n=1;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			printf("%d",n);
			n++;
		}
		n=1;
		printf("\n");
	}
}

