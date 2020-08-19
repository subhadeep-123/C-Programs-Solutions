#include<stdio.h>
void leapyear(int year)
{
	int x;
	x = (((year%4==0 && year%100!=0)||year%400==0) ? printf("%d is LEAP YEAR!!",year) : printf("%d is not a LEAP YEAR!!",year));
}
int main()
{
	int year;
	
	printf("Enter a Year:-\n");
	scanf("%d",&year);
	
	leapyear(year);
	
	return 0;
}
