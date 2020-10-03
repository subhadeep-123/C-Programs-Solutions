#include<stdio.h>
int sum(int num){
	if(num == 1)
		return 1;
	else
		return num + sum(num-1);
}
int main()
{
	int num = 25;
	
	int res = sum(num);
	
	printf("Sum - %d",res);
}
