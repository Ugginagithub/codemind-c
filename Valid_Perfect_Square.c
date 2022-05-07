#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int j,a,c=0;
        scanf("%d",&a);
         for(j=0;j<a;j++)
         {
             if(j*j==a)
             {
                 c++;
             }
         }
         if(c==1)
         {
             printf("True
");
         }
         else
         {
             printf("False
");
         }
    }
}