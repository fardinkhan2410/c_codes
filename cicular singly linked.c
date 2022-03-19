#include<stdlib.h>
#include<stdio.h>

struct letter
{
	char name[25];
	int hno;
	char area [100];
    long int mobileno;
	struct letter *next;
};


/* A user-defined data type called “NODE” */
typedef struct letter *NODE;


NODE delete_front (NODE head)
{
     NODE temp, cur=head;
     if(head==NULL)
	  {
         printf("List empty\n");
	      return NULL;
	  }
	  if(head->next==head)  //single node
	  {
	      printf("Deleted house: %d\n",head->hno);
	      free(head);
	      return NULL;
	  }
	while(cur->next != head)
	{
          		cur=cur->next;
	}
   	temp=head;
   	head=temp->next;
	cur->next=head;
	printf("Deleted house: %d\n",temp->hno);
	free(temp);
	return head;
}

NODE delete_end (NODE head)
{
     NODE first, prev=NULL, cur=head;
     first=head;
     // CASE 1: When list is empty
     if(head ==NULL)
     {
 	printf("List empty\n");
	return NULL;
     }
  //CASE 2: When list contains only one node
     if(head->next==first)
     {
         printf("House deleted: %d\n", head->hno);
         free(head);
         return NULL;
     }
       // CASE 3: When multiple nodes present
     cur = head;
     while(cur -> next != first)
     {
     	prev=cur;
	cur=cur->next;
     }
     prev->next=head;
     printf("House deleted: %d\n",cur->hno);
     free(cur);
     return head;
}

NODE getnode()
{
    NODE new;
    new=(NODE)malloc(sizeof(struct letter));
    if(new==NULL)
    {
        printf("Not created\n");
        exit(0);
    }
    new->next=new;
    return new;
}

NODE read_details()
{
    NODE temp;
    temp=getnode();
    scanf("%s%d%s%ld",temp->name, &temp->hno, temp->area, &temp->mobileno);
    return temp;
}

NODE insert_front (NODE head)
{
	NODE new, cur=head;
	new = read_details();
	if (head ==NULL)
    	{
            		head = new;
            		new -> next = head;
            		return head;
    	}
    	while(cur ->next != head)
       	{
		cur = cur -> next;
        	}
      	cur -> next=new;
      	new->next=head;
	head = new;
    	return head;
}



NODE insert_end (NODE head)
{
	NODE new, cur=head;
	new = read_details( );
	if(head == NULL)
      	{
	 	new->next=new;
        		return new;
    	}
	else
    	{
           		while(cur -> next != head)
          			cur =cur -> next;
       	}
    	cur -> next = new;
    	new -> next = head;
	return head;
}

void display(NODE head)
{
    NODE cur;
    if(head==NULL)
    {
        printf("List is empty\n");
        exit(0);
    }
    cur=head;

    while(cur->next!=head)
    {
        printf("%s\t%d\t%s\t%ld\n",cur->name,cur->hno,cur->area,cur->mobileno);
        cur=cur->next;
    }
    printf("%s\t%d\t%s\t%ld",cur->name,cur->hno,cur->area,cur->mobileno);
    printf("\n");
}

int main()
{
    NODE head=NULL;
    int choice;
    for(;;)
    {
        printf("1.insert front\n2.insert end\n3.delete front\n4.delete end\n5.display\n6.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter name\tH.no\tarea\tph.no\n");
            head=insert_front(head); break;

            case 2: printf("Enter name\tH.no\tarea\tph.no\n");
            head=insert_end(head); break;

            case 3: head=delete_front(head); break;

            case 4: head=delete_end(head); break;

            case 5: printf("Display\n");
            display(head);
            break;

            default: exit(0);
        }
    }
}
