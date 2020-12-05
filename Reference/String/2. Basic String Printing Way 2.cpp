#include<stdio.h>
#include<string.h>
int main(){
	char name[] = "Subhadeep Banerjee";
	int i = 0;
	//name[i] because the 'Null Character is present in the array itself'
	while(name[i] != '\0'){
		printf("\t%c\n",name[i]);
		i++;
	}
	return 0;
}
