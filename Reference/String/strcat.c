#include <stdio.h>
#include <string.h>
void main()
{
    char str1[] = "Subhadeep";
    char str2[] = " Banerjee";
    strcat(str1, str2);
    printf("After concataniting - %s", str1);
}