#include<stdio.h>
int main()
{
    int a,b,i,arr[100],c=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]%b!=0)
        {
            c+=1;
        }
    }
    printf("%d",a-c);
    
}