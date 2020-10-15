#include <stdio.h>

int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    printf("The Hexadecimal form - %x \n", num);
    printf("The Octal form - %o \n", num);
    return 0;
}