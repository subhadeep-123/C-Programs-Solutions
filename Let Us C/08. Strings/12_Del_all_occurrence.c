#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
char val[] = "the";
void del_occ(char *c)
{
    int i, j;
    for (i < 0; i < strlen(c); i++)
        for (j = 0; j < strlen(val);)
        {
            if (c[i] == val[j])
            {
                c[i] = c[i + 1];
                j++;
            }
        }
}
int main()
{
    char text[80];
    system("cls");
    printf("Enter Something:-\n");
    scanf("%[^\n]s", text);
    del_occ(text);
    printf("\nAfter Eliminating 'the':-\n");
    puts(text);
    printf("Enter anything to exit...");
    getch();
    return 0;
}