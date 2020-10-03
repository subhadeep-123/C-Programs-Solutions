#include<stdio.h>
int main()
{
	int credit, order_quantity, stock;
	
	printf("Enter the ORDER QUANTITY:- \n");
	scanf("%d",&order_quantity);
	printf("Enter the STOCKS:- \n");
	scanf("%d",&stock);
	printf("Enter Credits: \n 1 - OK \n 0 - NOT OK \n");
	scanf("%d",&credit);
	
	if(order_quantity <= stock && credit == 1)
	{
		printf("\nRequirements will be Supplied");
	}
	else if(credit == 0)
	{
		printf("Intimation will be sent");
	}
	else if(credit == 1 && stock < order_quantity)
	{
		printf("Stocks will be Supplied");
	}
	else
	{
		printf("WTF  is this PROGRAM!!!");
	}
}
