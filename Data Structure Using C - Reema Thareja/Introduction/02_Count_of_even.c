#include <stdio.h>
#include <conio.h>

void print_even();

typedef unsigned short int usi;

int main(void)
{
    printf("Print Begins...");
    print_even();
    printf("\nEnter anything to exit...");
    getch();
    return 0;
}

void print_even()
{
    usi sum;
    for (register int i = 1; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            sum += i;
        }
    }
    printf("\nThe sum of even nos is - %d", sum);
}