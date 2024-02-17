#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("Enter a string:");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	printf("String: %s\n",str);
	printf("Length of string:%ld\n",strlen(str));
	
}
