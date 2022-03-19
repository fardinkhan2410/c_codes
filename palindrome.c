#include<stdio.h>
int palindrome(int);

 void main()
 {
     FILE *fp;
     int n;
     printf("enter the number");
     scanf("%d",&n);
     y=palindrome(n);
    fp=fopen("palindrome.txt","w");
 }
