#include<stdio.h>

void perfect(int [],int);
void read(int [],int);

void main()
{
   int n;
   int arr[20];
   printf("Enter the size of array: \n");
   scanf("%d",&n);
   read(arr,n);
   perfect(arr,n);
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
void perfect(int arr[20],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        int sum=0;
        temp=arr[i];
        for(j=1;j<temp;j++)
       {
        if(temp%j==0)
        {
            sum=sum+j;
        }
       }
      if(sum==temp)
      {
          printf("The no %d is perfect\n",temp);
      }
    }

}

