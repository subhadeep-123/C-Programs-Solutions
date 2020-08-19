#include<stdio.h>
int main()
{
	float h, cc, ts;
	
	printf("Enter the Hardness of the steel:- \n");
	scanf("%f",&h);
	
	printf("Enter the Carbon Content of the steel:- \n");
	scanf("%f",&cc);
	
	printf("Enter the Tensile Strength of the steel:- \n");
	scanf("%f",&ts);
	
	if(h > 50 && cc < 0.7 && ts > 5600)
	{
		printf("\nGrade is 10\n");
	}
	else if((h > 50 && cc < 0.7) || ts > 5600)
	{
		printf("\nGrade is 9\n");
	}
	else if(h > 50 || (cc < 0.7 && ts > 5600))
	{
		printf("\nGrade is 8\n");
	}
	else if((h > 50 && ts > 5600) || cc < 0.7)
	{
		printf("\nGrade is 7\n");
	}
	else if(h > 50 || cc < 0.7 || ts > 5600)
	{
		printf("\nGrade is 6\n");
	}
	else
	{
		printf("\nGrade is 5\n");
	}
	
	return 0;
}
