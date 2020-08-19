#include<stdio.h>
#include<math.h>
int main()
//Only Equilateral
{
	float a, area;
	printf("Enter The Sides Of The Equilateral Triangle :-\n");
	scanf("%f",&a);
	area = sqrt(3)/4 * pow(a,2);
	printf("Result - %0.3f",area);
	return 0;
}
