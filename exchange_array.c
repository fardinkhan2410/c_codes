#include<stdio.h>

void read(int[],int);
void exchange(int[],int[],int);

void main()
{
    int arr[20],arr2[20], n;
    printf("array size \n");
    scanf("%d",&n);

    read(arr,n);
    read(arr2,n);
    exchange(arr,arr2,n);
}


void read(int arr[],int n)
{   int i;
    printf("\n");
    printf("enter value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

}

void exchange(int arr[],int arr2[],int n)
{
    int i,temp=0;
    printf("\n arrays before exchanging\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }

    for(i=0;i<n;i++)
    {
        temp=arr2[i];
        arr2[i]=arr[i];
        arr[i]=temp;
    }

    printf("\n exchanged array; \n");

     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
}
