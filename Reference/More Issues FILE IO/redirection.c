#include <stdio.h>
#include <unistd.h>
int main()
{
    chdir("C:\\Users\\SUBHADEEP\\Desktop");
    char ch;
    while ((ch = getc(stdin)) != EOF)
        putc(ch, stdout);
    return 0;
}