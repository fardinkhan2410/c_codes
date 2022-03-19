#include<stdio.h>

void read(int[],int);
void exchange(int[],int[],int,int);

void main()
{
    int arr[20],arr2[20], n,m;
    printf("array size \n");
    scanf("%d",&n);

    read(arr,n);

    printf("second array size \n");
    scanf("%d",&m);

    read(arr2,m);
    exchange(arr,arr2,n,m);
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
    printf("\n");
}

void exchange(int arr[],int arr2[],int n,int m)
{
    int i,temp=0;
    printf("\n arrays before exchanging\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
     printf("\n");
     for(i=0;i<m;i++)
    {
        printf("%d\t",arr2[i]);
    }

    if(m==n)
  {
    for(i=0;i<n;i++)
    {
        temp=arr2[i];
        arr2[i]=arr[i];
        arr[i]=temp;
    }
  }
  else if(m>n)
  {
      for(i=0;i<m;i++)
      {
        temp=arr2[i];
        arr2[i]=arr[i];
        arr[i]=temp;
        if(i>=n)
        {
            arr2[i]=0;
        }
      }
  }
  else if(m<n)
  {
       for(i=0;i<n;i++)
      {
        temp=arr2[i];
        arr2[i]=arr[i];
        arr[i]=temp;
        if(i>=m)
        {
          arr[i]=0;
        }
  }
  }

    printf("\n exchanged array; \n");

     for(i=0;i<m;i++)
    {
        printf("%d\t",arr[i]);
    }
     printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }
}

