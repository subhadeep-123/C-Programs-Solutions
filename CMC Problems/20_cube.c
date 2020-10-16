#include <stdio.h>
int cube(int *a)
{
    return *a * *a * *a;
}
int main()
{
    int a;
    printf("Enter Two Value:- ");
    scanf("%d", &a);

    printf("The Cube is - %d", cube(&a));
    return 0;
}