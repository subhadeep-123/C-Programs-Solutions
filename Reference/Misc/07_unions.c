#include <stdio.h>

int main()
{
    union a
    {
        short int i;
        char ch[4];
    };
    union a key;

    // key.i = 1024;
    key.i = 512;
    printf("%d \n", key.i);
    printf("Key.ch[0] - %d \n", key.ch[0]);
    printf("Key.ch[1] - %d \n", key.ch[1]);
    return 0;
}