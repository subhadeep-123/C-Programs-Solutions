#include<stdio.h>
void display(int (*arr)[5], int m, int n){
	int i, j;
	int *p;
	for(i=0;i<m;i++){
		p = arr + i;
		for(j=0;j<n;j++){
			printf("%d\t", *(p + j));
		}
		printf("\n");
	}
}
int main(){
	int arr[5][5], i, j;
	int m, n;
	printf("Enter the Row length of the array:-\n");
	scanf("%d",&m);
	printf("Enter the Column length of the array:-\n");
	scanf("%d",&n);
	printf("Enter the elements of the 2D array:-\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the value for array[%d][%d]:- ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nThe entered Array:-\n");
	display(arr, m, n);
	printf("\n");
	
	//Transposing
	int temp[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			temp[i][j] = arr[j][i];		
		}
	}
	
	//After Transposing
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t", temp[i][j]);
		}
		printf("\n");
	}
	return 0;
}
