#include<stdio.h>
#include<math.h>     //for sqrt & pow functions

float Calc_dist(float ,float ,float ,float);
double Triangle_Area(float ,float ,float ,float ,float ,float);
int Check_Point(float ,float ,float ,float ,float ,float ,float ,float);

int main()
{
    float x1,y1,x2,y2,x3,y3,x,y;
    //clrscr();
    printf("Program to find if a point lies inside the triangle or not");
    printf("\nEnter co-ordinates of vertices of triangle ABC\n");
    printf("\nEnter 2 co-ordinates(x1,y1) of A: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter 2 co-ordinates(x2,y2) of B: ");
    scanf("%f%f",&x2,&y2);
    printf("Enter 2 co-ordinates(x3,y3) of C: ");
    scanf("%f%f",&x3,&y3);
    printf("Enter co-ordinates(X,Y) of any point P: ");
    scanf("%f%f",&x,&y);
    if(Check_Point(x1,y1,x2,y2,x3,y3,x,y)==1)
        printf("\nPoint P lies inside Triangle ABC");
    else
        printf("\nPoint P lies outside Triangle ABC");
}

int Check_Point(float x1,float y1,float x2,float y2,float x3,float y3,float x,float y)
{
    double ABC,PAB,PBC,PAC;    // areas of each triangles
    double Total;
    int D;
    ABC = Triangle_Area(x1,y1,x2,y2,x3,y3);
    printf("\nArea of Triangle ABC = %0.2lf sq.Unit",ABC);
    PAB = Triangle_Area(x,y,x1,y1,x2,y2);
    PBC = Triangle_Area(x,y,x2,y2,x3,y3);
    PAC = Triangle_Area(x,y,x1,y1,x3,y3);
    Total = PAB+PBC+PAC;
    printf("\nSum of areas of 3 Triangles = %0.2lf sq.Unit",Total);
    D = ABC-Total;
    if(D==0)
        return 1;
    else
        return 0;
}

double Triangle_Area(float p1,float q1,float p2,float q2,float p3,float q3)
{
    float AB,BC,AC,S;
    double AREA;
    AB = Calc_dist(p1,q1,p2,q2);
    BC = Calc_dist(p2,q2,p3,q3);
    AC = Calc_dist(p1,q1,p3,q3);
    S = (AB+BC+AC)/2;
    AREA = sqrt(S*(S-AB)*(S-BC)*(S-AC));
    return AREA;
}

float Calc_dist(float a1,float b1,float a2,float b2)
{
    float dist,a,b;
    a = a1-a2;
    b = b1-b2;
    dist = sqrt(pow(a,2)+pow(b,2));
    return dist;
}
