#include<stdio.h>
int main()
{
	int s1, s2, s3, sum;
	
	printf("Enter value of Side 1:- \n");
	scanf("%d",&s1);
	
	printf("Enter value of Side 2:- \n");
	scanf("%d",&s2);
	
	printf("Enter value of Side 3:- \n");
	scanf("%d",&s3);
	
	
	if(s1 == s2 && s2 == s3)
	{
		printf("Triangle is EQUILATERAL!!");
	}
	else if(s1 == s2 || s1 == s3 || s2 == s3)
	{
		printf("Triangle is ISOSCELES!!");
	}
	else
	{
		printf("Triangle is SCALENE!!");
	}
	
	return 0;
}
