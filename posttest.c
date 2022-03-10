#include<stdio.h>

void read(int[],int);
void average(int[],int);

void main()
{
    int arr[20], n;
    printf("number of students in wrote post test \n");
    scanf("%d",&n);
    read(arr,n);
    average(arr,n);
}


void read(int arr[],int n)
{   int i;
    printf("enter the marks of students in postests max (10)\n");
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
    int i,more=0,e=0,o=0;
    for(i=0;i<n;i++)
    {
        if(10==arr[i])
        {
            printf("student with roll number %d has scored 100 percent in postest congratulations",i+1);
            more++;
        }
    }
             for(i=0;i<n;i++)
             {
                if(arr[i]%2==0)
        {
            e++;
        }
        else if(arr[i]%2!=0)
        {
            o++;
        }

    }

    printf("\n number of students scored 100 percent are %d",more);
     printf("\n number of students scored even marks are %d",e);
      printf("\n number of students scored odd marks are %d",o);
}


