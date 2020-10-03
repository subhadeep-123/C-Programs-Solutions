#include<stdio.h>
int fibo(int n){
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}
int main()
{
	int num, c=0;
	
	printf("Enter the range:-\n");
	scanf("%d",&num);
	
	printf("Fibonacci Series:\n");
	for(int i=1;i<=num;i++){
		printf("%d ", fibo(c));
		c++;
	}
	
	return 0;
}
