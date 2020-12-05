#include<stdio.h>
int main(){
	int i;
	int s[4][4] = {
		{1234, 56, 10, 20},
		{1212, 33, 15, 25},
		{1434, 80, 5,  35},
		{1312, 78, 0,  40}
	};
	for(i=0;i<=3;i++){
		printf("%d ",s[3][i]);
	}
	printf("\n%d", s[3][0]);
	printf("\n%d ", *(s[3] + 1));
	printf("\n%d ", *(*(s + 3) + 1));
	printf("\n%d ", *(*(s+3) + 2));
	
	return 0;
	
	
}
