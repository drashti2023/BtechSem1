#include<stdio.h>
int main(){
	int x,y,ans=1,i;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		ans=ans*x;
	}
	printf("%d",ans);
}
