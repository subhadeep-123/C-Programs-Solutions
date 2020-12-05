#include<stdio.h>
int main(){
	char str1[] = "Hello";
	char str2[20];
	char *s = "Good Morning";
	char *q;
//	str2 = str1 
	/*[Error] Invalid array assingment */
	q = s;
	printf("%s",*q);
	return 0;
}
