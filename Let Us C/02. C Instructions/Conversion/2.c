#include<stdio.h>
#include<math.h>
int main()
{
	float V, C, D, G, nume, denome;
	float R;
	
	printf("Enter The Values of V, C, D & G :- \n");
	scanf("%f%f%f%f",&V,&C,&D,&G);
	
	nume = 2 * V + 6.22 * (C + D);
	
	denome = G + V;
	
	R = nume / denome;
	
	printf("Result is : %0.3f", R);
		
	return 0;
}
