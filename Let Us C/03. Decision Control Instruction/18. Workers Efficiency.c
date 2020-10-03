#include<stdio.h>
int main()
{
	int time;
	printf("Enter the time you need to finish the work:- \n");
	scanf("%d",&time);
	if(time >= 2 && time <= 3)
	{
		printf("HIGHLY EFFICIENT");
	}
	else if(time >= 3 && time <= 4)
	{
		printf("ORDERED TO IMPROVE SPEED");
	}
	else if(time >= 4 && time <= 5)
	{
		printf("TRAIN MORE AND IMPROVE YOUR SPEED!!");
	}
	else if(time >= 5)
	{
		printf("TERMINATED!!");
	}
}
