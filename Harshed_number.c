#include<stdio.h>
int main()
{
   int a,sum=0,r;
   scanf("%d",&a);
   int b=a;
   while (a)
   {
       r=a%10;
       sum=sum+r;
       a=a/10;
   }
   if(b%sum==0)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}