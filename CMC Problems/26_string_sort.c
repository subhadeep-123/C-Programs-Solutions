#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int len(char *arr)
{
    int count = 0;
    while (*arr++ != '\0')
        count++;
    return count;
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    char name[20], temp;
    system("cls");
    puts("Enter a word: ");
    gets(name);

    printf("Before Sorting: ");
    puts(name);
    printf("Afer Sorting: ");
    for (int i = 0; i < len(name) - 1; i++)
        for (int j = i + 1; j < len(name); j++)
            if (name[i] > name[j])
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
    puts(name);
    getch();
    return 0;
}