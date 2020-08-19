#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,avg;
	printf("Enter The Marks of all Five Subjects under 100 :- \n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	avg = (s1+s2+s3+s4+s5) / 5;
	printf("The Average Marks is - \n %d",avg);
	return 0;
}
