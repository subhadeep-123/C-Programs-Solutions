#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#define LEN 3
void reverse(char);
int main()
{
    char *s[] = {
        "To err is human",
        "But to really mess things up",
        "One needs to know C!!"

    };
    char temp[50];
    int i;
    system("cls");
    printf("Before Reversing\n");
    for (i = 0; i < LEN; i++)
        printf("%s\n", s[i]);
    printf("\nAfter Reversing\n");
    for (i = 0; i < LEN; i++)
    {
        strcpy(temp, s[i]);
        printf("%s\n", strrev(temp));
    }
    return 0;
}