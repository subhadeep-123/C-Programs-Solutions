#include <stdio.h>
int main()
{
    struct book
    {
        char name[30];
        float price;
        int pages;
    };
    struct book b1 = {"Let Us C", 270, 656};
    struct book b2 = {"Nerwork Programmin in C", 2600, 989};
    struct book b3 = {"How to say no", 159, 285};
    printf("The entered values are:-\n");
    printf("%s %0.2f %d\n", b1.name, b1.price, b1.pages);
    printf("%s %0.2f %d\n", b2.name, b2.price, b2.pages);
    printf("%s %0.2f %d\n", b3.name, b3.price, b3.pages);
    return 0;
}