#include <stdio.h>
#include <string.h>
int main(void)
{
    char text[] = "subhadeep banerjee";
    char volwels[] = "aeiou";
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        for (int j = 0; j < strlen(volwels); j++)
        {
            if (text[i] == volwels[j])
            {
                count = count + 1;
            }
        }
    }
    printf("The no of volwes in %s is %d", text, count);
    return 0;
}