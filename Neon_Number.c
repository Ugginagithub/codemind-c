
#include<stdio.h>
int main()
{
    int a,k,sum=0,r;
    scanf("%d",&a);
    k=a*a;
    while(k!=0)
    {
        r=k%10;
        sum=sum+r;
        k=k/10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
