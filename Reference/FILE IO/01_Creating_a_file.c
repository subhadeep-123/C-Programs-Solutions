#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch, dir[10], s[100];
    chdir("c:\\Users\\SUBHADEEP\\Desktop");
    printf("We are in %s Directory\n", getcwd(s, 100));
    fp = fopen("Test.txt", "r");
    if (fp == NULL)
    {
        puts("Cannon Open the file!\n");
        exit(1);
    }

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}