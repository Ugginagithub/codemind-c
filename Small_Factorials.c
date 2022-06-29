#include<stdio.h>
int main()
{
    int n,x,sum=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        sum=1;
        while(x!=1)
        {
            sum*=x;
            x--;
        }
        printf("%d
",sum);
    }
}