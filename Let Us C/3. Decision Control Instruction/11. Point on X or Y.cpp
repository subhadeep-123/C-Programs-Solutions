#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter Value For (X, Y):- \n");
	scanf("%d%d",&x,&y);
	if(x == 0 && y == 0)
	{
		printf("Point lies on the Origin\n");	
	}
	else if(x == 0)
	{
		printf("Point lies on y-axis\n"); 	
	}
	else if(y == 0)
	{
		printf("Point lies on x-axis\n");  
	}
	else
	{
		printf("Point neither lies on x-axis nor on y-axis\n");  	
	}
	
	return 0;
}
