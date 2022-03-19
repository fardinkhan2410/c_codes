#include<stdio.h>
#include<stdlib.h>

struct y
{
    int n[100][100];
    struct y *next;
};

typedef struct y *NODE;

NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct y));
    if(newn==NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    newn->next=NULL;
    return newn;
}

NODE read_de()
{
    NODE temp;
    int m,n,i,j;
   // printf("enter value of m n");
    //scanf("%d%d",&m,&n);
    temp=getnode();
    printf("Enter number");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
    scanf("%d",&temp->n[i][j]);
        }
   }    return temp;
}

NODE insertend(NODE head)
{
    NODE newn=NULL,temp;
    newn=read_de();
    if(head==NULL)
    {
        head=newn;
        return head;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
        temp=temp->next;
        }
    temp->next=newn;

}
return head;
}

void display(NODE head)
{
    NODE temp;
    int m,n,i,j;
    temp=head;
    while(temp!=NULL)
    {
        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
    printf("%d\t",temp->n[i][j]);
        }
        printf("\n");
   }
   temp=temp->next;
 }
}
int main()
{
    NODE head=NULL;
    int c,ref;
    while(1)
    {
        printf("enter your choice 1 insert end 2 display\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:head=insertend(head);
             break;

            case 2: printf("Display\n");
                    display(head);
                    break;

            default: exit(0);
        }
    }
return 0;
}
