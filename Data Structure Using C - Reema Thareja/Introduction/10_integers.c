#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *ptr;
    unsigned short int i, len;
    printf("Enter the Lenght of the variable: ");
    scanf("%u", &len);
    ptr = (int *)malloc(len * sizeof(int));
    for (i = 0; i < len; i++)
        scanf("%d", &ptr[i]);
    int count = 0;
    for (i = 0; i < len; i++)
        if (count != 2)
        {
            count++;
            printf("%d ", ptr[i]);
        }
        else
        {
            count = 0;
            printf("%d ", ptr[i]);
            printf(",\n");
            continue;
        }
}