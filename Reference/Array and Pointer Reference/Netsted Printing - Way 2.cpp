#include<stdio.h>
void display(int *);
void show(int *);
int main(){
	int i;
	int marks[] = {10,15,20,25,30,35,40,45,50};
	for(i=0;i<=8;i++){
		display(&marks[i]);
	}
	return 0;
}
void display(int *x){
	int **k;
	k = &x;
	show(*k);
}
void show(int *x){
	printf("%d ",*x);
}
