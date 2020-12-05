#include <stdio.h>
int main()
{
    struct details
    {
        char name[20];
        int age;
        int weight;
    };
    struct details b1 = {"Subhadeep", 21, 70};
    struct details *ptr;
    ptr = &b1;
    printf("%s %d %d\n", b1.name, b1.age, b1.weight);
    printf("%s %d %d", ptr->name, ptr->age, ptr->weight);
    return 0;
}