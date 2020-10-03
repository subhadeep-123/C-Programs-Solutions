#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#define LEN 20
int len(char *a)
{
    int count = 0;
    while (*a++ != '\0')
    {
        count += 1;
    }
    return count;
}
void sort(char *a)
{
    int i, j;
    for (i = 0; i < len(a) - 1; i++)
    {
        for (j = i + 1; j < len(a); j++)
        {
            if (a[i] > a[j])
            {
                char *temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    char alpha[LEN], temp[LEN];
    system("cls");
    printf("Enter the Word:-\n");
    scanf("%s", alpha);
    printf("The word you have entered - %s", alpha);
    strlwr(alpha);
    sort(alpha);
    printf("\nSorted Array:-\n");
    printf("%s", alpha);
    printf("\nEnter any key to exit..");
    getch();
    return 0;
}