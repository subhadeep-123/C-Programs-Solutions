#include<stdio.h>
#include<string.h>
int main(){
	char name[] = "Subhadeep Banerjee";
	char *ptr;
	ptr = name; //Giving the base address of a string.
	while(*ptr != '\0'){
		printf("%c ",*ptr++);
	}
	return 0;
}
