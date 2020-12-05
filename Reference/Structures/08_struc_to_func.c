#include <stdio.h>
struct details
{
    char name[20];
    int age;
    int weight;
};
void disp(struct details);
int main()
{
    struct details b1 = {"Subhadeep", 21, 70};
    disp(b1);
    return 0;
}
void disp(struct details b1)
{
    printf("%s %d %d", b1.name, b1.age, b1.weight);
}