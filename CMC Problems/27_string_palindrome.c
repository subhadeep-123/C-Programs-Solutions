#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name[20], temp[20];
    system("cls");

    puts("Enter a word: ");
    gets(name);

    strcpy(temp, name);

    printf("Before Reversing: ");
    puts(name);

    strcpy(name, strrev(name));

    printf("Afer Sorting: ");
    puts(name);

    if (strcmp(name, temp) == 0)
        printf("\nPALINDROME");
    else
        printf("\nNON PALINDROME");
    getch();
    return 0;
}