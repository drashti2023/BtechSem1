#include<stdio.h>
int main(){
	int n,rem,rev,org;
	printf("Enter a number:");
	scanf("%d",&n);
	org=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(org==rev){
		printf("\nPalindrome");
	}else{
		printf("\nNot a palindrome");
	}
}
