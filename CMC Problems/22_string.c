#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10], str2[10], str3[20];
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
    {
        strcpy(str3, strcat(str1, str2));
        printf("The Concatanader String is:- %s", str3);
    }
    else
        printf("\nNot Same!!");

    return 0;
}