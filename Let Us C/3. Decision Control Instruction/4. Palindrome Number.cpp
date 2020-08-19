#include<stdio.h>
int main()
{
	int num, rev = 0, var, temp;
	
	printf("Enter a 5-Digit No:-\n");
	scanf("%d",&num);
	 
	 temp = num; 
	 
	while(num != 0)
	{
		var = num % 10;
		num = num / 10;
		rev = (rev * 10) + var;
	}
	printf("Reversed No :-\t %d",rev);
	
	//Checking Palindrome
	if(temp == rev)
	{
		printf("\nPALINDROME");
	}
	else
	{
		printf("\nNOT PALINDROME");
	}
	
	return 0;
	
}
