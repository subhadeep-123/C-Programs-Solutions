#include<stdio.h>
#include<math.h>
int main()
{
	double wcf, temp, wc;
	printf("Enter The Temperature in degrees:-\n");
	scanf("%lf",&temp);
	printf("Enter The Wind Velocity:-\n");
	scanf("%lf",&wc);
	
	wcf = 35.74 + (0.6215 * temp)+ ((0.4275 * temp)- 35.75) * pow(wc,0.16);
	printf("The Wind Chill Factor is :- %lf",wcf);
	return 0;
}
