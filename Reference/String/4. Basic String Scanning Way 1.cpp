#include<stdio.h>
int main(){
	char name[20];
	
	printf("Enter your name:-\n");
	scanf("%s",name);
	printf("Hello there %s ",name);
	
	return 0;
}
//To keep in mind that the length of the string should not exceed
//We cannot have multi word value in this way;
