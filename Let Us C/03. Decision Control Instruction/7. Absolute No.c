#include<stdio.h>
#include<math.h>
int main()
{
	int num, temp;
	
	printf("Enter any NEGATIVE No:-  ");
	scanf("%d",&num);
	
	temp = abs(num);
	
	printf("The ABSOLUTE No is: %d",temp);
	
	return 0;
}
