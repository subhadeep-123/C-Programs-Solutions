#include <stdio.h>
void disp(char *a, int b, int c)
{
    printf("%s %d %d", a, b, c);
}
int main()
{
    struct details
    {
        char name[20];
        int age;
        int weight;
    };
    struct details b1 = {"Subhadeep", 21, 70};
    disp(b1.name, b1.age, b1.weight);
    return 0;
}