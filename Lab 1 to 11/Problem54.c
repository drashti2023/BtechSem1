#include<stdio.h>
int main(){
	int x,y,ans=1,i=1;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	
	while(i<=y){
		ans=ans*x;
		i++;
	}
	printf("%d",ans);
}
