#include<stdio.h>
int main()
{
	int x1, x2, x3, y1, y2, y3;
	
	float slope1, slope2;
	
	printf("Enter 1st Coordinate:- (x1,y1)\n");
	scanf("%d%d",&x1,&y1);
	
	printf("\nEnter 2nd Coordinate:- (x2,y2)\n");
	scanf("%d%d",&x2,&y2);
	
	printf("\nEnter 3rd Coordinate:- (x3,y3)\n");
	scanf("%d%d",&x3,&y3);
	
	slope1=(y2-y1)/(x2-x1);
	slope2=(y3-y2)/(x3-x2);
	
	if(slope1==slope2)
	{
		printf("\n Three points fall on the same line");
	}
  else
	{
		printf("\nThree points doesn't fall on the same line");
	}
	
	return 0;
}


