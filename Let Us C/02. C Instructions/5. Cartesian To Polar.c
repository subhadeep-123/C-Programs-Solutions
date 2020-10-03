#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
	float x, y, r, o;
	double radTodeg = 180.0/pi;
	printf("Enter the Cartesian Coordinates for X & Y :-\n");
	scanf("%f%f",&x,&y);
	r = sqrt(pow(x,2) + pow(y,2));
	o = atan(y/x)*radTodeg;
	printf("The Converted Coordinates are:- \n R - %f\n O - %f",r,o);
	return 0;
}
