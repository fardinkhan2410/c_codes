#include<stdio.h>

void read(int[],int);
void rank(int[],int);

void main()
{
    int arr[20], n;
    printf("number of students registered\n");
    scanf("%d",&n);
    read(arr,n);
    rank(arr,n);
}


void read(int arr[],int n)
{   int i;

    for(i=0;i<n;i++)
    {
        printf("enter the rank\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void rank(int arr[],int n)
{
    int i,j;
     for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>=arr[j])
           {
              int temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
           }
        }

      }
      printf("\n In ascending order\n");
       for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
         printf("\n highest rank is %d",arr[0]);
    printf("\n lowest rank is %d",arr[n-1]);
}



