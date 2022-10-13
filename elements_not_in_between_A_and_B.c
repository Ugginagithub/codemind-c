#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int max=a[0];
    int c=0;
    for(i=0;i<n;i++)
    {
        if(!(a[i]>=x&&a[i]<=y))
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}