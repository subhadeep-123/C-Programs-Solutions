#include <stdio.h>
//Constant because the value may get altered so we are making sure that does not happen.
void xstrcpy(const char *a, char *b)
{
    while (*a != '\0')
    {
        *b++ = *a;
        *a++;
    }
    *b = '\0';
}
int main()
{
    char src[20], tar[20];
    printf("Enter any name:-\n");
    scanf("%[^\n]s", src);
    printf("Source - %s", src);
    printf("\n... Copying!!");
    xstrcpy(src, tar);
    printf("\nTarget - %s", tar);
    return 0;
}