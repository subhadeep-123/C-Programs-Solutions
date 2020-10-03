#include<stdio.h>
int main()
{
	int no, fst, lst, res;
	printf("Enter a 4-Digit No :-\n");
	scanf("%d",&no);
	lst = no%10;
	while(no > 10)
	{
		no = no / 10;
	}
	res = lst + fst;
	printf("Result :- %d",res);
	return 0;
	
}
