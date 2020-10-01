#include<stdio.h>
void display(int *arr, int n){
	int i;
	for(i=0;i<=n-1;i++)
		printf("%d ",*arr++);
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int arr[], int n){
	int i, j;
	for(i=0;i<n-1;i++)
		// n-i-1 Because the last element is already in place.
		for(j=0;j< n-i-1; j++)
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
	printf("\nSorted Array:-\n");
	display(arr, n);
}
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
	sort(arr, len);
	return 0;
}
