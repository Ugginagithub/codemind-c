#include<stdio.h>
int main()
{
    int num,r,rev=0,i;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    printf("%d",rev);
}