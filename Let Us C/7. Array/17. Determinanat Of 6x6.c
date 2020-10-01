#include<stdio.h>
#include<math.h>
#define N 2
//int N;
void display(int arr[N][N], int m, int n){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
// Function to get cofactor of mat[p][q] in temp[][]. n is current 
void getCofactors(int mat[N][N], int temp[N][N], int p, int q, int n){
	int i = 0, j = 0;
	for(int row = 0; row < n; row++){
		for(int col = 0; col < n; col++){
			// Copying into temp matrix only those elem that are not given row and col
			if(row != p && col != q){
				temp[i][j++] = mat[row][col];
				
				// Row is filled, so increase row index and reset col index
				if(j == n - 1){
					j = 0;
					i++;
				}
			}
		}
	}
}

int det(int mat[N][N], int n){
	
	int D = 0;
	
	if(n==1)
		return mat[0][0];
	
	int temp[N][N];
	
	int sign = 1;
	
	for(int f = 0; f < n; f++){
		
		//Getting Cofactor of mat[0][f]
		getCofactors(mat, temp, 0, f, n);
		D += sign * mat[0][f] * det(temp, n-1);
		
		sign = -sign;
		
	}
	return D;
}
int main(){
	int i, j, arr[N][N];

	printf("Enter the array elements for Matrix:-\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Enter the array value for arr[%d][%d] - ",i, j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n The Matrix is:-\n");
	display(arr, N, N);
	
	printf("\nThe Determinant of %dx%d Matrix is:- %d",N, N, det(arr, N));
	return 0;
}
