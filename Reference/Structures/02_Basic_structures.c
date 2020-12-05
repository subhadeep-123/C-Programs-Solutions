#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    } b1, b2, b3;
    printf("Enter the values for the following:-\n");
    scanf("%s %f %d", &b1.name, &b1.price, &b1.pages);
    scanf("%s %f %d", &b2.name, &b2.price, &b2.pages);
    scanf("%s %f %d", &b3.name, &b3.price, &b3.pages);
    printf("The entered values are:-\n");
    printf("%s %0.2f %d\n", b1.name, b1.price, b1.pages);
    printf("%s %0.2f %d\n", b2.name, b2.price, b2.pages);
    printf("%s %0.2f %d\n", b3.name, b3.price, b3.pages);
    return 0;
}