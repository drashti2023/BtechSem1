#include<stdio.h>
#include<string.h>
void main(){
	char s1[100],s2[100];
	int n,i=0;
	printf("Enter String1:");
	gets(s1);
	printf("Enter String2:");
	gets(s2);
	printf("Enter a number of character to be copied:");
	scanf("%d",&n);
	for(i=0;s2[i]!='\0'&&i<n;i++){
		s1[i]=s2[i];
	}
	s1[i]='\0';
	printf("%s",s1);
}
