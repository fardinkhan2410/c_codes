#include<stdio.h>

void read(int[],int);
void tax(int[],int);

void main()
{
   long int arr[20];
   int n;
    printf("number of people paid who paid tax\n");
    scanf("%d",&n);
    read(arr,n);
    tax(arr,n);
}


void read(int arr[],int n)
{   int i;
    printf("enter the amount\n");
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%ld\t",arr[i]);
    }
    printf("\n");
}

void tax(int arr[],int n)
{
    int i,m=0,l=0;
    float a,s=0;
    for(i=0;i<n;i++)
    {
        s=s+(float) arr[i];
    }
    a=s/ (float) n ;
    printf("\n average of tax paid is %.2f",a);
    for(i=0;i<n;i++)
    {
        if(250000<=arr[i])
        {
            m++;
        }
        else if (50000<arr[i] && arr[i]<150000)
        {
            l++;
        }
    }

    printf("\n the number of people who paid more then 2.5l are %d\n the number of people who paid more then 50k and less then 1.5l are %d",m,l);
}

