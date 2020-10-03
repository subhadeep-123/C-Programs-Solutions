#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter The Value of the 3 ANGLES of the Triangle:-\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b+c == 180)
	{
		printf("VALID!!!");
	}
	else
	{
		printf("NOT VALID!!!");
	}
	
	return 0;
}
