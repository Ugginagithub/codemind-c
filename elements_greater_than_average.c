#include<stdio.h>
int main()
{
    int i,n,arr[100],sum=0,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    k=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            c+=1;
        }
    }
    printf("%d",c);
    
}