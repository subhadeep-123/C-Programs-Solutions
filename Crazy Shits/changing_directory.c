#include <stdio.h>
#include <unistd.h>
int main()
{
    char s[100];
    printf("The current directory is - %s \n", getcwd(s, 100));

    chdir("..");
    chdir("c:\\Users\\SUBHADEEP\\Desktop");

    printf("%s \n", getcwd(s, 100));

    return 0;
}