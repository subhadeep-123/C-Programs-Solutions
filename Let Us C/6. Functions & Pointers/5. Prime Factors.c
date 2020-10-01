#include<stdio.h>
#include<math.h>
void primefactors(int n)
{
	while(n%2==0)
	{
		printf("2 ");
		n /= 2;
	}
	for(int i=3;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			printf("%d ",i);
			n = n/i;
		}
	}
	if(n>2)
		printf("%d ",n);
}
int main(){
	int n;
	printf("Enter a Number:\n");
	scanf("%d",&n);
	primefactors(n);
	return 0;
}
