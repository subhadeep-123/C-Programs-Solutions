#include<stdio.h>
void count(int [], int, int *, int *, int *, int *);
void display(int *, int);
int main(){
	int arr[100], i, len;
	int pos, neg, even, odd;
	pos = neg = even = odd = 0;
	printf("Enter the length of the array:-\n");
	scanf("%d",&len);
	printf("Enter the array elements:-\n");
	for(i=0;i<=len-1;i++){
		printf("Enter value for array[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("The entered array is:-\n");
	display(arr, len);
	count(arr, len, &pos, &neg, &even, &odd);
	printf("\nPos - %d\nNeg - %d\nEven - %d\nOdd - %d",pos,neg,even,odd);
	return 0;
}
void count(int arr[], int n, int *pos, int *neg, int *even, int *odd){
	int i;
	for(i=0;i<=n-1;i++){
		if(arr[i] > 0){
			*pos += 1;
			if(arr[i] % 2 == 0)
				*even += 1;
			else
				*odd += 1;
		}		
		else
			*neg += 1;
	}
}
void display(int *x, int n){
	int i;
	for(i=0;i<=n-1;i++){
		printf("%d ",*x++);
	}
}
