#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#define Vowel line[i] == 'A' || line[i] == 'a' || line[i] == 'E' || line[i] == 'e' || line[i] == 'I' || line[i] == 'i' || line[i] == 'O' || line[i] == 'o' || \
                  line[i] == 'U' || line[i] == 'u'
void del_vow(char *line)
{
    for (int i = 0; line[i] != '\0'; i++)
        if (Vowel)
            for (int j = i; line[j] != '\0'; j++)
                line[j] = line[j + 1];
}
int main()
{
    char text[80];
    system("cls");
    printf("Enter Something:-\n");
    scanf("%[^\n]s", text);
    del_vow(text);
    printf("\nAfter Eliminating the vowels:-\n");
    puts(text);
    printf("Enter anything to exit...");
    getch();
    return 0;
}