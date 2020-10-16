#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_LEN 10

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reorder(int *arr, int len)
{
    int i, j;
    for (i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
    printf("The Arranged Array is - \n");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[MAX_LEN], len;

    system("cls");

    printf("Enter the no.of Data you want to enter: ");
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    reorder(arr, len);

    return 0;
}