#include <stdio.h>
#include <conio.h>

void break_function(int[]);
int main(void)
{
    int arr[10];
    for (register int i = 0; i < 10; i++)
    {
        printf("Enter Valur for index %d \n", i);
        scanf("%d", &arr[i]);
    }
    printf("The values you have Entered!");
    for (register int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    break_function(arr);

    printf("Enter anything to exit...");
    getch();
    return 0;
}

void break_function(int arr[])
{
    unsigned short int i, count = 0;
    for (i = 0; i < 9; i++)
    {
        if (count != 2)
        {
            printf("%d ", arr[i]);
            count++;
        }
        else
        {
            count = 0;
            printf("%d ", arr[i]);
            printf("\n");
            continue;
        }
    }
}