#include<stdio.h>
#include<stdlib.h>
void Prime_Fact(unsigned int);
void Rec_Prime_Fact1(unsigned int);
void Rec_Prime_Fact2(unsigned int,unsigned int);

int main()
{
    unsigned int Num;
    //clrscr();
    printf("Program to obtain the prime factors of the number\n");
    
	printf("\nEnter a Positive No. : ");
    scanf("%d",&Num);
    
    Prime_Fact(Num);
    
    printf("\nPrime factors of %d (using recursion method1) are: ",Num);
	Rec_Prime_Fact1(Num);
	
    printf("\nPrime factors of %d (using recursion method2) are: ",Num);
	Rec_Prime_Fact2(Num,2);
}

void Prime_Fact(unsigned int N)    // Normal Function
{
    unsigned int i=2;
    printf("\nPrime factors of %d are: ",N);
    while(N>1)
    {
        while(N%i==0)
        {
            printf("%d ",i);
            N=N/i;
        }
        i++;
    }
}

/************************* Recursive Approach 1 *************************/
void Rec_Prime_Fact1(unsigned int N)
{
    static unsigned int i = 2 ; // defined static so as to initialize only once
    while(N%i==0)
    {
        printf("%d ",i);
        N=N/i;
    }
    if(N>1)
    {
        i++;
        Rec_Prime_Fact1(N); //recursion
    }
}

/************************* Recursive Approach 2 *************************/
void Rec_Prime_Fact2(unsigned int N, unsigned int i)
{
    if(N%i==0)
    {
        printf("%d ",i);
        N=N/i;
        if(N>1)
            Rec_Prime_Fact2(N,i); //recursion
        else
            exit(1);
    }
    else
    {
        i++;
        Rec_Prime_Fact2(N,i); //recursion
    }
}

