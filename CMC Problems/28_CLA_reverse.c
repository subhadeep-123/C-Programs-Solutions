#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Improper no of argumets\n");
        exit(0);
    }
    for (int i = 3; i > 0; i--)
        printf("%s ", argv[i]);
}