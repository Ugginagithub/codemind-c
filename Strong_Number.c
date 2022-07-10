#include<stdio.h>
int fact(int n)
{
    int i,m=1;
    for(i=1;i<=n;i++)
    {
        m*=i;
    }
    return m;
}
int main()
{
    int n,r,s=0,k,d;
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=k%10;
        d=fact(r);
        s+=d;
        k=k/10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}