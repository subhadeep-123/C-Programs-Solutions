#include<stdio.h>
void sort(int [], int);
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
	int i, key, j;
	for(i=1;i<n;i++){
		key = arr[i]; //Key element to compare with its predecessor
		j = i - 1; //Predecessor
		while(j>=0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
	printf("\nSorted Array:-\n");
	display(arr, n);
}
void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
