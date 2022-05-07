#include<stdio.h>
int main()
{
    int a,k=0;
    scanf("%d",&a);
    while(a!=0)
    {
        int r;
        r=a%10;
        if(k<r)
        {
            k=r;
        }
        a=a/10;
    }
    printf("%d",k);
}