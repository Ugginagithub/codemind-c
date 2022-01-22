#include<stdio.h>
int main()
{
    int a,b;
    float avg;
    scanf("%d %d",&a,&b);
    avg = (a+b)*1.0/2;
    printf("%.4f",avg);
    return 0;
}