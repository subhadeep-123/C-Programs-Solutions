#include<stdio.h>
int main()
{
	int y;
	printf("Enter a Year:- \n");
	scanf("%d",&y);
	if((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))
	{
		printf("\n%d is a Leap Year. \n", y);
	}
	else
	{
		printf("\n%d is not the Leap Year. \n", y);
	}
	
	return 0;
	 
}
