#include<stdio.h>
void check(int [], int);
void display(int *, int);
int main(){
	int arr[20], i, len;
	printf("Enter the length of the array:-\n");
	scanf("%d",&len);
	printf("Enter the array elements:-\n");
	for(i=0;i<=len-1;i++){
		printf("Enter value for array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("The entered array is:-\n");
	display(arr, len);
	check(arr, len);
	return 0;
}
void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
void check(int arr[], int n){
	int i, j;
	j = (n-1)/2;
	for(i=0;i<=j;i++){
		if(arr[i] == arr[n - (i+1)])
			printf("\nValue - %d\nLeft Index - %d\nRight Index - %d",arr[i], i, i+j);
		else
			printf("\nNo Match!! for value - %d");
	}
}
