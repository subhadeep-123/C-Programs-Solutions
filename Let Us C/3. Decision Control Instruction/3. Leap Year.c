#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter the Year:- \n");
	scanf("%d",&year);
	
	if(year%4 == 0)
	{
		printf("Leap Year");
	}
	else{
		printf("Not Leap Year");
	}
	
	return 0;
}
