#include<stdio.h>
#include<math.h>
int main()
{
	float X;
	float R;
	
	printf("Enter The Value for X :- \n");
	scanf("%f",&X);
	
	R = ((12 * pow(X,3)) / 4 * X) + ((8 * pow(X,2)) / 4 * X) + (8 / (8 * X)) + (X / (8 * X));
		
	printf("Result is : %f", R);
		
	return 0;
}
