#include<stdio.h>
#include<conio.h>

void add_on_pointer();
void subs_on_pointer();
void subs_pointer_from_pointer();
void comp_of_two_pointers();
void what_we_cannon_do_on_pointers();

int a = 10;
int arr[] = {10,20,30,40,50,60,70,80,90,100};
int main(){
	add_on_pointer();
//	subs_on_pointer();
//	subs_pointer_from_pointer();
//	comp_of_two_pointers();
//	what_we_cannon_do_on_pointers();
	
	getch();
	return 0;
}
void what_we_cannon_do_on_pointers(){
	printf("\t What we cannon do on pointers\n");
	printf("Addition of two pointer variable\n");
	printf("Multiplication of a pointer with a constant\n");
	printf("Division of pointer with a constant\n");
	printf("\n");
}
void subs_pointer_from_pointer(){
	//We can substract a pointer from another pointer as long as both var points to elements of the same array.
	int *i, *j;
	i = &arr[1];
	j = &arr[5];
	printf("\tSubstration of Pointer From another Pointer\n");
	printf("j-i - %d\n*j-*i - %d\n", j-i, *j-*i);
	printf("\n");
}
void comp_of_two_pointers(){
	//pointers can be compared provided both vars points obj of the same data type.
	// we can pointers when the var points to elements of the same array.
	int *j, *k;
	j = &arr[4];
	k = (arr + 4); // Incrementing 4 times from arr[0] 
	printf("\tComparing Two pinters\n");
	printf("&arr[4] - %d\n",j);
	printf("arr - %d\n",arr);
	printf("(arr + 4) - %d\n",k);
	if(j==k)
		printf("Both points to the same loc\n");
	else
		printf("Both does not points to the same loc\n");
	printf("\n");
}
void add_on_pointer(){
	int *j, *k;
	printf("\tAddition on Pointer\n");
	printf("A - %d\n",a);
	printf("Loc of A - %d\n",&a);
	
	j = &a; //j = &a[0]
	printf("J - %d\n",j);
	printf("Val in j - %d\n", *j);	
	
	//Garbage Value
	j = j+4;
	printf("J+2 - %d\n",j);	
	printf("Val in j+2 - %d\n", *j);
	
	//Garbage Value
//	j = j+5;
//	printf("J+5 - %d\n",j);	
//	printf("Val in j+5 - %d\n", *j);
	
	//Garbage Value
	k = j+6;
	printf("j+6 - %d\n",k);
	printf("Val in j+6 - %d\n", *k);
	printf("\n");
}

void subs_on_pointer(){
	int *j, *k;
	printf("\tSubstraction on Pointer\n");
	printf("A - %d\n",a);
	printf("Loc of A - %d\n",&a);
	
	j = &a;
	printf("J - %d\n",j);
	printf("Val in j - %d\n", *j);	
	
	//Garbage Value
	j = j-2;
	printf("J-2 - %d\n",j);	
	printf("Val in j-2 - %d\n", *j);
	
	//Garbage Value
	j = j-5;
	printf("J-5 - %d\n",j);	
	printf("Val in j-5 - %d\n", *j);
	
	//Garbage Value
	k = j-6;
	printf("J-6 - %d\n",k);
	printf("Val in j-6 - %d\n", *k);
	printf("\n");
}
