#include <stdio.h>
int main()
{
    int wt = 65;
    printf("Weigth is %d kg\n", wt);
    printf("Weigth is %2d kg\n", wt);
    printf("Weigth is %4d kg\n", wt);
    printf("Weigth is %6d kg\n", wt);
    printf("Weigth is %-6d kg\n", wt);
    printf("Weigth is %1d kg\n", wt);
    char fname1[] = "Swapna";
    char fname2[] = "Sipra";
    char fname3[] = "Subir";
    char fname4[] = "Subhadeep";
    printf("%20s%20s\n", fname1, fname2);
    printf("%20s%20s\n", fname3, fname4);
    return 0;
}