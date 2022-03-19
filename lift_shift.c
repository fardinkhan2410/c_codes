#include<stdio.h>
#include<stdlib.h>

struct data
{
    int n;
    struct data *next;
};
typedef struct data *NODE;

NODE getnode()
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct data));
      if(temp==NULL)
    {
        printf("NOT CREATED");
        exit(0);
    }
    temp->next=NULL;
    return temp;

}

NODE read()
{
    NODE temp;
    temp=getnode();
    int g;
    printf("ENTER ID :\n");
    scanf("%d",&g);
    temp->n=g;
    return temp;
}

NODE insert_end(NODE head)
{
    NODE newn=NULL, cur=NULL;
    newn = read();
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

NODE shift(NODE head)
{
    NODE prev,cur;
    cur=head;

        while(cur->next!=NULL)
           {
               prev=cur;
               cur = cur->next;

           }
         prev->next = NULL;
         cur->next = head;
         head=cur;


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
            printf("%d -> ",cur->n);
            cur=cur->next;
        }
        printf("NULL\n");
    }
}

int main()
{
  NODE head=NULL;
  int choice;
        printf("\n\nMENU---1.INSERT NODE 2 DISPLAY 3 SHIFT\n");
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
                case 3: head=shift(head);
                break;
                 default: printf("INVALID CHOICE\n");
            }
        }
return 0;
}
