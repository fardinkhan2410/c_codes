#include<stdio.h>

void read(int[],int);
void penalty(int[],int);

void main()
{
    int arr[20], n;
    printf("number of students returned book \n");
    scanf("%d",&n);
    read(arr,n);
    penalty(arr,n);
}


void read(int arr[],int n)
{   int i,d;

    for(i=0;i<n;i++)
    {
        printf("enter the days after which book is returned\n");
         scanf("%d",&d);
         if(d<=15)
            arr[i]=0;
        else
        arr[i]=2*(d-15);

    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void penalty(int arr[],int n)
{
    int i,j;
    float a,s=0;
    for(i=0;i<n;i++)
    {
        s=s+(float) arr[i];
    }
    a=s/ (float) n ;
    printf("\n average penalty is %.2f",a);
    printf("\n total penalty is %.2f",s);
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
         printf("\n max penalty is %d",arr[n-1]);
    printf("\n min penalty is %d",arr[0]);



}
