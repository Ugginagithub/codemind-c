#include<stdio.h>
int main()
{
    int n,arr[100],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=arr[0];
    for(i=0;i<n;i++)
    {
        if(k>arr[i])
        {
            k=arr[i];
        }
    }
    printf("%d",k);
}