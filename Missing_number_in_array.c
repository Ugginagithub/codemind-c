#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j;
    scanf("%d",&n);
    while(n--)
    {
        int s=0,c=0;
        scanf("%d",&m);
        int a[100];
        for(i=0;i<m-1;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<m-1;i++)
        {
            s+=a[i];
        }
        for(j=0;j<=m;j++)
        {
            c+=j;
        }
        printf("%d
",abs(c-s));
    }
}