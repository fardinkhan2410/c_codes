
#include<stdio.h>

void read(int[],int);
void expenditure(int[],int);

void main()
{
    int arr[20], n=12;
    printf("number of months are 12\n");
    read(arr,n);
    expenditure(arr,n);
}


void read(int arr[],int n)
{   int i;
    printf("enter the expenditure in each month\n");
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

void expenditure(int arr[],int n)
{
    int i;
    int m=0,temp,j,temp2;
    float a,s=0;
    for(i=0;i<n;i++)
    {
        s=s+(float) arr[i];
    }
    a=s/ (float) n ;
    printf("\n average expenditure of family %.2f",a);
    for(i=0;i<n;i++)
    {
        if(35000<=arr[i])
        {
            m++;
        }

    }

    printf("\n the number of months family spend more then 35k is %d\n ",m);
    temp=arr[0];
     for(i=0;i<n;i++)
    {

            if(temp<=arr[i])
            {
                temp=arr[i];

            }
    }
    for(i=0;i<n;i++)
    {
     if(arr[i]==temp)
    {printf("\n max expenditure is seen in %d rd/nd/th month \n",i+1);
    }
    }
    temp=arr[0];
     for(i=0;i<n;i++)
    {

            if(temp2>=arr[i])
            {
                temp2=arr[i];

            }
    }
      for(i=0;i<n;i++)
    {
     if(arr[i]==temp2)
    {printf("\n min expenditure is seen in %d rd/nd/th month \n",i+1);
    }
    }
}

