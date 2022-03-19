#include<stdio.h>
void read(int [],int);
void bill(int [],int);

void main()
{
    int n;
    int arr[20];
    printf("Enter the no of flats: \n");
    scanf("%d",&n);
    read(arr,n);
    bill(arr,n);
}
void read(int arr[20],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the no of units consumed: \n");
        scanf("%d",&arr[i]);
    }
      for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
void bill(int arr[20],int n)
{
    int i;
    float b1,b2,b3,b4,total;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0 && arr[i]<=100)
        {
          b1=arr[i]*1.5;
        }
        else if(arr[i]>=101 && arr[i]<=250)
        {
          b2=100*1.5+(arr[i]-100)*2.3;
        }
        else if(arr[i]>=251 && arr[i]<=600)
        {
          b3=100*1.5+150*2.3+(arr[i]-250)*4.0;
        }
        else if(arr[i]>600)
        {
          b4=100*1.5+150*2.3+4*350+(arr[i]-600)*5.5;
        }
    }
    total=b1+b2+b3+b4;
    printf("\n The net bill is %.2f",total);
}
