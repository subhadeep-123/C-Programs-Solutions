#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
    char word[30];
    int num_words = 0, four_letter_words = 0;
    FILE *fs;
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    fs = fopen("File.txt", "r");
    if (fs == NULL)
    {
        printf("\nCannon Open the FIle...");
        exit(1);
    }
    while (fscanf(fs, "%s", word) != EOF)
    {
        num_words++;
        if (strlen(word) == 4)
            four_letter_words++;
        printf("%s \n", word);
    }
    printf("The Total No of Words - %d \nTotal No of 4 Letter Words - %d\n", num_words, four_letter_words);
    fclose(fs);
    printf("Enter Anything to exit..");
    getch();
    return 0;
}