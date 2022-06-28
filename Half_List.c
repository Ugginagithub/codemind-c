#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=a-1;i>=a/2;i--)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<a/2;i++)
    {
        printf("%d ",arr[i]);
    }
}