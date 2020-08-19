#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)? printf("A= %d is greatest",a): (b>a&&b>c)? printf("B = %d greatest",b): printf("C = %d greatest",c);
}
