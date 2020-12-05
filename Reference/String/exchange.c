#include <stdio.h>
#include <string.h>
int main()
{
    char *names[] = {
        "subhadeep",
        "sweta",
        "Ria",
        "Oiendrila"};

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }
    printf("\tSwapping Values...\n");
    char *temp;
    temp = names[0];
    names[0] = names[2];
    names[2] = temp;
    printf("\tAfter Swapping\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", names[i]);
    }
}