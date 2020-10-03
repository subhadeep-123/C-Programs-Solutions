#include<stdio.h>
int main()
{
	float tsp, tcp, pr;
	printf("Enter The Total Selling Price and Total Profit :- \n");
	scanf("%f%f",&tsp,&pr);
	tcp = tsp - pr;
	printf("The total Cost Price is - %f",tcp);
	return 0;
	
}
