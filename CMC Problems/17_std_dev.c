#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX_NUM 5

int avg(int *arr)
{
    int val = 1;
    for (int i = 0; i < MAX_NUM; i++)
        val += *arr++;
    val /= MAX_NUM;
    return val;
}
int square(int val)
{
    return val * val;
}
int main()
{
    int val[5], std;
    printf("Enter the value in the array:- \n");
    for (int i = 0; i < MAX_NUM; i++)
    {
        printf("Enter the value for val[%d]: ", i);
        scanf("%d", &val[i]);
    }

    std = square(avg(val));
    printf("\n\nThe Standar Deviation is - %d \n", std);
}
