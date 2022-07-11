#include<stdio.h>
int convert(char ch)
{
    int v=0;
    switch(ch)
    {
        case'I':v=1;break;
        case'V':v=5;break;
        case'X':v=10;break;
        case'L':v=50;break;
        case'C':v=100;break;
        case'D':v=500;break;
        case'M':v=1000;break;
        default:v=-1;
    }
    return v;
}
int main()
{
    int i=0,n=0;
    char str[100];
    scanf("%s",&str);
    while(str[i])
    {
        if(convert(str[i])>=convert(str[i+1]))
        {
            n=n+convert(str[i]);
        }
        else
        {
            n=n+(convert(str[i+1])-convert(str[i]));
            i++;
        }
        i++;
    }
    printf("%d",n);
}