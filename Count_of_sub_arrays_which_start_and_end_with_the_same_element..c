#include<stdio.h>
int main()
{
    int n,a[100],i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0,c=0;
    for(i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                c++;
            }
        }
        if(c==1)
        {
            l++;
        }
    }
    printf("%d",n+l/2);
}