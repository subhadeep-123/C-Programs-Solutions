#include <stdio.h>
#include <string.h>
int main(void)
{
    char addr[100];
    int count = 0;
    printf("Enter the address:- ");
    scanf("%[^\n]s", &addr);
    // printf("%s", addr);
    for (register int i = 0; i < strlen(addr); i++)
    {
        if (i == ',')
        {
            printf("\n");
            count++;
        }
        else
            printf("%c", addr[i]);
        // printf("%c  ", addr[i]);
    }
    printf("\n%d", count);
    return 0;
}