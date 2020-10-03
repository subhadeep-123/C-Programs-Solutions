#include<stdio.h>
int main()
{
	int no, res=0,i=0, temp;
	printf("Enter a 5-Digit No :-\n");
	scanf("%d",&no);
	while(i != 5)
	{
	temp = no%10;
	no = no / 10;
	res = temp + res;
	i++;
	}
	printf("Final - %d",res);
	return 0;
}
