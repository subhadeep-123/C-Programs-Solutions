#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Improper No of Arguments!!");
        exit(1);
    }

    printf("First Argument: %s, Address - %u\n", argv[1], &argv[1]);
    printf("Second Argument: %d, Address - %u\n", atoi(argv[2]), &argv[2]);
    printf("Third Argument: %0.2f, Address - %u\n", atof(argv[3]), &argv[3]);

    return 0;
}