#include<stdio.h>
void display(int arr[][10], int m, int n){
	int i,j;
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
void mult(int a[][10], int b[][10], int r1, int c1, int r2, int c2){
	int i,j,k;
	int temp[10][10];
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			temp[i][j] = 0;
			for(k=0;k<r1;k++){
				temp[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	display(temp, r1, c2);
}
int main(){
	int i, j, one[10][10], two[10][10];
	int row1, col1, row2, col2;
	while(1){
		printf("Enter the Row Length for Matrix 1:-    ");
		scanf("%d",&row1);
		printf("Enter the Column Length for Matrix 1:- ");
		scanf("%d",&col1);
		
		printf("Enter the Row Length for Matrix 2:-    ");
		scanf("%d",&row2);
		printf("Enter the Column Length for Matrix 2:- ");
		scanf("%d",&col2);
		
		if(col1 != row2){
			printf("\nColumn1 and Row2 Should be same:-\n\n");
			continue;
		}
		else{
			printf("\nEnter the array elements for Matrix 1:-\n");
			for(i=0;i<row1;i++){
				for(j=0;j<col1;j++){
					printf("Enter the array value for arr[%d][%d] - ",i, j);
					scanf("%d",&one[i][j]);
				}
			}
		
			printf("\nEnter the array elements for Matrix 2:-\n");
			for(i=0;i<row2;i++){
				for(j=0;j<col2;j++){
					printf("Enter the array value for arr[%d][%d] - ",i, j);
					scanf("%d",&two[i][j]);
				}
			}
		}
		break;
	}
	printf("\n Matrix 1 \n");
	display(one, row1, col1);
	printf("\n Matrix 2 \n");
	display(two, row2, col2);
	
	printf("\nAfter Addition of Matrix Element:-\n");
	mult(one, two, row1, col1, row2, col2);
	
	return 0;
}
