#include<stdio.h>
int main()
{
	int days, fine;
	printf("Enter How Many days it has been:-\n");
	scanf("%d",&days);
	if(days <= 5)
	{
		fine = 0.5 * days;
		printf("Fine 50 paisa p/d = %d",fine);
	}
	else if(days >= 5 && days <= 10)
	{
		fine = 1 * days;
		printf("Fine 1 rupee p/d = %d",fine);
	}
	else if( days >= 10 && days <= 30)
	{
		fine = 5 * days;
		printf("Fine 5 rupees p/d = %d",fine);
	}
	else
	{
		printf("It's been 30 days, MEMBERSHIP IS CANCELLED!!!'");
	}
	return 0;
}
