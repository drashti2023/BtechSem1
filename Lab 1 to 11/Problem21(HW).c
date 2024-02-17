#include<time.h>
#include<stdio.h>

int main(){
	
	time_t currentTime=time(NULL);
	printf("Current Date & Time:%s",ctime(&currentTime));
}
