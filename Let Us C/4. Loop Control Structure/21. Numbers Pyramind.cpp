#include<stdio.h>
int main()
{
	int n,i,j,k,Num=1;
	printf("How many Lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
    	for(j=n;j>i;j--)
		{
    		printf("  ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%2d",Num++);
			printf("  ");
		}
		printf("\n");
	}
}
