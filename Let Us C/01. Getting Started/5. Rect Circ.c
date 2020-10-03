#include<stdio.h>
#define PI 3.142
int main()
{
	int l, b, p, ar;
	float r, ac, c;
	printf("Enter the length and breadth of the Rectangle :- \n");
	scanf("%d%d",&l,&b);
	printf("Enter the Radius of the Circle :- \n");
	scanf("%f",&r);
	p = 2 * (l + b);
	ar = l * b;
	ac = PI * r * r;
	c = 2 * PI * r;
	printf("The Area of the Rectangle is - %d \nThe Perimeter of the Rectangle is - %d\n",ar,p);
	printf("The Area of the Circle is - %f \nThe Circumference of the Circle is - %f",ac, c);
	return 0;
}
