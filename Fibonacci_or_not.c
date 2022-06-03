#include<stdio.h>
int main()
{
    int n,a=0,b=1,i,c,c1=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
        if(n==c || n==a || n==b)
        {
            c1+=1;
        }
        a=b;
        b=c;
    }
    if(c1>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}