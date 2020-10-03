#include<stdio.h>
//void largest(int);
void largest(int arr[][5]){
	int i, j;
	int lrg = 0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i][j] > lrg)
				lrg = arr[i][j];
		}
	}
	printf("The Largest value in the array is:- %d\n",lrg);
}
int main(){
	int arr[5][5], i, j;
	printf("Enter the elements of the 2D array:-\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Enter the value for array[%d][%d]:- ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nThe entered Array:-\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	largest(arr);
	return 0;
}

