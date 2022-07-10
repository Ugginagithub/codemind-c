#include<stdio.h>
int sq(int n)
{
    int m;
    m=n*n;
    return m;
}
int rev(int n)
{
    int s=0;
    while(n)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int n,m,p,q,u;
    scanf("%d",&n);
    m=sq(n);
    p=rev(n);
    q=sq(p);
    u=rev(q);
    if(m==u)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}