#include<stdio.h>
int main()
{
    int n,arr[100],i,co=0,ce=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ce++;
        }
        else
        {
            co++;
        }
    }
    printf("%d %d",ce,co);
}