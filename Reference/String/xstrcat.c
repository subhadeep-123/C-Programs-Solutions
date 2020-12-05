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
void xstrcpy(char *a, char *b, char *c)
{
    while (*b != '\0')
    {
        *a++ = *b;
        *b++;
    }
    while (*c != '\0')
    {
        *a++ = *c;
        *c++;
    }
    *a = '\0';
}
void xstrcat(char *a, char *b)
{
    xstrcpy(a, a, b);
}
int main()
{
    char src[20], tar[20];
    puts("First Name");
    gets(src);
    puts("Last Name");
    gets(tar);
    printf("Executing...\n");
    xstrcat(src, tar);
    printf("Full Name - %s", src);

    printf("\nEnter any Key to exit...");
    getch();
    return 0;
}