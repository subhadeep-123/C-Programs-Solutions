#include<stdio.h>
int main()
{
	int c_price, s_price, pr, ls;
	
	printf("Enter Cost Price:- \n");
	scanf("%d",&c_price);
	
	printf("Enter Selling Price:- \n");
	scanf("%d",&s_price);
	
	if(s_price > c_price)
	{
		pr = s_price - c_price;
		printf("Profit of %d",pr);
	}
	else
	{
		ls = c_price - s_price;
		printf("Loss of %d",ls);
	}
	
	return 0;
}
