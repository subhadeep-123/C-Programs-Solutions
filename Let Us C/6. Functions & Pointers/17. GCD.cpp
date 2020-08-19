#include<stdio.h>
void GCD(unsigned int, unsigned int);
int main(){
	unsigned int L, S, temp;
	
	printf("Enter 1st Number:-\n");
	scanf("%d",&L);
	
	printf("Enter 2nd Number:-\n");
	scanf("%d",&S);
	if(S>L){
		temp = L;
		L = S;
		S = temp;
	}
	GCD(L,S);
}
void GCD(unsigned int a, unsigned int b){
	unsigned int D, R;
	{
		D = a/b;
		R = a - D * b;
		a = b;
		if(R==0)
			printf("GCD = %d",b);
		else{
			b = R;
			GCD(a,b);
		}
	}
}
