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
    int n,m,o,i;
    scanf("%d",&n);
    scanf("%d",&m);
    o=n+m;
    for(i=1;i<=o;i++)
    {
        if(pri(o+i))
        {
            printf("%d",i);
            break;
        }
    }
}