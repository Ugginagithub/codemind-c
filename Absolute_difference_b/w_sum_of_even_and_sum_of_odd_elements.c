#include<stdio.h>
int main()
{
    int n,i,sum1=0,sum2=0,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]%2==0)
        sum1=sum1+arr[i];
    }
     for(i=0;i<=n;i++)
    {
        if(arr[i]%2!=0)
        sum2=sum2+arr[i];
    }
    k=sum1-sum2;
    if(k>0)
    {
        printf("%d",sum1-sum2);
    }
    else
    {
        printf("%d",sum2-sum1);
    }
    
}