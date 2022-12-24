#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int D,d,p,q,n,ans=0;
        scanf("%ld%ld%ld%ld",&D,&d,&p,&q);
        n=D/d;
        ans=n*p*d+(q*(n*(n-1))/2)*d+(D%d)*(p+n*q);
        printf("%ld
",ans);
    }
}