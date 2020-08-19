#include<stdio.h>
int dostuff(float s1, float s2, float s3, float *avg, float *percent){
	float sum;
	sum = s1 + s2 + s3;
	*avg = sum /3;
	*percent = (sum/300) * 100;
}
int main()
{
	float avg, percent, s1,s2,s3;;
	printf("Enter the no of Sunbjects 1:-\n");
	scanf("%f",&s1);
	printf("\nEnter the no of Sunbject 2:-\n");
	scanf("%f",&s2);
	printf("\nEnter the no of Sunbject 31:-\n");
	scanf("%f",&s3);
		
	dostuff(s1,s2,s3,&avg,&percent);
	
	printf("Average - %0.2f\nPercentage - %0.2f%",avg,percent);
	
	return 0;
}
