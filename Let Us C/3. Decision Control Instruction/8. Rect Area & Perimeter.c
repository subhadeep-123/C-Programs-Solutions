#include<stdio.h>
int main()
{
	int l, b, a, p;
	
	printf("Enter The Length and Bredth of the Rectangle:- \n");
	scanf("%d%d",&l,&b);
	
	a = l * b;
	p = 2 * (l + b);
	
	printf("\nThe Area is:- %d\nThe Perimeter is:- %d\n",a,p);
	
	if(a > p)
	{
		printf("\nArea is Bigger!!");
	}
	else
	{
		printf("\nPerimeter is Bigger!!");		
	}
	return 0;
}
