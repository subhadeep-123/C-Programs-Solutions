#include<stdio.h>
#include<math.h>
int main()
{
	float A, B, C, X, Y, nume, denome;
	float R;
	
	printf("Enter The Values of A, B, C, X & Y :- \n");
	scanf("%f%f%f%f%f",&A,&B,&C,&X,&Y);
	
	nume = (7.7 * B) * ((X * Y) + A) / ((C - 0.8) + 2 * B);
	
	denome = (X + A) * (1 / Y);
	
	R = nume / denome;
	
	printf("Result is :- %0.5f", R);
		
	return 0;
}
