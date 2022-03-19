#include<stdio.h>

void read(int[],int);
void sign(int[],int);

void main()
{
    int arr[20], n;
    printf("array size \n");
    scanf("%d",&n);
    read(arr,n);
    sign(arr,n);
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
    printf("\n");
}

void sign(int arr[],int n)
{
    int p=0,neg=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            p++;
        }
        else
        {
            neg++;
        }
    }
    printf("\n the number of positives in array are %d\n the number of negative are %d",p,neg);
}
