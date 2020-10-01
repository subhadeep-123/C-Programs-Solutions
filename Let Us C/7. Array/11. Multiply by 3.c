#include<stdio.h>
void mult(int [], int);
void display(int *, int);
int main(){
	int arr[20], i, len;
	int num;
	printf("Enter the length of the array:-\n");
	scanf("%d",&len);
	printf("Enter the array elements:-\n");
	for(i=0;i<=len-1;i++){
		printf("Enter value for array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("The entered array is:-\n");
	display(arr, len);
	mult(arr, len);
	
	return 0;
}
void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
void mult(int arr[], int n){
	int i;
	for(i=0;i<=n-1;i++){
		arr[i] *= 3;
	}
	printf("\nAfter Multiplying:-\n");
	display(arr, n);
}
