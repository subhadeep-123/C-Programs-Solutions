#include<stdio.h>
int main(){
	//Once the string has been defined it cannot be initialized to another set of character
	char str1[] = "Hello";
	char *p = "Hello";

//	Will not Work 
//	str1 = "Bye";

	p = "Bye"; //This will work.

	
}
