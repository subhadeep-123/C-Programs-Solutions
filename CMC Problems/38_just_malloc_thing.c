#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int *ptr, len;
    system("cls");
    printf("Enter the length: ");
    scanf("%d", &len);
    ptr = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
        scanf("%d", &ptr[i]);
    printf("The array elements are!!");
    for (int i = 0; i < len; i++)
        printf("%d ", ptr[i]);
    free(ptr);
    puts("\n\nEnter anything to exit..");
    getch();
    return 0;
}