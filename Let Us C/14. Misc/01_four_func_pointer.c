#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int one(int a, int b)
{
    return (float)(a / b);
}
int two(int a, int b)
{
    return (float)(a * b) / 4;
}
int three(int a, int b)
{
    return (float)(a + b) * 2.5;
}
int four(int a, int b)
{
    return (float)(a - b) * 4.5;
}

int main()
{
    int *arr[4];
    int i;
    system("cls");

    //Checking Before Initializing
    printf("One - %u", one);
    printf("Two - %u", two);
    printf("Three - %u", three);
    printf("Four - %u", four);

    void (*func_ptr1)();
    func_ptr1 = one;
    void (*func_ptr2)();
    func_ptr2 = two;
    void (*func_ptr3)();
    func_ptr3 = three;
    void (*func_ptr4)();
    func_ptr4 = four;

    //Invoking and Displaying
    printf("One - %u", func_ptr1);
    printf("Two - %u", func_ptr2);
    printf("Three - %u", func_ptr3);
    printf("Four - %u", func_ptr4);

    getch();
    return 0;
}