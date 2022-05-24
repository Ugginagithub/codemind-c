#include<stdio.h>
int main()
{
    int a,b,i,c=0,n,arr[100];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
   /*  for(i=0;i<a;i++)
    {
        printf("%d",arr[i]);
    }*/
    for(i=0;i<a;i++)
    {
        if(arr[i]%b==0)
        {
            c+=1;
        }
    }
    printf("%d",a-c);
}