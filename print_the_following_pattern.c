#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&n);
    while(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d",i);
        }
        printf("
");
        n--;
    }
}