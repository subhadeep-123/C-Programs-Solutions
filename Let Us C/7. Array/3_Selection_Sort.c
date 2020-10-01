#include<stdio.h>
void sort(int [], int);
void swap(int *, int *);
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
	
	sort(arr, len);
	return 0;
}
void sort(int arr[], int n){
	int i, j, min_idx;
	
	//One by one move boundary of unsorted array
	for(i=0;i<n-1;i++){
		//Find the min element of in unsorted array
		min_idx = i;
		for(j=i+1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;
		//Swap the found min element with the first element
		swap(&arr[min_idx], &arr[i]);
	}
	printf("\nSorted Array:-\n");
	display(arr, n);
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void display(int *arr, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*arr++);
	}
}

