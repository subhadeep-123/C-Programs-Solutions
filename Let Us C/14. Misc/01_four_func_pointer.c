#include <stdio.h>
#include <conio.h>

float one(int, int);
float two(int, int);
float three(int, int);
float four(int, int);

int main()
{
    float (*ptr[4])(int, int);
    float a, b, c, d;
    ptr[0] = one;
    ptr[1] = two;
    ptr[2] = three;
    ptr[3] = four;
    a = ptr[0](1, 2);
    b = ptr[1](2, 4);
    c = ptr[2](6, 3);
    d = ptr[3](22, 7);
    printf("a : %f\tb : %f\n", a, b);
    printf("c : %f\td : %f\n", c, d);
    _getch();
    return 0;
}
float one(int a, int b)
{
    float r;
    r = (float)a / b;

    return r;
}
float two(int x, int y)
{
    float ans;
    ans = (float)x / y;
    return ans;
}
float three(int i, int j)
{
    float a;
    a = (float)i / j;
    return a;
}
float four(int m, int n)
{
    return ((float)m / n);
}