#include<stdio.h>
void display(int arr[][2]){
	int i,j;
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
void add(int one[][2], int two[][2]){
	int i,j;
	int temp[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			temp[i][j] = one[i][j] + two[i][j];
		}
	}
	display(temp);
}
int main(){
	int i, j, one[2][2], two[2][2];
	printf("Enter the array elements for Matrix 1:-\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the array value for arr[%d][%d] - ",i, j);
			scanf("%d",&one[i][j]);
		}
	}
	printf("\nEnter the array elements for Matrix 2:-\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the array value for arr[%d][%d] - ",i, j);
			scanf("%d",&two[i][j]);
		}
	}
	printf("\n Matrix 1 \n");
	display(one);
	printf("\n Matrix 2 \n");
	display(two);
	
	printf("\nAfter Addition of Matrix Element:-\n");
	add(one, two);
	
	return 0;
}
