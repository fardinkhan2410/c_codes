#include<stdio.h>


void read(int[],int);
void sort(int[],int);


void main()
{
    int arr[20], n;
    printf("array size \n");
    scanf("%d",&n);
    read(arr,n);
    sort(arr,n);
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
void sort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>=arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n sorted array;\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }


}
