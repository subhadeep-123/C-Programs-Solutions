#include <stdio.h>
#include <string.h>
int main()
{
    struct emp
    {
        char name[10];
        int age;
        float sal;
    };
    struct emp b1 = {"Subhadeep", 21, 6195080};
    struct emp b2, b3;

    //Piece Meal copying
    strcpy(b2.name, b1.name);
    b2.age = b1.age;
    b2.sal = b1.sal;
    // b2 = b1; //This works too bitch ass book!!
    //Copying all the elements in one go
    b3 = b2;

    //Printing the values
    printf("The entered values are:-\n");
    printf("%s %d %0.2f \n", b1.name, b1.age, b1.sal);
    printf("%s %d %0.2f \n", b2.name, b2.age, b2.sal);
    printf("%s %d %0.2f \n", b3.name, b3.age, b3.sal);
}