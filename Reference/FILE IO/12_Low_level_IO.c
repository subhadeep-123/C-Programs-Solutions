#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/unistd.h>
int main()
{
    char buffer[1024], source[256], target[256];
    int inhandle, outhandle, bytes;
    system("cls");
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    // printf("Enter source Filename: ");
    // gets(source);
    inhandle = open("File.txt", O_RDONLY | O_BINARY);
    if (inhandle == -1)
    {
        puts("\nCannon Open the File");
        exit(1);
    }

    printf("\nEnter target Filename: ");
    gets(target);

    outhandle = open(target, O_CREAT | O_BINARY | O_WRONLY | S_IWRITE);
    if (outhandle == -1)
    {
        puts("\nCannon Open the File");
        close(inhandle);
        exit(1);
    }
    while (1)
    {
        bytes = read(inhandle, buffer, 1024);
        if (bytes > 0)
            write(outhandle, buffer, bytes);
        else
            break;
    }
    close(inhandle);
    close(outhandle);
    return 0;
}
