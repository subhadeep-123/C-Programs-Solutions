#include <stdio.h>
struct details
{
    char name[20];
    int age;
    int weight;
};
void display(struct details *);
int main()
{
    struct details b1 = {"Subhadeep", 21, 70};
    // struct details *ptr;
    // ptr = &b1;
    // display(ptr);
    display(&b1);
    return 0;
}
void display(struct details *ptr)
{
    printf("%s %d %d", ptr->name, ptr->age, ptr->weight);
}