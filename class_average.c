#include<stdio.h>

void read(int[],int);
void average(int[],int);

void main()
{
    int arr[20], n;
    printf("number of students in class \n");
    scanf("%d",&n);
    read(arr,n);
    average(arr,n);
}


void read(int arr[],int n)
{   int i;
    printf("enter the marks of students\n");
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

void average(int arr[],int n)
{
    int i,more=0,less=0;
    float a,s=0;
    for(i=0;i<n;i++)
    {
        s=s+(float) arr[i];
    }
    a=s/ (float) n ;
    printf("\n average of class is %.2f",a);
    for(i=0;i<n;i++)
    {
        if(a<=arr[i])
        {
            more++;
        }
        else
        {
            less++;
            }
    }

    printf("\n the number of students scored more then average are %d\n the number of students scored less then average are %d",more,less);
}

