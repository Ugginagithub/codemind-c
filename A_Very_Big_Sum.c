#include<stdio.h>
int main()
{
    int n,i,arr[100];
    long long int sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
}