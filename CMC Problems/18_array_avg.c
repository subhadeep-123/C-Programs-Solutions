#include <stdio.h>
#define MAX_LEN 10

void avg(int *arr)
{
    int average = 0;
    for (int i = 0; i < MAX_LEN; i++)
        average += *arr++;

    printf("\nThe average is - %d", average / MAX_LEN);
}

int main()
{
    int arr[MAX_LEN];
    for (int i = 0; i < MAX_LEN; i++)
        scanf("%d", &arr[i]);
    avg(arr);
}