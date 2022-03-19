#include<stdio.h>

void read(int[],int);
void reverse(int[],int);

void main()
{
    int arr[20], n;
    printf("array size \n");
    scanf("%d",&n);
    read(arr,n);
    reverse(arr,n);
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

void reverse(int arr[],int n)
{
    int i,j,temp,arr2[20];

    for(i=0;i<n;i++)
    {
        arr2[i]=arr[i];
    }
    j=0 ;
    for(i=n-1;i>=0;i--)
    {
        arr[i]=arr2[j];
        j++;
    }
    printf("\n reversed array; \n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
