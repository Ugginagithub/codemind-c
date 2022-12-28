#include<stdio.h>
int main()
{
    int n,a[100],i,j,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                printf("%d ",j-i);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d ",c);
        }
    }
}