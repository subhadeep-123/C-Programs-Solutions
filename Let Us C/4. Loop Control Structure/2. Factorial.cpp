#include<stdio.h>
int main()
{
	int i, num;
	unsigned long fact = 1;
	printf("Enter a no:- \n");
	scanf("%d",&num);
	
	if(num < 0)
	{
		printf("Error! Factorial of a negative number doesn't exist.");
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			fact = fact*i;
		}
		printf("Factorial of %d = %lu", num, fact);
	}
	return 0;
}
