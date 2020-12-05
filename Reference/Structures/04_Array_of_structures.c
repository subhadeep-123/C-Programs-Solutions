#include <stdio.h>
void linkfloat()
{
    float a = 0, *b;
    b = &a; //Cause the emulator to be linked
    a = *b; //Supress the warning - variable not used
}
int main()
{
    struct book
    {
        char name;
        int pages;
    };
    struct book b[5];
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf("%c %d", &b[i].name, &b[i].pages);
    }
    printf("The values are:-\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%c %d\n", b[i].name, b[i].pages);
    }
}