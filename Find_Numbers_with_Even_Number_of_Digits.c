#include<stdio.h>
int count(int n)
{
    int c=0,r;
    while(n)
    {
        r=n%10;
        c=c+1;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,arr[100],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(count(arr[i])%2==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}