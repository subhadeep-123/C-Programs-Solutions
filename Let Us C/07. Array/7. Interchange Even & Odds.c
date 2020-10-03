#include<stdio.h>
void interchange(int [], int);
void display(int *, int);
int main(){
	int arr[20], i, len;
	printf("Enter the length of the array:-\n");
	scanf("%d",&len);
	printf("Enter the array elements:-\n");
	for(i=0;i<=len-1;i++){
		printf("Enter value for array[%d]: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The entered array is:-\n");
	display(arr, len);
	interchange(arr, len);
	return 0;
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void interchange(int arr[], int n){
	int i;
	int tmp;
	for(i=0;i<=n-1;i=i+2){
		tmp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = tmp;
	}
	printf("\nInterchanged Values:-\n");
	display(arr, n);
}

void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
