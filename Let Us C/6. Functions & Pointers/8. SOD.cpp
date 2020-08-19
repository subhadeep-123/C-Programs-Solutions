#include<stdio.h>
int nonrecursive(int num){
	int res = 0;
	while(num!=0){
		int temp = num % 10;
		num /= 10;
		res += temp;
	}
	return res;
	
}

int recursive(int num){
	int res = 0;
	if (num==0){
		return 0;
	}
	else{
		return ((num%10) + recursive(num/10));
	}
	
}

int main()
{
	int num;
	printf("Enter a 5 digin number:-\n");
	scanf("%d",&num);
	
	int nnres = nonrecursive(num);
	int rres = recursive(num);
	
	printf("SOD Nonrecursive is %d\n", nnres);
	printf("SOD Recursive is %d\n", rres);
	
	return 0;
}
