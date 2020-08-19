#include<stdio.h>
int power(int, int);
int main()
{
	int a, b, value;
	
	printf("Number and to be raised by:\n");
	scanf("%d%d",&a,&b);
	
	value = power(a, b);
	
	printf("The value of %d raised by %d is %d",a,b,value);
	
	return 0;
}
int power(int x, int y)
{ 
	int num = 1;
	if(y==1){
		return (x);
	}
	else{
		while(y!=0){
			num *= x;
			y--;
		}
		return (num);
	}
}
