#include<stdio.h>
void check(int [], int, int *);
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
	check(arr, len, &num);
	printf("\nThe smallest number of the array is - %d",num);
	
	return 0;
}
void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
void check(int arr[], int n, int *p){
	int i;
	*p = arr[0];
	for(i=1;i<=n-1;i++)
		if(arr[i] < *p)
			*p = arr[i];
}
