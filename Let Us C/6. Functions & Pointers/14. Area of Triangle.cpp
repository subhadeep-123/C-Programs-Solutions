#include<stdio.h>
#include<math.h>
void area(int, int, int);
int main()
{
	int a, b, c;
	
	printf("Enter the value of three sides of the triangle:-\n");
	scanf("%d%d%d",&a,&b,&c);
	
	area(a,b,c);
	
	return 0; 
}
void area(int a, int b, int c){
	int S;
	S = (a+b+c) / 2;
	
	float area = sqrt(S * (S - a) * (S - b) * (S - c));
	
	printf("The area of the triangle is %0.3f sq.cm",area);
}
