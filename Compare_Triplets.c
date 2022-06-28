#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,a1=0,b1=0;
    int arr2[3],arr3[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr3[i]);
    }
    for(i=0;i<3;i++)
    {
        if(arr2[i]>arr3[i])
        {
            a++;
        }
        else if(arr2[i]<arr3[i])
        {
            b++;
        }
    }
    printf("%d %d",a,b);
}