#include<stdio.h>
#include<string.h>
void main(){
char str[100],c;
int i,lenf=0, f;
printf("Enter a string:");
gets(str);
lenf=strlen(str);
printf("\nEnter a character to find its position:");
scanf("%c",&c);
for(i=0;i<lenf;i++){
if(str[i]==c){
printf("\ncharacter position:\n%d",i+1);
f=1;
}

}
}
