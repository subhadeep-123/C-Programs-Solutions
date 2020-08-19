#include<stdio.h>
void roman(int year)
{
	while(year!=0)
	{
		if(year >= 1000)
		{
			printf("m");
			year -= 1000;
		}
		else if(year >= 500)
		{
			printf("d");
			year -= 500;
		}
		else if(year >= 100)
		{
			printf("c");
			year -= 100;
		}
		else if(year >= 50)
		{
			printf("l");
			year -= 50;
		}
		else if(year >= 10)
		{
			printf("x");
			year -= 10;
		}
		else if(year >= 5)
		{
			printf("v");
			year -= 5;
		}
		else if(year >= 1)
		{
			printf("i");
			year -= 1;
		}
	}
}
int main()
{
	int year;
	
	printf("Enter a year:\n");
	
	scanf("%d",&year);
	roman(year);
	
	return 0;
}
