#include <stdio.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Improper No of Arguments!!");
        exit(1);
    }
    printf("Before Swapping:\n");
    printf("First Value: %s, Address - %u\n", argv[1], &argv[1]);
    printf("Second Value: %d, Address - %u\n", atoi(argv[2]), &argv[2]);

    swap(argv[1], argv[2]);

    printf("After Swapping:\n");
    printf("First Value: %s, Address - %u\n", argv[1], &argv[1]);
    printf("Second Value: %d, Address - %u\n", atoi(argv[2]), &argv[2]);

    return 0;
}