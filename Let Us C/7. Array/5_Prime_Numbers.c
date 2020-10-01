#include<stdio.h>
int main(){
	int arr[100], i, n=100,j;
	int flag;
	for(i=0;i<=99;i++){
		arr[i] = i;
	}
	for(i=1;i<=100;i++){
		flag = 1;
		for(j=2;j<i/2;j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
	if(flag!=0 && i!=1)
		printf("%d ",arr[i]);
	}
	return 0;
}
