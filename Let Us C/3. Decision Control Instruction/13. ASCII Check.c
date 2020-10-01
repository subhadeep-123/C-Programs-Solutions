#include<stdio.h>
main()
{
	char ch;
	printf("Enter any Charaacter:- \n");
	scanf("%c",&ch);
	printf("The ASCII Value %d",ch);
	if(ch >= 65 && ch <= 90)
	{
		printf("\nCAPITAL LETTER");
	}
	else if(ch >= 97 && ch <= 122)
	{
		printf("\nSMALL LETTER");
	}
	else if(ch >= 48 && ch <= 57)
	{
		printf("\nNUMBERS");
	}
	else
	{
		printf("\nSPECIAL CHARACTER");
	}
	
	return 0;
}
