#include<stdio.h>
int main()
{
    int z,o,t2,t3,f4,f5,s6,s7,e,n9,n,r;
    scanf("%d",&n);
    z=0;
    o=0;
    t2=0;
    t3=0;
    f4=0;
    f5=0;
    s6=0;
    s7=0;
    e=0;
    n9=0;
    while(n)
    {
        r=n%10;
        if(r==0)
        {
            z++;
        }
        else if(r==1)
        {
            o++;
        }
        else if(r==2)
        {
            t2++;
        }
        else if(r==3)
        {
            t3++;
        }
        else if(r==4)
        {
            f4++;
        }
        else if(r==5)
        {
            f5++;
        }
        else if(r==6)
        {
            s6++;
        }
        else if(r==7)
        {
            s7++;
        }
        else if(r==8)
        {
            e++;
        }
        else if(r==9)
        {
            n9++;
        }
        n=n/10;
    }
        if(z<2&&o<2&&t2<2&&t3<2&&f4<2&&f5<5&&s6<2&&s7<2&&e<2&&n9<2)
        {
            printf("Unique Number");
        }
        else
        {
            printf("Not Unique Number");
        }
}