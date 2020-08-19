#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter A Character:- \n");
	scanf("%c", &ch);
	
	if(ch >= 65 && ch <= 90)
	{
		printf("\nCAPITAL LETTER");
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("\nSMALL LETTER");
	}
	else
	{
		printf("Special Character or Numbers");
	}
	
	return 0;
	
}
