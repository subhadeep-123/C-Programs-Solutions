#include <stdio.h>
int main()
{
    char data[30];
    int pos, i;
    printf("Enter any data:-\n");
    scanf("%[^\n]s", data);
    printf("Enter the position:-\n");
    scanf("%d", &pos);
    for (i = pos - 1; i < (pos * 2) - 1; i++)
    {
        printf("%c", data[i]);
    }
}