#include<stdio.h>
int main()
{
    int l;
    scanf("%d",&l);
    if(l%400==0)
    {
        printf("True");
    }
    else if(l%100==0)
    {
        printf("False");
    }
    else if (l%4==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}