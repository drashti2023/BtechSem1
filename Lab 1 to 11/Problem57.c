#include<stdio.h>
int main(){
	char uppercase='A';
	char lowercase='a';
	
	printf("Uppercase Alphabets:\n");
	while(uppercase<='Z'){
		printf(" %c",uppercase);
		uppercase++;
	}
	printf("\n\nLowercase Alphabets:\n");
	while(lowercase<='z'){
		printf(" %c",lowercase);
		lowercase++;
	}
}
