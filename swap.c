#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct data
{
    int d;
    struct data *next;
};

typedef struct data *NODE;

NODE getnode()
{
    NODE newn;
    newn=(NODE)malloc(sizeof(struct data));
    if(newn==NULL)
    {
        printf("NOT CREATED");
        exit(0);
    }
    newn->next=NULL;
    return newn;
}

NODE read_details()
{
    NODE temp;
    temp=getnode();
    int g;
    printf("ENTER ID :\n");
    scanf("%d",&g);
    temp->d=g;
    return temp;
}

NODE insert_end(NODE head)
{
    NODE newn=NULL, cur=NULL;
    newn = read_details();
    if(head == NULL)
    {
        return newn;
    }
    else
    {
        cur=head;
        while(cur->next != NULL)
            cur = cur->next;
        cur->next = newn;
    }
    return head;
}
NODE swap(NODE head)
{
    NODE prev=head,cur=head->next;
    if(head==NULL||head->next==NULL)
        return NULL;
    head=cur;
    while(1)
    {
        NODE nn=cur->next;
        cur->next=prev;
        if(nn==NULL||nn->next==NULL)
        {
            prev->next=nn;
            break;
        }
        prev->next=nn->next;
        prev=nn;
        cur=prev->next;
    }
    return head;
}
void display_list(NODE head)
{
    NODE cur=NULL;
    if(head==NULL)
    {
        printf("LIST EMPTY\n");
        exit(0);
    }
    else
    {
        cur=head;
        printf("DETAILS\n");
        printf("EMPLOYERS ID:\n");
        printf("head-> ");
        while(cur!=NULL)
        {
            printf("%d -> ",cur->d);
            cur=cur->next;
        }
        printf("NULL\n");
    }
}

int main()
{
  NODE head=NULL;
  int choice;
        printf("\n\nMENU---1.INSERT NODE 2 DISPLAY 3 SWAP\n");
        while(1)
        {
            printf("ENTER CHOICE:\t");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: head=insert_end(head);
                break;
                case 2: display_list(head);
                break;
                case 3: head=swap(head);
                break;
                 default: printf("INVALID CHOICE\n");
            }
        }
return 0;
}
