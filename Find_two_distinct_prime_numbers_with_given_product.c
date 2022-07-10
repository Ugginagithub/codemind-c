#include<stdio.h>
#include<math.h>
int pri(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(pri(i))
            {
                c++;
                printf("%d ",i);
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}