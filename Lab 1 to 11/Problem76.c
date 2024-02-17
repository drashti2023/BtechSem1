#include<stdio.h>
int main(){
	int i,n,first=0,second=1,next;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:");
    
    printf("%d%d",first,second);
    for(i=3;i<n;i++){
    	
    	next=first+second;
    	printf("%d",next);
    	first=second;
    	second=next;
	}
}

