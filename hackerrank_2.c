#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}*NODE;


NODE getnewnode(int x)
 {
     NODE newn=(NODE)malloc(sizeof(struct node));
     if(newn==NULL)
     {
         printf("memory is not allocated\n");

     }
     else
     {

        newn->data=x;
        newn->next=NULL;
        newn->prev=NULL;
     }
     return newn;
 }
 NODE insert_end(NODE head)
 {
     NODE cur=head;
     int data;
     printf("data\n");
     scanf("%d",&data);
     NODE newn=getnewnode(data);
     if(head==NULL)
     {

         head=newn;

     }
     else
     {
         while(cur->next!=NULL)
         {
             cur=cur->next;
         }
         cur->next=newn;
         newn->prev=cur;
     }
     return head;
 }
 void display(NODE head)
 {
     NODE cur=head;
     if(head==NULL)
     {
         printf("list is empty\n");
     }
     else
     {
         while(cur!=NULL)
         {
             printf("%d\n",cur->data);
             cur=cur->next;
         }
     }
 }

 NODE addNode(NODE head, int pos, int data1)
    {
          NODE node1 = getnewnode(data1);

        if(head==NULL)
        {
            node1->prev =NULL;
            head = node1;
            return head;
        }

        NODE n=head;
        int count=0;

        while (count!=pos)
        {
            n=n->next;
            count++;
        }

        if(n->next==NULL)
        {
            //last k next me new node ka ref.
            n->next=node1;
            // new node k previous me last ka ref.
            node1->prev=n;
        }

        //new node k next me n ka next
        node1->next=n->next;


        //n k next ka previous ka ref me node1 k ref
        n->next->prev=node1;

        //n k next me node1 ka ref.
        n->next=node1;

        //node1 k prev me ka next ref.
        node1->prev=n;
        return head;
    }


int main()
 {

     NODE head=NULL;
     int i,n;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {

             head=insert_end(head);
     }
     int p,x;
     printf("pos\n");

     scanf("%d",&p);
     printf("data\n");
     scanf("%d",&x);
      head=addNode(head,p,x);

         display(head);



        return 0;
 }
