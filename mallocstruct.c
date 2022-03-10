#include<stdio.h>
#include<stdlib.h>
typedef struct employee
{
    int id;
    char name[20];
}EP;

void read(int,EP*);
void display(int,EP*);

void main()
{
    int n;
    EP *e;
    printf("enter size of struct\n");
    scanf("%d",&n);
    e=(EP*)malloc(n*sizeof(struct employee));
    read(n,e);
    display(n,e);
    free(e);
}

void read(int n,EP *e)
{
    printf("enter the details id and name\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%s",&(e+i)->id,(e+i)->name);
    }
}
void display(int n,EP *e)
{

    printf("details id and name\n");
    for(int i=0;i<n;i++)
    {
       printf("%d\t%s\n",(e+i)->id,(e+i)->name);
    }
}
