#include<stdio.h>
int fact(int);
int main()
{
	int n, f;
	printf("Enter a number:\n");
	scanf("%d",&n);
	f = fact(n);
	printf("Factorial of %d is %d",n,f);
}
int fact(int x)
{
	if(x == 1)
	{
		return(1);
	}
	else{
		int rec = x * fact(x-1);
		return (rec);
	}
}
