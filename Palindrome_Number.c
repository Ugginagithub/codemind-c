#include<stdio.h>
int reverse(int n)
{
    int r,rev=0;
    while(n)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }return rev;
}
void test()
{
    int n;
    scanf("%d",&n);
    if(n==reverse(n))
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        test();
    }
    
}