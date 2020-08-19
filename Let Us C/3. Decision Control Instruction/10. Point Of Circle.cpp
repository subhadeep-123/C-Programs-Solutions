#include<stdio.h>
#include<math.h>
int main()
{
	float x, y, cx, cy, dist, rad;
	
	printf("Enter The Radius of the Circle:- \n");
	scanf("%f",&rad);
	
	printf("Enter the Center Points of the Circle:- \n");
	scanf("%f%f",&cx,&cy);
	
	printf("Enter the Coordinates of the Point:- \n");
	scanf("%f%f",&x,&y);
	
	dist = sqrt(pow((x - cx), 2) + pow((y - cy), 2));
	
	if(dist > rad)
	{
		printf("\nThe Point (%0.1f , %0.1f) lies Outside the Circle!!",x,y);
	}
	else if(dist < rad)
	{
		printf("\nThe Point (%0.1f , %0.1f) lies Inside the Circle!!",x,y);
	}
	else
	{
		printf("\nThe Point (%0.1f , %0.1f) lies On the Circle!!",x,y);
	}
	
	return 0;
}
