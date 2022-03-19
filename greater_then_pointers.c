#include<stdio.h>

void check(int*,int*);

void main()
{
    while(1)
    {
    int *a,*b,c,d;
    printf("\n enter values of a and b\n");
    scanf("%d%d",&c,&d);
    a=&c;
    b=&d;
    check(a,b);
    }
}
void check(int *c,int *d)
{
    if(*c<*d)
    {
        printf("greater  value is %d",*d);
    }
    else if(*c>*d)
    {
        printf("greater  value is %d",*c);
    }
    else
    {
        printf("both are equal");
    }
}
