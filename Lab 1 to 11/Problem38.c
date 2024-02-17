#include<stdio.h>
int main(){
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	
	((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z'))?printf("Character is an alphabet"):printf("Character is not an alphabet");
}
	
	
	
	
	
	
	
	
	

