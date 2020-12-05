#include <stdio.h>
#include <string.h>
#include <conio.h>
#define FOUND 1
#define NOTFOUND 0
int main()
{
    char unames[][20] = {
        "subhadeep",
        "Richard",
        "Ria",
        "Sweta",
        "Litisha"};
    int i, flag;
    char name[20];
    int a;
    printf("Username:-\n");
    scanf("%s", name);
    for (i = 0; i < 5; i++)
    {
        flag = NOTFOUND;
        a = strcmp(&unames[i][0], name);
        if (a == 0)
        {
            printf("Welcome %s", name);
            flag = FOUND;
            break;
        }
    }
    if (flag == NOTFOUND)
        printf("You are a treaspasser!!");

    printf("\nEnter any key to exit..");
    getch();
    return 0;
}