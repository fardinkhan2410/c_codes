#include<stdio.h>
#include<stdlib.h>

struct y
{
    int n;
    char h[20];
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
    temp=getnode();
    printf("Enter number\t name\n");
    scanf("%d %s",&temp->n,temp->h);
    return temp;
}


NODE insertfront(NODE head)
{
    NODE newn=NULL;
    newn=read_de();
    if(head==NULL)
    {
        head=newn;
        head->next=NULL;
        return head;
    }
    newn->next=head;
    head=newn;
    return head;
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

NODE insertbetween(NODE head, int ref)
{
    NODE newn=NULL,prev,cur;
    newn=read_de();
    if(head==NULL)
    {
        head=newn;
        return head;
    }
    else
    {
        cur=head;
        while(cur->next!=NULL)
        {
            if(cur->n==ref)
            {
                if(cur==head)
                {
                    newn->next=cur;
                    head=newn;
                    return head;
                }
                prev->next=newn;
                newn->next=cur;
            }
        prev=cur;
        cur=cur->next;
        }
    return head;
}
}

void display(NODE head)
{
    NODE temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d %s\n",temp->n,temp->h);
        temp=temp->next;

    }
}

int main()
{
    NODE head=NULL;
    int c,ref;
    while(1)
    {
        printf("enter your choice 1 insert front 2 insert end 3 insert between 4 display\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:head=insertfront(head);
            break;

            case 2:head=insertend(head);
             break;

             case 3:printf("enter value before which you want to insert\n");
                   scanf("%d",&ref);
                    head=insertbetween(head,ref);
                    break;

            case 4: printf("Display\n");
                    display(head);
                    break;

            default: exit(0);
        }
    }
return 0;
}
