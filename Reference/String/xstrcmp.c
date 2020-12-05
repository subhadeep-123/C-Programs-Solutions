#include <stdio.h>
#include <conio.h>
int xstrlen(char *a)
{
    int count = 0;
    while (*a != '\0')
    {
        count++;
        a++;
    }
    return count;
}
int xstrcmp(char *a, char *b)
{
    if (xstrlen(a) == xstrlen(b))
    {
        while (*a != '\0')
        {
            if (*a == *b)
                return 0;
            else
            {
                return (*a - *b);
            }
        }
    }
}
int main()
{
    char a[20], b[20];
    puts("First Name");
    gets(a);
    puts("Last Name");
    gets(b);
    printf("Executing...\n");

    printf("After Comparing - %d", xstrcmp(a, b));
    printf("\nEnter any Key to exit...");
    getch();
    return 0;
}
