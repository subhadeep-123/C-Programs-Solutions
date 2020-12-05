#include <stdio.h>

// int *func()
// {
//     static int i = 20;
//     return (&i);
// }

// int main()
// {
//     int *p;
//     p = func();
//     printf("%d", p);
//     return 0;
// }

char *copy(char *t, char *s)
{
    char *r;

    // r = t;

    while (*s != '\0')
    {
        *t = *s;
        t++;
        s++;
    }
    *t = '\0';
    return 0;
}

int main()
{
    char source[] = "jaded";
    char target[10];
    copy(target, source);
    printf("%s \n", target);
    return 0;
}