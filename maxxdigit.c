#include<stdio.h>
void read(int [],int);
void digit(int [],int);

void main()
{
    int n,arr[20];
    printf("Enter the no of array: \n");
    scanf("%d",&n);
    read(arr,n);
    digit(arr,n);
}
void read(int arr[20],int n)
{
    int i;
    printf("Enter the values \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
      for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void digit(int arr[],int n)
{
    int i,temp,temp2,max,k=0,arr2[2],j=0,sum=0;
    for(i=0;i<n;i++)
    {
        max=0;
        temp=arr[i];
         while(temp>0)
        {
            temp2=temp%10;
             if(max<temp2)
             {
                 max=temp2;
             }
            temp=temp/10;
        }
         sum=sum+max;
    }


    printf("\n the sum is %d",sum);
}
