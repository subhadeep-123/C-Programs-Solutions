#include<stdio.h>
#include<math.h>
int main()
{
	int p, q, r, a, n, i;
	
		
	for(i=1;i<=10;i++)
	{
		printf("Enter the Value of P, Q, R & N:-\n");
		scanf("%d%d%d%d",&p,&q,&r,&n);
		a = p * pow((1 + (r/q)), n*q);
		printf("\nThe result is:- %d\n",a);
	}
	
	return 0;
}
