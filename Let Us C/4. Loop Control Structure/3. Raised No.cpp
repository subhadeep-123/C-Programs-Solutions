#include<stdio.h>
#include<math.h>
int main()
{
	int n1, n2, res = 1;
	unsigned long a;
	printf("Enter Two Numbers:- \n");
	scanf("%d%d",&n1,&n2);
	for(int i=0; i<=n2-1;i++)
	{
		res = res * n1;
	}
	printf("The Raised No is %d",res);
	
	a = pow(n1,n2);
	printf("\nVeryfing Using POW Func. %lu",a);
	
	return 0;
	
}
