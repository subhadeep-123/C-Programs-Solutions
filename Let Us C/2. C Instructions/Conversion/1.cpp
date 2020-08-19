#include<stdio.h>
#include<math.h>
int main()
{
	float X, Y, nume, denome;
	float Z;
	
	printf("Enter The Values of X & Y :- \n");
	scanf("%f%f",&X,&Y);
	
	nume = (X+3) * pow(X,3);
	
	denome = (Y - 4) * (Y + 5);
	
	Z = nume / denome;
	
	printf("Result is :- %0.2f", Z);
		
	return 0;
}
