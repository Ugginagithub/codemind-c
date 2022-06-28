#include<stdio.h>
int main()
{
    int n,i,j,k,c,x=0,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if((i!=j)&&(arr[j]==arr[i]))
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            x++;
        }
    }
    if(x==n)
    {
        printf("-1");
    }
}