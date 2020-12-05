#include <stdio.h>
int main()
{
    struct address
    {
        char ph[20];
        char city[20];
        int pin;
    };

    struct emp
    {
        char name[20];
        struct address a;
    };
    struct emp e = {"Subhadeep", "7980207055", "Kolkata", 700008};
    printf("Name = %s Phone = %s City = %s Pin = %d", e.name, e.a.ph, e.a.city, e.a.pin);
    return 0;
}