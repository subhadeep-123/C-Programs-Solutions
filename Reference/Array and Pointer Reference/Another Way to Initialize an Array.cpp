#include<stdio.h>
int main(){
	int i,j, s[4][2] = {
		{1234, 56},{1212, 33},{1434, 80},{1312, 78}};
	printf("Address :-");
//	for(i=0;i<=3;i++){
//		printf("Address of %d th 1-D array = %u\n", i, s[i]);
//	}
//	printf("The values:-\n");
	for(i=0;i<=3;i++){
		for(j=0;j<=1;j++){
		printf("%d ", s[i][j]);	
		}
		printf("\n");
	}
	return 0;
}
