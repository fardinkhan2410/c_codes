#include<stdio.h>

void read(float[],int);
void platform(float[],float[],int);

void main()
{
    float arr[20], depart[20];
    int n;
    printf("array size \n");
    scanf("%d",&n);
    read(arr,n);
    read(depart,n);
    platform(arr,depart,n);
}


void read(float arr[],int n)
{   int i;
    printf("enter value of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%.2f\t",arr[i]);
    }
    printf("\n");

}

void platform(float arr[],float depart[],int n)
{
    int j,i,p=1,plat[20],temp;
        for (int i = 0; i < n; i++)
      {

        // minimum platform
        p= 1;

        for (int j = i + 1; j < n; j++)
        {
            // check for overlap
            if ((arr[i] >= arr[j] && arr[i] <= depart[j]) ||(arr[j] >= arr[i] && arr[j] <= depart[i]))
                p++;
        }

    plat[i]=p;
      }
      for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(plat[i]>=plat[j])
            {
                temp=plat[i];
                plat[i]=plat[j];
                plat[j]=temp;
            }
        }
    }

       printf("\n the number of minimum platform are %d \n",plat[n-1]);
}
