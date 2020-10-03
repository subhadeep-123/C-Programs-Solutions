#include <stdio.h>
#include <string.h>
int main()
{
    char *msg[] = {
        "Hammer and Tongs",
        "Tooth and nail",
        "Spit and polish",
        "You and C"};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += strlen(msg[i]);
    }
    printf("%d", sum);
}