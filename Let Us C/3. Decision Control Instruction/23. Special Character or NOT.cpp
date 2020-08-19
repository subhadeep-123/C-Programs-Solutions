#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any Special Character:-\n");
	scanf("%c",&ch);
	
	if(ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
	{
		printf("%c is a SPECIAL CHARACTER!!",ch);
	}
	else
	{
		printf("Alphabets or Numbers");
	}
}
