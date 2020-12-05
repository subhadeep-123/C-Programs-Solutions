#include<stdio.h>
int main(){
	int i;
	int j;
	int s[4][2] = {
		{1234, 56}, //Per Val 4 bit. Each Row 4 * no.of values
		{1212, 33},
		{1434, 80},
		{1312, 78}
	};
	// Self Explanatory - Below 3 are the same.
	printf("%d\n", *(s+1));
	printf("%d\n", s+1);
	printf("%d\n", s[1]);
	
	printf("\n%d\n", s[2][1]); // For a particular Values
	
	printf("\n%d\n", s[2] + 1); // Giving the Location of the s[2][1] = 80
	printf("%d\n", *(s[2] + 1)); // Gives the value of the array element at s[2][1]
	printf("%d\n", *(*(s+2)+1)); //Does the same as upper one.
	
	return 0;
}
