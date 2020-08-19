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
	
	if(s1 > s2)
	{
		if(s2 > s3)
		{
			printf("S1 is Largest");
			sum = s3 + s2;
			if(sum > s1)
			{
				printf("\nSum of S2 + S3 = %d, \nTriangle is VALID",sum);
			}
			else
			{
				printf("\nSum of S2 + S3 = %d, \nINVALID!!!",sum);
			}
		}
		else
		{
			printf("S3 is Largest");
			sum = s2 + s1;
			if(sum > s3)
			{
				printf("\nSum of S1 + S2 = %d, \nTriangle is VALID",sum);
			}
			else
			{
				printf("\nSum of S1 + S2 = %d, \nINVALID!!!",sum);
			}
		}
	}
	else
	{
		printf("S2 is Largest");
		sum = s3 + s1;
		if(sum > s2)
		{
			printf("\nSum of S1 + S3 = %d, \nTriangle is VALID",sum);
		}
		else
		{
			printf("\nSum of S1 + S3 = %d, \nINVALID!!!",sum);
		}
	}
}
