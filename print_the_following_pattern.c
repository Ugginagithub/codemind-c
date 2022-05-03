#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for (j=0;j<a;j++)
{
    for(i=a;i>=1;i--)
    {
        printf("%d ",i);
    }
    printf("
");
}
}