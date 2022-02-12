#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,r,d,m;
	scanf("%d",&n);//135
	m=n;
	d=(int)log10(n)+1;
	
	while(n>0)
	{
		r=n%10;//5
		sum=sum+ceil(pow(r,d));//0+5^3
		n=n/10;//13
		d--;
	}
	if(sum==m)
	printf("True");
	else
	printf("False");
}
/*input:- 135 
 output:- 135 is disarium number
 explanation:- 1^1+3^2+5^3=135*/