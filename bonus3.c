#include<stdio.h>

void bonus(int[],int);
void display(int[],int);

void main()
{
    int arr[20], n,i;
    printf("array size \n");
    scanf("%d",&n);
for(i=0;i<n;i++)
    bonus(arr,i);

    display(arr,n);

}



void bonus(int arr[],int i)
{
    int exp,s;

    printf("\n enter experience of employee\n");
    scanf("%d",&exp);

        if(exp>=5 && exp<=7)
        {
            s=10600+(0.1*10600);
            arr[i]=s;
        }
        else if(exp<10 && exp>=8)
        {
            s=21300+(0.2*21300);
            arr[i]=s;
        }
        else if(exp>=10)
        {
            s=32100+(32100*0.3);
            arr[i]=s;
        }
        else
       {
          printf("\n employee does not exist\n");
          arr[i]=0;
       }
}

void display(int arr[],int n)
{
    int i;
    printf("\n salary of employees are;\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
}
