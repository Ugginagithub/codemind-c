#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        c=arr[i]+x;
        if(c>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}