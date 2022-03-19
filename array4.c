#include<stdio.h>

void read(int[],int);
void specific(int[],int);
void sum(int[],int);
void insert(int[],int,int);

void main()
{
    int n,i,arr[10];
    printf("enter array size less then 10\n");
    scanf("%d",&n);
    read(arr,n);
    printf("enter location which you want to change\n");
    scanf("%d",&i);

    specific(arr,i);
    sum(arr,n);
    insert(arr,n,i);
}

void read(int arr[],int n)
{
    for(int k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);

    }
    for(int k=0;k<n;k++)
    {
        printf("%d\t",arr[k]);

    }
      printf("\n");

}

void specific(int arr[],int i)
{
    int k;
    for(k=0;k<i;k++)
    {

    }
    k--;
    scanf("%d",&arr[k]);

     printf("the value inserted at %d is %d\n",i ,arr[k]);
    for(k=0;k<5;k++)
    {
        printf("%d\t",arr[k]);

    }
}

void sum(int arr[],int n)
{
    int s=0;
    for(int k=0;k<n;k++)
    {
        s=s+arr[k];

    }

        printf("\n the sum of array is %d\t",s);

}

void insert(int arr[],int i,int n)
{
    int k,j,m;
    for(k=0;k<i;k++)
    {
      arr[k];
    }
    k--;
    arr[k];
    m=k;
    int arr2[10];

     for(j=0;j<n-m;j++)
    {
      arr2[j] =arr[k];
      k++;
    }
    printf("\n chose value");
    scanf("%d",&arr[m]);

   for(i=m++;i<n+1;i++)
   {
       arr[m]=arr2[k];
       k++;
   }
    for(int k=0;k<n+1;k++)
    {
        printf("%d\t",arr[k]);

    }
      printf("\n");
}
