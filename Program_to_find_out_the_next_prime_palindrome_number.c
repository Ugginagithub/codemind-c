#include<stdio.h>
#include<math.h>
int pri(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int pali(int n)
{
    int rev=0,t;
    t=n;
    while(n)
    {
        rev=rev*10+n%10;
        n=n/10;
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
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pali(i))
        {
            if(pri(i))
            {
                printf("%d",i);
                break;
            }
        }
    }
}