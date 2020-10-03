#include<stdio.h>
int main()
{
	long int percent, pop = 100000;
	int i;
	
	for(i=1;i<=10;i++)
	{
		percent = 0.1 * pop;
		pop = (pop - percent);
		printf("%d year = %ld\n",i,pop);
	}
	return 0;
}
