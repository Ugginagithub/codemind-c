#include<stdio.h>
int pali(int n)
{
    int rev=0,t;
    t=n;
    while(n)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(t==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,n,p1,p2;
    scanf("%d",&n);
    for(i=n-1;;i--)
    {
        if(pali(i))
        {
            p1=i;
            break;
        }
    }
    for(i=n+1;;i++)
    {
        if(pali(i))
        {
            p2=i;
            break;
        }
    }
    if(n-p1==p2-n)
    {
        printf("%d %d",p1,p2);
    }
    else if(n-p1>p2-n)
    {
        printf("%d",p2);
    }
    else
    {
        printf("%d",p1);
    }
}