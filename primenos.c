#include<stdio.h>


void read(int[],int);
void primenos(int[],int);


void main()
{
    int arr[20], n;
    printf("array size \n");
    scanf("%d",&n);
    read(arr,n);
    primenos(arr,n);
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
void primenos(int arr[],int n)
{
    int i,j=2,f=1;
      for (i=0;i<n;i++)
    {
        j=2,f=1;
       while (j < arr[i])
        {
           if (arr[i] % j == 0)
            {
               f = 0;
               break;
           }
           j++;
       }

       if (f == 1)
       {
           printf("\n the prime number is ;");
           printf("%d", arr[i]);
       }
}
}
