#include<stdio.h>
int main()
{
	int no, temp, res=0, i=0;
	printf("Enter a 5-Digit No :-\n");
	scanf("%d",&no);
	while(i != 5){
		temp = no % 10;
		no = no / 10;
		res = (res * 10)+ temp;
		i++;
	}
	printf("\nResult - %d",res);
}
