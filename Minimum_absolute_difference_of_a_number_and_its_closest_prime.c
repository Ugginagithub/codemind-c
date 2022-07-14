#include<stdio.h>
#include<math.h>
int pri(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,p1,p2,p11,p12;
    scanf("%d",&n);
    for(i=n;;i--)
    {
        if(pri(i))
        {
            p1=i;
            break;
        }
    }
    for(i=n;;i++)
    {
        if(pri(i))
        {
            p2=i;
            break;
        }
    }
    p11=n-p1;
    p12=p2-n;
    if(p11>p12)
    {
        printf("%d",p12);
    }
    else
    {
        printf("%d",p11);
    }
}