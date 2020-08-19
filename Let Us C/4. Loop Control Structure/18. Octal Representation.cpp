#include <stdio.h>
#include<math.h>
int main(){
	int num, rem, temp;
	long octalNumber =0, i=1;
	printf("Enter an Positive Integer: \n");
	scanf("%d",&num);
	temp = num;
	while(num != 0){
		rem = num % 8;
		num /= 8;
		octalNumber = octalNumber  + (rem * i);
		i = i * 10;
	}
	printf("Ocatal Representation of %d is %o and program gives %ld",temp,temp,octalNumber );
}
