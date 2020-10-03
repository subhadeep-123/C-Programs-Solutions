#include<stdio.h>
int main()
{
	int wt;
	
	printf("Enter the weight of the boxer:- \n");
	scanf("%d",&wt);
	
	if(wt<115)
	{
		printf("FLYWEIGHT");
	}
	else if(wt>=115 && wt <=121)
	{
		printf("BANTAMWEIGHT");
	}
	else if(wt>=122 && wt<=153)
	{
		printf("FEATHERWEIGHT");
	}
	else if(wt>=154 && wt<=189)
	{
		printf("MIDDLEWEIGHT");
	}
	else
	{
		printf("HEAVYWEIGHT");
	}
}
