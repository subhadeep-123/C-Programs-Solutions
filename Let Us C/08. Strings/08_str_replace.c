#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <conio.h>
#define LEN 20
#define LINE 6
void ser_rep(char **str, char *old, char *news)
{
    int i, j, k, m, c;
    j = k = m = i = c = 0;
    char ans[10][100], *p;

    for (i = 0; i <= LINE - 1; i++)
    {
        m = 0;
        c = 0;
        /*This loop for traversing the current line character by character.*/
        for (j = 0; str[i][j] != '\0';)
        {

            if (str[i][c] == old[k]) /*If the character matches*/
            {
                k++;
                c++;
                if (old[k] == '\0') /*If the whole word is found.*/
                {
                    /*This loop is replacing the word character by character.*/
                    for (k = 0; news[k] != '\0'; k++, m++)
                        ans[i][m] = news[k];
                    j = c;
                    k = 0;
                }
            }
            else /*If the character/word is not matched, so as it is string is copied.*/
            {
                ans[i][m] = str[i][j];
                m++;
                j++;
                c = j;
                k = 0;
            }
        }
        ans[i][m] = '\0'; /*Terminate every line by NULL character*/
        j = k = m = 0;    /*Reinitialization for next line.*/
    }
    for (i = 0; i <= LINE - 1; i++)
    {
        p = (char *)malloc(strlen(ans[i]) + 1);
        /*Memory needed is 1 more for null character.
      str[i] = ans[i]; This doesn't works becuase left side is pointer and right side is simple
      char variable therefore a news pointer p is taken and copied the content of ans[i] and
      assign to the str[i].*/
        strcpy(p, ans[i]);
        str[i] = p;
    }
}
int main()
{
    char *str[] = {
        "We will teach you how to to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "All through C"};
    char str1[LEN], str2[LEN];
    printf("Enter to word to search:- ");
    gets(str1);
    printf("Enter the word to replace:- ");
    gets(str2);
    printf("The entered words are:-\n %s %s", str1, str2);
    printf("\nBEFORE\n");
    for (int i = 0; i < LINE; i++)
        printf("Row - %d, Len - %d, Text - %s\n", i, strlen(str[i]), str[i]);
    ser_rep(str, str1, str2);
    printf("AFTER\n");
    for (int i = 0; i < LINE; i++)
        printf("Row - %d, Len - %d, Text - %s\n", i, strlen(str[i]), str[i]);
    printf("\nEnter any key to exit...");
    getch();
    return 0;
}