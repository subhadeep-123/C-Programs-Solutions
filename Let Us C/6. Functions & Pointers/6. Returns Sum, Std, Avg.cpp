#include<stdio.h>
#include<math.h>
int dostuff(int a, int b, int c, int d, int e, int *sum, float *avg, float *std){
	float var;
	*sum = a+b+c+d+e;
	*avg = *sum / 5;
	
	a = a - *avg;
	b = b - *avg;
	c = c - *avg;
	d = d - *avg;
	e = e - *avg;
	var = (a*a + b*b + c*c + d*d + e*e) / 5;
	*std = sqrt(var);
}
int main()
{
	int a,b,c,d,e;
	int sum;
	float avg, std;
	
	printf("Enter 5 integers:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	dostuff(a,b,c,d,e, &sum, &avg, &std);
	
	printf("Sum:- %d\nAvg:- %0.2f\nStd:- %f",sum,avg,std);
	
	return 0;
}
