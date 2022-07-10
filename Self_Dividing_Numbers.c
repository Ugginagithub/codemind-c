#include<stdio.h>
int selfd(int n)
{
    int t,i,r,c=0,c1=0;
    t=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        c++;
        if(r==0)
        {
            break;
        }
        if(t%r==0)
        {
            c1++;
        }
    }
    if(c==c1)
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
    int n,m,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(selfd(i))
        {
            printf("%d ",i);
        }
    }
}