#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1||n==2)
    {
        printf("0
");
    }
    else
    {
        i=n-3;
        int k=pow(3,i)*10;
        printf("%d
",(i+1)*k);
    }
}