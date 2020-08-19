#include<stdio.h>
int main()
{
	int bmi;
	
	printf("Enter the Body Mass Index(BMI):- \n");
	scanf("%d",&bmi);
	
	if(bmi<15)
	{
		printf("Starvation");
	}
	else if(bmi>=15.1 && bmi <=17.5)
	{
		printf("Anorexic");
	}
	else if(bmi>=17.5 && bmi<=18.5)
	{
		printf("Underweight");
	}
	else if(bmi>=18.6 && bmi<=24.9)
	{
		printf("Ideal");
	}
		else if(bmi>=25 && bmi<=29.9)
	{
		printf("Overweight");
	}
	else if(bmi>=30 && bmi<=39.9)
	{
		printf("Obese");
	}
	else
	{
		printf("Morbidly Obese");
	}
}
