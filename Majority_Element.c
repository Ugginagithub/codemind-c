#include<stdio.h>
int main()
{
    int x[20],n,i,count=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
     for(i=0;i<n;i++)
     {
         count=1;
         if(x[i]!=-1)
         {
         for(j=0;j<n;j++)
         {
             if(x[i]==x[j]&&i!=j)
             {
                 count++;
                 x[j]=-1;
             }
         }
         if(count>n/2)
         {
             printf("%d",x[i]);
             return 0;
         }
     }
         
     }
     return 0;
}