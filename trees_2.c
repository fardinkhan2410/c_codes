// SUM OF ALL THE NODES IN A BINARY TREE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int parentnode=0,childnode=0;
struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
};
struct treenode *create(int data)
{
    struct treenode *temp;
    temp=((struct treenode*) malloc(sizeof(struct treenode)));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

};
struct treenode *insertion(struct treenode *temp,int data)
{
    if(temp==NULL)
    {
        temp=create(data);
        return temp;
    }
    else if(data<(temp->data))
    {
        temp->left=insertion(temp->left,data);
    }
    else if(data>(temp->data))
    {
        temp->right=insertion(temp->right,data);
    }
    return temp;
};
struct treenode *traverse(struct treenode *temp)
{
    if(temp!=NULL)

    {
        traverse(temp->left);
        printf("%3d",temp->data);
        traverse(temp->right);
         if(temp->left==NULL && temp->right==NULL)
        {
            childnode+=1;
        }
        if(temp->left==NULL || temp->right==NULL)
        {
            parentnode+=1;
        }

    }
    return temp;
}



int main()
{
struct treenode *head=NULL;
int data,key,choice,count=0,sum=0;
for(;;)
{
printf("\n 1-INSERT and 2-DISPLAY 3-SUM OF NODES\n" );
scanf("%d",&choice);
switch(choice)
{
case 1: printf("Enter the data\n");
        scanf("%d",&data);
        count++;
        sum=sum+data;
        head=insertion(head,data);
        break;
case 2: head=traverse(head);
        break;
case 3: printf("sum of all nodes:%d",sum);
        break;

}
}
return 0;
}
