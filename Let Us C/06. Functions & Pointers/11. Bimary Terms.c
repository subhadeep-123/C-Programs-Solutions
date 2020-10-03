#include<stdio.h>
int bin(int n){
	if(n == 0)
		return 0;
	else
		return (n%2 + 10 * bin(n / 2));
}
int main()
{
	int num;
	printf("Enter a number:-\n");
	scanf("%d",&num);
	
	printf("%d", bin(num)); 
	
	return 0;
}
