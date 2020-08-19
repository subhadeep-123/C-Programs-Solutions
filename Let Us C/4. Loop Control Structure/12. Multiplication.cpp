#include<stdio.h>
int main()
{
	int lim, num, i, temp;
	
	printf("Enter The Number:-\n");
	scanf("%d",&num);
	printf("\nEnter the Limit:-\n");
	scanf("%d",&lim);
	
	for(i=1;i<=lim;i++)
	{
		temp = num * i;
		printf("%d * %d = %d\n",num,i,temp);
	}
	return 0;	
}
