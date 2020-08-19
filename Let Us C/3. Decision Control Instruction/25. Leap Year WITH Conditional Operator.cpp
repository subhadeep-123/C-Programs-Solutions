#include<stdio.h>
int main()
{
	int y, x;
	printf("Enter a Year to CHECK:- \n");
	scanf("%d",&y);
	
	x = (y%4==0 && y%100!=0?printf("%d LEAP YEAR:",y):y%400==0?printf("%d LEAP YEAR:",y):printf("%d NOT LEAP YEAR:",y));
}
