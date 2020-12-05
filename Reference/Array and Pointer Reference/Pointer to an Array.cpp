#include<stdio.h>
//This is extremly useful when we are passing a 2D array to a a function.
int main(){
	int s[4][3] = {
	{1234, 56,2},
	{5678, 46,2},
	{9101, 36,2},
	{1123, 26,2},
	};
	int (*p)[3]; //Paranthesis are required without it will be an array of 2 integer pointer.
	int i,j, *pint;
	for(i=0;i<=3;i++){
		p = &s[i];
		pint = (int )*p;
		printf("\n");
		for(j = 0; j <= 2; j++)
			printf("%d ", *(pint + j));
	}
	return 0;
}

