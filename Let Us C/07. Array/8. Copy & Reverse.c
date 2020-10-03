#include<stdio.h>
void reverse(int [], int);
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
	reverse(arr, len);
	return 0;
}
void reverse(int arr[], int n){
	int rev[n], i, j;
	j = 0;
	for(i=n-1;i>=0;i--){
		rev[j] = arr[i];
		j++;
	}
	printf("\nReversed Array:-\n");
	display(rev, n);
}
void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
