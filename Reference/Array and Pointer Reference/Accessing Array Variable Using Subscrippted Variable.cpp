#include<stdio.h>
int main(){
	int num[] = {24,34,12,44,56,17};
	int i, *j;
	printf("The size of the array is %d\n", sizeof(num));
	printf("The length of the array is %d\n", sizeof(num)/sizeof(int));
	int len = sizeof(num)/sizeof(int);
	//Accessig Array Elements using pointers is always the faster approach
	//The zeroth pos is also called the base address of an array.
	j = &num[0];
	//j = num; This can be done too
	for(i=0;i<len;i++){
		printf("Addres = %u ",j);
		printf("Element = %d\n", *j++);
//		j++;
	}
	return 0;
}
