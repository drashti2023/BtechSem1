#include<stdio.h>
int main(){
	char ch;
	printf("Enter an alphabet:");
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("The character is a vowel\n");
	}
	else
	{
		printf("The character is a consonant\n");
	}
}
