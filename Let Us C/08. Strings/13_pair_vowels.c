#include <stdio.h>
#include <conio.h>
#define VowelisOccur str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'
int count(char *str)
{
    int i, j;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
        if (VowelisOccur)
        {
            i++;              /*To check next vowel*/
            if (VowelisOccur) /*If second vowel after first if occur*/
            {
                printf("%c%c ", str[i - 1], str[i]); /*Printing two simultaneous vowels*/
                count++;                             /*Counting Two simultaneous vowels*/
            }
        }

    return count;
}
int main()
{
    char text[50];
    puts("Enter the Text:-");
    gets(text);
    printf("\nThe count of any two vowels in succession is:- %d", count(text));
    printf("\nEnter any key to exit..");
    getch();
    return 0;
}