#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,s1=0,s2;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0&&i+2%2==0)
        {
            s+=arr[i];
        }
        else
        {
            s1+=arr[i];
        }
    }
    s2=abs(s-s1);
    if(s2%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}