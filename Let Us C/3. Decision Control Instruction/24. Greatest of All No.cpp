#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The First No. ");
	scanf("%d",&a);
	printf("\nEnter The Second No. ");
	scanf("%d",&b);
	printf("\nEnter The Third No. ");
	scanf("%d",&c);
	
	if(a > b)
	{
		if(b > c)
		{
			printf("%d is Largest",a);
		}
		else
		{
			printf("%d is Largest",c);
		}
	}
	else
	{
		printf("%d is Largest",b);
	}
}
