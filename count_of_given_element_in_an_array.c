#include<stdio.h>
int main()
{
    int n,arr[100],i,a,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            c+=1;
        }
    }
    printf("%d",c);
}