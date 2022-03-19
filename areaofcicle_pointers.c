#include<stdio.h>

void area(int*);

void main()
{
    int *r,r1;
    printf("enter the radius\n");
    scanf("%d",&r1);
    r=&r1;
    area(r);

}
void area(int *r)
{
    float area;
    area=3.142*(*r)*(*r);
    printf("%f",area);
}
