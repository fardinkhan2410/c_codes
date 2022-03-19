#include<stdio.h>

void sum(int*,int*);

void main()
{
    int *a,*b,c,d;
    printf("enter values a and  b\n");
    scanf("%d%d",&c,&d);
    a=&c;
    b=&d;
    sum(a,b);
}
void sum(int *a, int *b)
{
    int s;
    s=*a+*b;
    printf("sum = %d",s);
}
