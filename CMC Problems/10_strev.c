#include <stdio.h>
int xstrlen(char *arr)
{
    int count = -1;
    while (*arr++ != '\0')
        count++;

    return count;
}
void rev(char *arr)
{
    int len = xstrlen(arr);
    for (int i = len; i >= 0; i--)
        printf("%c", arr[i]);
}
int main()
{
    char name[20] = "Subhadeep Banerjee";
    int i = 0;
    rev(name);
    return 0;
}