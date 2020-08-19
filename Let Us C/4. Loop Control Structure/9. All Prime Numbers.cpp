#include<stdio.h>
int main()
{
	int i, j, flag;
	
	for(i=1;i<=300;i++)
	{
		flag = 1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag==1 && i!=1)
		{
			printf("\n%d, is PRIME!!",i);
		}
	}
	return 0;
}
