#include<stdio.h>
int main(){
	int i, j;
	int arr[2][3];
	printf("The 2 Dimensional Array is :-\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Enter value for arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
			}
			printf("\n");
	}
	
	return 0;
} 
