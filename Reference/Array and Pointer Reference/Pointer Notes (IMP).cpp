#include<stdio.h>
int main(){
	int a,b;
	
	a = 10;
	b = 20;
	
	int *j, **k;
	
	printf("Val of A - %d\n",a);
	printf("Val of B - %d\n\n",b);
	
	printf("Signed Location of A - %d\n",&a);
	printf("Signed Location of B - %d\n\n",&b);
	
	printf("*(&a) - %d\n",*(&a));
	printf("*(&b) - %d\n\n",*(&b));
	
	j = &a;
	
	printf("J(Since Val of j is the location of A) - %d\n", *j);
	printf("*j - %d\n",*j);
	printf("&j - %d\n",&j);
	printf("*(&j) - %d\n",*(&j));

	printf("*(*(&j)) = *(&a) - %d\n\n", *(*(&j)) );
	
	k = &j;

	printf("K(Since Val of j is the location of J) - %d\n",k);
	printf("*k - %d\n",*k);
	printf("&k - %d\n",&k);
	printf("*(&k) - %d\n",*(&k));
	printf("*(*(&k)) - %d\n",*(*(&k)));
	printf("*(*(*(&k))) - %d\n",*(*(*(&k))));
	
	printf("%d",**k);
}
