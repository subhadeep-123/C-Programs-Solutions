#include<stdio.h>
void swap(int x, int y, int z){
	int temp;
	temp = x;
	x = z;
	z = y;
	y = temp;

	printf("\nAfter Shifting\n%d %d %d",x,y,z);
}
int main()
{
	int a,b,c;
	printf("Enter value of A, B, C\n");
	scanf("%d%d%d",&a,&b,&c);
	
	swap(a,b,c);
	
	return 0;
}
