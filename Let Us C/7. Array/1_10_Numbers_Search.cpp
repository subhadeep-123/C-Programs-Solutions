#include<stdio.h>
void search(int *, int, int);
int main(){
	int arr[10], i;
	int num;
	printf("Enter the array elements:-\n");
	for(i=0;i<=9;i++){
		printf("Enter Value for arr[%d]:- ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the no to search:-\n");
	scanf("%d",&num);
	
	printf("The entered array:-\n");
	for(i=0;i<=9;i++){
		printf("%d ",arr[i]);
	}
	search(arr, 10, num);
	return 0;
}
void search(int *x, int len, int num){
	int i, count = 0;
	for(i=0;i<=len-1;i++){
		if(*x++ == num)
			count++;
	}	
	count>0?printf("\nThe Number %d is present %d in the array:-",num, count):printf("\nThe number %d is not present in the array",num);
}
