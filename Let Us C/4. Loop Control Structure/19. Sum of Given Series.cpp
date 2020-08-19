#include <stdio.h>
int main()
{
	int i,j;
	double fact=1,temp;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			fact = fact * j;
		}
		temp += (i/fact);
		printf("Expression (%d/%d)\n",i,fact);
		fact = 1;
	}
	printf("Result = %lf",temp);
}
