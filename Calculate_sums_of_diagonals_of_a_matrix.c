#include<stdio.h>
int main()
{
    int n,arr[100][100],sum=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j or j==(n-i-1))
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
}