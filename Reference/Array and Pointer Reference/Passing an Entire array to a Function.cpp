#include <stdio.h>
void display(int *, int);
int main()
{
	//Passing an Entire Array to a Function
	int num[] = {24, 34, 12, 44, 56, 17};
	display(num, 6);
	return 0;
}
void display(int *j, int n)
{
	int i;
	for (i = 0; i < n - 1; i++)
		printf("Element - %d\n", *j++);
}
