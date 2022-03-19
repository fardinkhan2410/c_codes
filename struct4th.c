#include<stdio.h>
typedef struct employee
{
    int id;
    char name[20];
}EP;
void read(int);
void display(int);

void main()
{
    int n;
    printf("enter number of employee\n");
    scanf("%d",&n);
    read(n);
    display(n);
}
void read(int n)
{
    EP e[20];
    printf("enter the details id and name\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%s",&e[i].id,e[i].name);
    }
}
void display(int n)
{
    EP e[20];
    printf("details id and name\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%s\n",e[i].id,e[i].name);
    }
}
