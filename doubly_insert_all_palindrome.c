#include<stdio.h>
#include<stdlib.h>

struct dl
{
    int d;
    struct dl *next;
     struct dl *prev;
};

typedef struct dl *NODE;

NODE getnode()
{

    NODE newn;
    newn=(NODE)malloc(sizeof(struct dl));
    if (newn==NULL)
    {
        printf("no list is created\n");
        exit(0);
    }
    printf("\n enter data\n");
    scanf("%d",&newn->d);
    newn->next=newn->prev=NULL;
    return newn;
}

NODE insert_end(NODE head)
{
    NODE newn=getnode();
    NODE temp;
    temp=head;
    if(head==NULL)
    {
        return newn;
    }
    while(temp->next != NULL)
    {
       temp = temp->next;
    }
    temp->next=newn;
    newn->prev=temp;

    return head;
}

NODE insert_head(NODE head)
{
    NODE newn=getnode();
    NODE temp;
    temp=head;
    if(head==NULL)
    {
        return newn;
    }
    newn->next=temp;
    temp->prev=newn;
    head=newn;
    return head;
}

NODE palindromic_number(NODE head)
{
    NODE temp=head;
    int n,r=0,sum=0,i=0,d;
    if(head==NULL)
    {
        printf("no list created\n");

    }

  while(temp!=NULL)
    {
        i++;
        n=temp->d;
        d=n;
        while(n!=0)
        {
          r=n%10;
          n=n/10;
          sum=sum*10+r;
        }
     temp=temp->next;
        if(sum==d)
        {
            printf("\n the list has palindrome number at position %d \t ie \t %d",i,sum);
        }
        sum=0;
    }
    return head;
}

NODE insert_btwn(NODE head,int n)
{
    NODE newn=getnode();
    NODE back=NULL,cur=NULL;
    cur=head;
    if(head==NULL)
    {
        return newn;
    }
    int i=1;
     while(cur->next!=NULL)
    { i++;
    back=cur;
    cur=cur->next;
    if(i==n)
    {
        break;
    }
    }

     back->next=newn;
     newn->prev=back;
     newn->next=cur;
     cur->prev=newn;
    return head;

}

void display(NODE head)
{
    NODE cur=head;

    if(head==NULL)
    {
        printf("there is no candle present\n");
    }
    while(cur!=NULL)
    {

        printf("%d\t",cur->d);
        cur=cur->next;
    }

}

int main()
{
  NODE head=NULL;
  int choice,n;
        printf("\n\nMENU---1.INSERT end 2 insert head 3 insert between 4 display 5 palindrome\n");
        while(1)
        {
            printf("\n ENTER CHOICE:\t");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: head=insert_end(head);
                break;
                case 2:head=insert_head(head);
                break;

                case 3:printf("\n enter position\n");
                       scanf("%d",&n);
                    head=insert_btwn(head,n);
                break;
                case 4:display(head);
                break;
                case 5: head=palindromic_number(head);
                break;
                 default: printf("INVALID CHOICE\n");
            }
        }
return 0;
}
