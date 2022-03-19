#include<stdio.h>

void perfect(int [],int);
void equilibrium(int [],int);

void main()
{
   int n;
   int arr[20];
   printf("Enter the size of array; \n");
   scanf("%d",&n);
   read(arr,n);
   equilibrium(arr,n);
}
void read(int arr[20],int n)
{
    int i;
    printf("Enter the array elements: \n");
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
void equilibrium(int arr[],int n)
{
    int i,j,k,f=0;

    for(i=0;i<n;i++)
    {
        int sum=0,sum2=0;
        for(j=(i-1);j>=0;j--)
        {
            sum=sum+arr[j];            // -7 1 5 2 -4 3 0
        }
        for(j=(i+1);j<n;j++)
        {
            sum2=sum2+arr[j];
        }
        if(sum==sum2)
        {
            printf("the number is %d with equilibrium index at position %d\n",arr[i],i);
            f=1;
        }

    }
    if(f==0)
    {
        printf("\n there is no number which has equilibrium index");
    }
}
