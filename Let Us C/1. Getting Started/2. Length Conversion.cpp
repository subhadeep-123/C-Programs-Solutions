#include<stdio.h>
int main()
{
	int km, m, ft, inch, cm;
	printf("Enter the distance in KM - \n");
	scanf("%d",&km);
	m = km * 1000;
	ft = km * 3280.84;
	inch = km * 39370.1;
	cm = km * 100000;
	printf("\nConverted Lengths \n In Meters - %d \n In Feets - %d \n In Inches - %d \n In Centimeters - %d",m,ft,inch,cm);
	return 0;
	
}
