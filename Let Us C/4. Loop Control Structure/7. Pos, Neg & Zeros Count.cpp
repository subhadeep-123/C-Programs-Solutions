#include<stdio.h>
int main()
{
	int pos = 0, zeros = 0, neg = 0, num;
	int lim;
	
	printf("Enter a limit:-\n");
	scanf("%d",&lim);
	printf("\n");
	while(lim)
	{
		printf("Enter a Number:-\n");
		scanf("%d",&num);
		if(num > 0)
		{			
			pos++;
		}
		else if(num == 0)
		{
			zeros++;
		}
		else
		{
			neg++;
		}
		lim--;

	}
	printf("\nPositive Numbers = %d\n",pos);
	printf("Negative Numbers = %d\n",neg);
	printf("Zero = %d",zeros);	
}
