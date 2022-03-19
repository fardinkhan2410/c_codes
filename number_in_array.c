#include<stdio.h>


void read(int[],int);
void check(int[],int);


void main()
{
    int arr[20], n;
    printf("array size \n");
    scanf("%d",&n);
    read(arr,n);
    check(arr,n);
}

void read(int arr[],int n)
{   int i;
    printf("enter value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}
void check(int arr[],int n)
{
    int ch,i,f=0;
    printf("\n enter the number you want to check\n");
    scanf("%d",&ch);

    for(i=0;i<n;i++)
    {
        if(arr[i]==ch)
        {
            printf("the number %d is found at %d position\n",ch,i+1);
            f=1;
        }
    }
    if(f==0)
    {
        printf("given number does not exist in array\n");
    }

}
