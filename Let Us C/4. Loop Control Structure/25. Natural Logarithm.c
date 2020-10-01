#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x, exp, val=0.0;
	printf("Enter a Value for X: ");
	scanf("%f",&x);
	exp = (x - 1) / x;
	for(i=1;i<=7;i++)
	{
		if(i==1)
		{
			
			val += exp;
		}
		else{
			val += 0.5 * pow(exp,i);
		}
	}
	printf("The Sum of the First seven Terms of this series for X = %0.1f is %f",x,val);
}
