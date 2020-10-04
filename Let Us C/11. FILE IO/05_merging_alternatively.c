#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>
int main(void)
{
    FILE *fs1, *fs2, *ft;
    char text1[100], text2[100];

    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    system("cls");
    //Opening First File
    fs1 = fopen("File1.txt", "r");
    if (fs1 == NULL)
    {
        puts("Cannot Open Files 1");
        exit(1);
    }

    //Opening Second File
    fs2 = fopen("File2.txt", "r");
    if (fs2 == NULL)
    {
        puts("Can not open File 2");
        fclose(fs1);
        exit(1);
    }

    //Opening Target File
    ft = fopen("Target.txt", "w");
    if (ft == NULL)
    {
        printf("Cannot open target file.");
        exit(1);
    }
    while (fgets(text1, 100, fs1) != NULL && fgets(text2, 100, fs2) != NULL)
    {
        fputs(text1, ft);
        fputs(text2, ft);
    }
    fclose(fs1);
    fclose(fs2);
    fclose(ft);
    printf("\nEnter any key to exit.");
    getch();
    return 0;
}