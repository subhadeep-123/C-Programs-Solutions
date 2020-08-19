#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
	double  res, val, x;
	printf("Enter an angle in degrees :-\n");
	scanf("%lf",&x);
	val = PI / 180;
	res = pow(sin(x * val), 2) + pow(cos(x * val), 2);
	printf("%lf",res);
	return 0;
}
