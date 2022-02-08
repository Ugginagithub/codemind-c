#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n*n;
    int sum=0,k;
    while(r)
    {
    	k=r%10;
    	sum=sum+k;
    	r=r/10;
	}
	if(sum==n)
	{
		printf("Neon Number");
	}
	else 
	{
		printf("Not Neon Number");
	}
}
     