#include<stdio.h>
typedef struct employee
{
    int id;
    char name[20];
}EP;

void read(int,EP*);
void display(int,EP*);

void main()
{   EP *e[20];
    int n;
    printf("enter number of employee\n");
    scanf("%d",&n);
    read(n,e);
    display(n,e);
}
void read(int n,EP e[])
{
    printf("enter the details id and name\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%s",&(e+i)->id,(e+i)->name);
    }
}
void display(int n,EP e[])
{

    printf("details id and name\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\n",(e+i)->id,(e+i)->name);
    }
}
