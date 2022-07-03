#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i;
    for(i=0;str[i]!=NULL;i++)
    {
        if (str[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%d",str[i]-48);
        }
    }
}