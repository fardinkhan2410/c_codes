#include<stdio.h>
 void sum(int*,int*);

 void main()
 {
     int *a,*b,c,d;
     a=&c;
     b=&d;
     scanf("%d%d",*a,*b);
     sum(a,b);
 }
 void sum(int* a,int* b)
 {
     int s;
     s=*a+*b;
     printf("%d",s);
 }
