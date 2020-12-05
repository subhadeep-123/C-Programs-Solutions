#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MALE 0
#define FEMALE 1
#define SINGLE 0;
#define MARRIED 1
#define DIVORCED 2
#define WINDOWED 3
int main()
{
struct employee{
	unsigned gender: 1;
	unsigned mar_status: 2;
	unsigned hobby: 1;
	unsigned scheme: 1;
};		
typedef struct employee EMP;
EMP e;
e.gender = MALE;
e.mar_status = WINDOWED;
e.hobby = 5;
e.scheme = 9;

printf("Gender = %d\n", e.gender);
printf("Maritial Status = %d\n", e.mar_status);
printf("Bytes Occupied by e = %d\n", sizeof(e));
return 0;
}
