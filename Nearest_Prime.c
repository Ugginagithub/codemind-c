#include<stdio.h>
#include<math.h>
int p(int n)
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
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int n,i,p1,p2;
        scanf("%d",&n);
        for(i=n;;i--)
        {
            if(p(i))
            {
                p1=i;
                break;
            }
        }
        for(i=n;;i++)
        {
            if(p(i))
            {
                p2=i;
                break;
            }
        }
        if(n-p1>p2-n)
        {
            printf("%d
",p2);
        }
        else
        {
            printf("%d
",p1);
        }
    }
}