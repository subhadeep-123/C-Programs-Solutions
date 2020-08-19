#include<stdio.h>
int main()
{
	float F, C;
	printf("Enter The Temperature in Fahrenheit :- \n");
	scanf("%f",&F);
	C = (F - 32) * 5/9;
	printf("The Temperature in Centigrade is :- %f",C);
	return 0;
}
