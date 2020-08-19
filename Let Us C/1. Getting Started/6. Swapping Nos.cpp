#include<stdio.h>
int main()
{
	int a, b, temp;
	printf("Enter The Two Nos :-\n");
	scanf("%d%d",&a,&b);
	printf("Entered Nos are :- \nA = %d \nB = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	printf("The Swapped Nos are :- \nA = %d \nB = %d",a,b);
	return 0;
}
